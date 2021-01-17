/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Teddy
*/

#include "Teddy.hpp"

Teddy::Teddy(std::string const &name) :
Toy(name, "Teddy")
{}

void Teddy::isTaken() const
{
    std::cout << "gra hu" << std::endl;
}