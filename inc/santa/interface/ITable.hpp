/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** ITable.hpp
*/

#ifndef ITABLE_HPP
#define ITABLE_HPP

#include "Object.hpp"

class ITable
{

    public:
        virtual bool putObject(Object *object) = 0;
        virtual Object *takeObject(int position) = 0;
        virtual const std::string *lookatTable() = 0;

};

#endif // ITABLE_HPP