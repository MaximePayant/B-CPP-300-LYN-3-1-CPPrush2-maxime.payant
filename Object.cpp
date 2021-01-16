/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Object
*/

#include "Object.hpp"

Object::Object(std::string &name, std::string &type)
{
    this->name = name;
    this->type = type;
}

Object::~Object()
{
}
