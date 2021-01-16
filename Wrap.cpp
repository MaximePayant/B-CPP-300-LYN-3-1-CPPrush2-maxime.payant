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
    this->_is_gift = false;
    this->_is_open = false;
    this->_gift = nullptr;
}

Wrap::~Wrap()
{
    delete this->_gift;
}

void Wrap::wrapMeThat(Object *gift)
{
    if (this->_is_gift != false)
        return;
    this->_gift = gift;
    this->_is_gift = true;
}

void Wrap::openMe()
{
    this->_is_open = true;
}

void Wrap::closeMe()
{
    this->_is_open = false;
}

bool Wrap::isOpen() const
{
    return this->_is_open;
}
