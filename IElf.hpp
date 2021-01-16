/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** IElf.hpp
*/

#ifndef IELF_HPP
#define IELF_HPP

#include "PapaXmasConveyorBelt.hpp"
#include "PapaXmasTable.hpp"
#include "Object.hpp"
#include "Wrap.hpp"

#include <vector>
#include <string>

typedef enum {LEFT, RIGHT} Hand;

class IElf
{
    protected:

        virtual ~IElf() {};

        virtual bool wrapObject(Hand hand) = 0;
        virtual bool openWrap(Hand hand) = 0;
        virtual bool closeWrap(Hand hand) = 0;
        virtual bool takeOnTable(Hand hand, int index) = 0;
        virtual bool takeOnConveyor(Hand hand) = 0;
        virtual bool putOnTable(Hand hand) = 0;
        virtual bool putOnConveyor(Hand hand) = 0;
        virtual bool pressInButton() = 0;
        virtual bool pressOutButton() = 0;
        virtual const std::string *lookAtTable() = 0;
        virtual void assignTable(PapaXmasTable* table) = 0;
        virtual void assignConveyor(PapaXmasConveyorBelt *conveyor) = 0;

};

#endif // IELF_HPP