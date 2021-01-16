/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** LittlePoney
*/

#include "LittlePony.hpp"
#include <iostream>

LittlePony::LittlePony(std::string const &name) : Toy(name, type)
{
}

LittlePony::~LittlePony()
{
}

void LittlePony::isTaken() const
{
    std::cout << "yo man" << std::endl;
}