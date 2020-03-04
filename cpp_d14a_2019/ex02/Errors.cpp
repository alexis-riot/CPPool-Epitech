/*
** EPITECH PROJECT, 2020
** cpp_d14a_2019
** File description:
** Errors.cpp
*/

#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component) :
_message(std::move(message)),
_component(std::move(component)) {}

const std::string & NasaError::getComponent() const {
    return this->_component;
}

const char* NasaError::what() const throw() {
    return this->_message.c_str();
}
MissionCriticalError::MissionCriticalError(const std::string &message, const std::string &component) :
NasaError(message, component) {}

LifeCriticalError::LifeCriticalError(const std::string &message, const std::string &component) :
NasaError(message, component) {}

UserError::UserError(const std::string &message, const std::string &component) :
NasaError(message, component) {}

CommunicationError::CommunicationError(const std::string &message) :
NasaError(message, "CommunicationDevice") {}

