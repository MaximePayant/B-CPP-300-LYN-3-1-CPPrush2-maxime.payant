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
        virtual ~Object();
        std::string getName() const;
        std::string getType() const;
        std::string getAttribut() const;

    protected:
        Object(const std::string &name, const std::string &type, const std::string& attribut);
        std::string _name;
        std::string _type;
        std::string _attribut;
};

std::ostream &operator<<(std::ostream &s, Object object);

#endif /* !OBJECT_HPP_ */
