/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** ExampleOverride.cpp
*/

#include "ExampleOverride.hpp"

ExampleOverride::ExampleOverride() : MonitorModule("ExampleOverride", "/proc/cpuinfo", {"model name", "cpu MHz", "vendor_id" }) {}

ExampleOverride::~ExampleOverride() {}

void ExampleOverride::setInformations() {
    this->resetContent();
    this->setContent("Special for this module");
}

/*
 * Example d'utilisation d'un setInformations() pour ajouter un contenu différent

 ---------------

 * void ExampleOverride::setInformations() {
 *     this->resetContent();
 *     this->setContent("Special content for this module");
 * }
*/

/*
 * Example d'utilisation d'un setInformations() pour ajouter un contenu différent + ajouter le comportement générique

 ---------------

 * void ExampleOverride::setInformations() {
 *    MonitorModule::setInformations();
 *    this->setContent("Special content for this module");
 * }
*/