/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Object
*/

#include "Object.hpp"

Object::Object(const std::string &name, const std::string &type)
{
    this->_name = name;
    this->_type = type;
}

Object::~Object()
{
}

std::string Object::getName()
{
    return (_name);
}

std::string Object::getType()
{
    return (_type);
}

std::ostream &operator<<(std::ostream &s, Object object)
{
    s << "This object is a " << object.getName() << " and his type is " << object.getType() << std::endl;
    return (s);
}