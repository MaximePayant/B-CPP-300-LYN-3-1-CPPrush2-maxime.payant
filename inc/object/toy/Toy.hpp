/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class Toy :
    public Object
{

    protected:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Toy
        ///
        /// @param name Name provide by his children class
        /// @param type Type provide by his children class
        //
        Toy(std::string const &name, std::string const &type);

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Interface for children class
        //
        virtual void isTaken() const = 0;

};

#endif /* !TOY_HPP_ */
