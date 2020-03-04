/*
** EPITECH PROJECT, 2020
** cpp_d14a_2019
** File description:
** Errors.hpp
*/


#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <iostream>
#include <string>

class NasaError : public std::exception
{
public:
    NasaError(std::string const &message,
              std::string const &component = "Unknown");
    virtual ~NasaError() throw() {};
    std::string const &getComponent() const;
    virtual const char *what() const throw();
private:
    std::string _message;
    std::string _component;
};

class MissionCriticalError : public NasaError {
public:
    MissionCriticalError(std::string const &message,
                         std::string const &component = "Unknown");
};

class LifeCriticalError : public NasaError {
public:
    LifeCriticalError(std::string const &message,
                      std::string const &component = "Unknown");
};

class UserError : public NasaError {
public:
    UserError(std::string const &message,
              std::string const &component = "Unknown");
};

class CommunicationError : public NasaError {
public:
    CommunicationError(std::string const &message);
};

#endif
