/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Wrap
*/

#include "Wrap.hpp"
#include "Object.hpp"

Wrap::Wrap(const std::string &name, const std::string& type) :
Object(name, type, "Wrap")
{
    this->_is_gift = false;
    this->_is_open = false;
    this->_gift = nullptr;
    this->_name = name;
}

Wrap::~Wrap()
{
    delete this->_gift;
}

/*
** Wraps gifts
*/
bool Wrap::wrapMeThat(Object *gift)
{
    if (this->_is_gift != false)
        return (false);
    this->_gift = gift;
    this->_is_open = false;
    this->_is_gift = true;
    return (true);
}

/*
** Opens gifts and return
*/
Object *Wrap::openMe()
{
    Object *tmp = this->_gift;

    this->_is_open = true;
    this->_is_gift = false;
    this->_gift = nullptr;
    return (tmp);
}

/*
** Gets access to gift for debugging purposes
*/
Object *Wrap::accessGift() const
{
    if (!_gift)
        return (nullptr);
    return this->_gift;
}

/*
** Closes Wrap
*/
void Wrap::closeMe()
{
    this->_is_open = false;
}

/*
** Checks if the Wrap is open
*/
bool Wrap::isOpen() const
{
    return this->_is_open;
}
