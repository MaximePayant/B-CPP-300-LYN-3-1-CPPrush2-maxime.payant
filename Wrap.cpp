/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Wrap
*/

#include "Wrap.hpp"
#include "Object.hpp"

Wrap::Wrap()
{
    this->_is_gift = 0;
    this->_is_open = 0;
    this->_gift = nullptr;
}

Wrap::~Wrap()
{
}

void Wrap::wrapMeThat(Object *gift)
{
    if (this->_is_gift != 0)
        return;
    this->_gift = gift;
    this->_is_gift = 1;
}

Object *Wrap::openMe()
{
    Object *tmp = this->_gift;

    if (this->_is_gift == 0)
        return nullptr;
    this->_is_open = 1;
    this->_is_gift = 0;
    return tmp;
}

void Wrap::closeMe()
{
    this->_is_open = 0;
}

int Wrap::isOpen() const
{
    return this->_is_open;
}
