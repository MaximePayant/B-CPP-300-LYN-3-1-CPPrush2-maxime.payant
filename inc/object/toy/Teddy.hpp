/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Teddy
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include <iostream>

#include "Toy.hpp"

class Teddy :
    public Toy
{

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Toy Teddy
        ///
        /// @param name The name of the object
        //
        Teddy(std::string const &name);

        ///////////////////////////////////////////////////////////////////////
        /// @brief Disp a message
        //
        void isTaken() const override;

};

#endif /* !TEDDY_HPP_ */