/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Wrap
*/

#include "Wrap.hpp"
#include "Object.hpp"

Wrap::Wrap(const std::string &name, const std::string &type) : Object("Wrap", "");
{
    this->_is_gift = false;
    this->_is_open = false;
    this->_gift = nullptr;
    this->_name = name;
    this->_type = type;
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

Object *Wrap::openMe()
{
    Object *tmp = this->_gift;

    this->_is_open = true;
    this->_is_gift = false;
    this->_gift = nullptr;
    return (tmp);
}

Object *Wrap::accessGift() const
{
    return this->_gift;
}

void Wrap::closeMe()
{
    this->_is_open = false;
}

bool Wrap::isOpen() const
{
    return this->_is_open;
}
