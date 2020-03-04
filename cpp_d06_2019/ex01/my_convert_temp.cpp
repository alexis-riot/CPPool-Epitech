/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main(void)
{
    float temperature = 0.0;
    float res = 0.0;
    std::string scale;

    std::cin >> temperature >> scale;
    std::cout << std::fixed;
    std::cout.precision(3);
    if (scale.compare("Celsius") == 0) {
        res = (temperature * 9/5) + 32;
        std::cout << std::setw(16) << res << std::setw(16) << "Fahrenheit" << std::endl;
    }
    if (scale.compare("Fahrenheit") == 0) {
        res = (temperature - 32) * 5/9;
        std::cout << std::setw(16) << res << std::setw(16) << "Celsius" << std::endl;
    }
    return 0;
}