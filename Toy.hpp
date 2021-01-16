/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_
#include "Object.hpp"

class Toy : public Object
{
    public:
        Toy(std::string const &name, std::string const &type);
        ~Toy();

        virtual void isTaken() const = 0;
        std::string getType();
        std::string getName();
};

#endif /* !TOY_HPP_ */
