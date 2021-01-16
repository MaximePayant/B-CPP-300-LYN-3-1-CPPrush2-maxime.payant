/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(std::string const &name, std::string const &type) : Object(name, type)
{
}

Toy::~Toy()
{
}

std::string Toy::getType()
{
    return (this->_type);
}

std::string Toy::getName()
{
    return (this->_name);   
}