/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Meminfo.cpp
*/

#include "Meminfo.hpp"

Meminfo::Meminfo() : MonitorModule("Memory Info", "/proc/meminfo", { "MemTotal", "MemFree", "MemAvailable", "Cached", "Active", "Dirty" }) {}

Meminfo::~Meminfo() {}
