/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Parser.hpp
*/

#ifndef CPP_D16_2019_PARSER_HPP
#define CPP_D16_2019_PARSER_HPP


class Parser {
public:
    Parser();
    ~Parser();

    void feed(const std::string &str);
    int result() const;
    void reset();

private:
protected:
};


#endif //CPP_D16_2019_PARSER_HPP
