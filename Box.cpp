/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Box
*/

#include "Box.hpp"

Box::Box(const std::string &name, const std::string &type) : Wrap(name, type)
{
    this->_name = name;
    this->_type = type;
}

Box::~Box()
{
}

bool Box::wrapMeThat(Object *gift)
{
    if (this->_is_open == false || this->_is_gift != false)
        return (false);
    this->_gift = gift;
    this->_is_gift = true;
    return (true);
}
