/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <string>
#include <iostream>

class Object
{
    public:
        Object(const std::string &name, const std::string &type);
        ~Object();
        std::string getName();
        std::string getType();

    protected:
        std::string _name;
        std::string _type;
};

std::ostream &operator<<(std::ostream &s, Object object);

#endif /* !OBJECT_HPP_ */
