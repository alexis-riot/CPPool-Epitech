/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** CPU.cpp
*/

#include "CPU.hpp"
#include <iostream>
#include <string>

CPU::CPU() : MonitorModule("CPU", "/proc/cpuinfo", {"model name", "cpu MHz" }) {}

CPU::~CPU() {}

void CPU::setInformations() {

    std::ifstream file(this->getFilePath().c_str(), std::ios::in);
    std::string line;
    std::vector<CPUData> entries1;
	std::vector<CPUData> entries2;
    std::string save;

    this->resetContent();

    if (!file)
        return this->setContent("Cannot get informations.");

    for(auto& s: this->getParameters()) {
        if (s.empty())
            continue;

        while (getline(file, line)) {
            if (line.find(s.c_str()) != std::string::npos) {
                this->setContent(line);
                break;
            }
        }
    }
    while (getline(file, line)) {
        if (line.find("processor") != std::string::npos)
            save = line;
    }
    save.erase(0,12);
    save = std::to_string(std::stoi(save) + 1);
    this->setContent("processor	: " + save);
	ReadStatsCPU(entries1);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	ReadStatsCPU(entries2);
	PrintStats(entries1, entries2);
}


void CPU::ReadStatsCPU(std::vector<CPUData> & entries)
{
	std::ifstream fileStat("/proc/stat");

	std::string line;

	const std::string STR_CPU("cpu");
	const std::size_t LEN_STR_CPU = STR_CPU.size();
	const std::string STR_TOT("total");

	while(std::getline(fileStat, line)) {
		if(!line.compare(0, LEN_STR_CPU, STR_CPU)) {
			std::istringstream ss(line);

			entries.emplace_back(CPUData());
			CPUData & entry = entries.back();
			ss >> entry.cpu;
			if(entry.cpu.size() > LEN_STR_CPU)
				entry.cpu.erase(0, LEN_STR_CPU);
			else
				entry.cpu = STR_TOT;

			for(int i = 0; i < 10; ++i)
				ss >> entry.times[i];
		}
	}
}

size_t CPU::GetIdleTime(const CPUData & e)
{
	return	e.times[S_IDLE] + 
			e.times[S_IOWAIT];
}

size_t CPU::GetActiveTime(const CPUData & e)
{
	return	e.times[S_USER] +
			e.times[S_NICE] +
			e.times[S_SYSTEM] +
			e.times[S_IRQ] +
			e.times[S_SOFTIRQ] +
			e.times[S_STEAL] +
			e.times[S_GUEST] +
			e.times[S_GUEST_NICE];
}

void CPU::PrintStats(const std::vector<CPUData> & entries1, const std::vector<CPUData> & entries2)
{
	const size_t NUM_ENTRIES = entries1.size();
    std::string line;
	std::string bar;

	for(size_t i = 0; i < NUM_ENTRIES; ++i)
	{
		const CPUData & e1 = entries1[i];
		const CPUData & e2 = entries2[i];
		const size_t barSize = 20;
		size_t num = 0;

		const float ACTIVE_TIME	= static_cast<float>(GetActiveTime(e2) - GetActiveTime(e1));
		const float IDLE_TIME	= static_cast<float>(GetIdleTime(e2) - GetIdleTime(e1));
		const float TOTAL_TIME	= ACTIVE_TIME + IDLE_TIME;

        if (i == 0)
            line = e1.cpu + "] ";
		else
            line = "cpu " + e1.cpu + "] ";

        line = line + "active  : " + std::to_string(100.f * ACTIVE_TIME / TOTAL_TIME);
		bar = "[";
		for (; num < (100.f * ACTIVE_TIME / TOTAL_TIME) / (100/barSize); num++)
			bar += "#";
		for (;num < barSize; num++)
			bar += ".";
		bar += "]";
		line += " %\t" + bar;
        this->setContent(line);
	}
}
