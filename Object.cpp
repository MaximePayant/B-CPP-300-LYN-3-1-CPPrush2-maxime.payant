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
