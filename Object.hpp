/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_
#include <string>

class Object {
    public:
        Object(std::string &name, std::string &type);
        ~Object();
    protected:
    private:
        std::string name;
        std::string type;
};

#endif /* !OBJECT_HPP_ */
