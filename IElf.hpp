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

class IElf
{

    public:
        virtual ~IElf() {};

        virtual bool wrapObject(Wrap *wrap) = 0;
        virtual bool openWrap(Wrap *wrap) = 0;
        virtual bool closeWrap(Wrap *wrap) = 0;
        virtual bool takeOnTable(int index) = 0;
        virtual bool takeOnConveyor() = 0;
        virtual bool putOnTable() = 0;
        virtual bool putOnConveyor() = 0;
        virtual bool pressInButton() = 0;
        virtual bool pressOutButton() = 0;
        virtual const std::string *lookAtTable() = 0;
        virtual void assignTable(PapaXmasTable* table) = 0;
        virtual void assignConveyor(PapaXmasConveyorBelt *conveyor) = 0;

};

#endif // IELF_HPP