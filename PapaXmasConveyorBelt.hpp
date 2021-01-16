/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasConveyorBelt
*/

#ifndef PAPAXMASCONVEYORBELT_H
#define PAPAXMASCONVEYORBELT_H

#include <iostream>
#include <fstream>
#include "Object.hpp"
#include "Wrap.hpp"
#include "GiftPaper.hpp"
#include "Box.hpp"

class IConveyorBelt
{
    public:
        virtual ~IConveyorBelt();
        virtual Wrap *IN() = 0;
        virtual bool OUT() = 0;
        virtual bool putObject(Object *object) = 0;
        virtual Object *takeObject() = 0;
        virtual bool lookatTable() = 0;
};

class PapaXmasConveyorBelt : public IConveyorBelt
{
    public:
        PapaXmasConveyorBelt();
        ~PapaXmasConveyorBelt();

        Wrap *IN();
        bool OUT();
        bool putObject(Object *object) override;
        Object *takeObject() override;
        bool lookatTable() override;

    protected:
        Wrap *_wrap;
};

IConveyorBelt *createConveyorBelt();

#endif /* !PAPAXMASCONVEYORBELT_H */
