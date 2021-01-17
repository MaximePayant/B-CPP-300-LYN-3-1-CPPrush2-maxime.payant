/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** LittlePoney
*/

#ifndef LITTLEPONEY_HPP_
#define LITTLEPONEY_HPP_

#include "Toy.hpp"

class LittlePony :
    public Toy
{

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Toy Little Pony
        ///
        /// @param name The name of the object
        //
        LittlePony(std::string const &name);

        ///////////////////////////////////////////////////////////////////////
        /// @brief Disp a message
        //
        void isTaken() const override;

};

#endif /* !LITTLEPONEY_HPP_ */
