/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Teddy
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_
#include "Toy.hpp"
#include <iostream>

class Teddy : public Toy
{
    public:
        Teddy(std::string const &name);
        ~Teddy();

        void isTaken() const override;
};

#endif /* !TEDDY_HPP_ */