/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** CPU.hpp
*/

#ifndef CPP_RUSH3_2019_CPU_HPP
#define CPP_RUSH3_2019_CPU_HPP

#include "../MonitorModule.hpp"

#include <chrono>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

enum CPUStates
{
	S_USER = 0,
	S_NICE,
	S_SYSTEM,
	S_IDLE,
	S_IOWAIT,
	S_IRQ,
	S_SOFTIRQ,
	S_STEAL,
	S_GUEST,
	S_GUEST_NICE
};

typedef struct CPUData
{
	std::string cpu;
	size_t times[10];
} CPUData;

class CPU : public MonitorModule {
public:
    CPU();
    ~CPU();

    void setInformations() override;
    void ReadStatsCPU(std::vector<CPUData> & entries);
    size_t GetIdleTime(const CPUData & e);
    size_t GetActiveTime(const CPUData & e);
    void PrintStats(const std::vector<CPUData> & entries1, const std::vector<CPUData> & entries2);

private:
protected:
};


#endif //CPP_RUSH3_2019_CPU_HPP
