/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Box
*/

#include "Box.hpp"

Box::Box()
{
}

Box::~Box()
{
}

void Box::wrapMeThat(Object *gift)
{
    if (this->_is_open == 0 || this->_is_gift != 0)
        return;
    this->_gift = gift;
    this->_is_gift = 1;
}
