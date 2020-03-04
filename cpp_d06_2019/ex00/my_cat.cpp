/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    std::string content;

    if (argc <= 1) {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return (84);
    }
    for (int i = 1; i < argc; i++) {
        std::ifstream sfile;

        sfile.open(argv[i]);
        if (!sfile.is_open()) {
            std::cerr << "my_cat: " << argv[i] <<": No such file or directory" << std::endl;
            return (84);
        }
        while (std::getline(sfile, content, '\0')) {
            std::cout << content << std::flush;
        }
        sfile.close();
    }
    return 0;
}