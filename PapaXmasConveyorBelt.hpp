/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasConveyorBelt
*/

#ifndef PAPAXMASCONVEYORBELT_H
#define PAPAXMASCONVEYORBELT_H

#include "Object.hpp"
#include "Wrap.hpp"
#include "GiftPaper.hpp"
#include <iostream>

class IConveyorBelt
{
    public:
        virtual ~IConveyorBelt();
        virtual Wrap *IN() = 0;
        virtual bool OUT(Object *obj) = 0;
        virtual bool lookatTable() = 0;
};

class PapaXmasConveyorBelt : public IConveyorBelt
{
    public:
        PapaXmasConveyorBelt();
        ~PapaXmasConveyorBelt();
        Wrap *IN();
        bool OUT(Object *object);
        bool lookatTable();

    protected:
        Wrap *_wrap;
};

IConveyorBelt *createConveyorBelt();

#endif /* !PAPAXMASCONVEYORBELT_H */
