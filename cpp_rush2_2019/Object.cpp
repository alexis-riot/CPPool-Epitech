/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Object
*/

#include "Object.hpp"
#include "Toy.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"


Object::Object(const std::string title) : _title(title), _taken(false)
{
}

Object::~Object()
{
}

std::string Object::getTitle() const
{
    return(_title);
}

Object **MyUnitTests() {
    Object **obj = new Object*[3];

    obj[0] = new Teddy("cuddles");
    obj[1] = new Box("box");
    obj[2] = new GiftPaper("paper");
    return (obj);
}

Object *MyUnitTests(Object **obj) {
    if (!obj)
        return (NULL);
    if (!dynamic_cast<Teddy*>(obj[0]) || !dynamic_cast<Box*>(obj[1]) || !dynamic_cast<GiftPaper*>(obj[2])) {
        std::cerr << "Object sent as parameter is not valid." << std::endl;
        return (NULL);
    }
    obj[1]->wrapMeThat(obj[0]);
    obj[2]->wrapMeThat(obj[1]);
    return (obj[2]);
}

bool Object::wrapMeThat(Object *obj)
{
    obj = NULL;
    obj = obj;
    return(false);
}
