/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** IConveyorBelt.hpp
*/

#ifndef ICONVEYOR_BELT
#define ICONVEYOR_BELT

#include "Wrap.hpp"

class IConveyorBelt
{

    public:
        virtual Wrap *IN() = 0;
        virtual bool OUT() = 0;
        virtual bool putObject(Object *object) = 0;
        virtual Object *takeObject() = 0;
        virtual bool lookatTable() = 0;

};

#endif // ICONVEYOR_BELT