/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_
#include <string>

class Object
{
    public:
        Object(const std::string &name, const std::string &type);
        ~Object();

    private:
        std::string _name;
        std::string _type;
};

#endif /* !OBJECT_HPP_ */
