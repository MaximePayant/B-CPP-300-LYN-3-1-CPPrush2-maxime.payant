/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** IElf.hpp
*/

#ifndef IELF_HPP
#define IELF_HPP

class Wrap;
class Object;
class Box;
class Table;
class ConveyorBelt;

#include <vector>
#include <string>

class IElf
{

    public:
        virtual ~IElf() {};
        virtual Object *takeObject(Object *obj) = 0;                // Call obj.isTaken()
        virtual void wrapObject(Wrap *wrap, Object *obj) = 0;       // Call wrap.wrapMeThat()   // say "tuuuut tuuut tuut"
        virtual void takeWrap(Wrap *wrap) = 0;                      // Call obj.isTaken()       // say "whistles while working"
        virtual void putObject(Wrap *wrap, Object *obj) = 0;        //
        virtual void openBox(Wrap *wrap) = 0;                       // Call wrap.openMe
        virtual void closeBox(Wrap *wrap) = 0;                      // Call wrap.closeMe
        virtual Object *takeOnTable(Table *table) = 0;              //
        virtual Object *takeOnConveyor(ConveyorBelt *conveyor) = 0;             //
        virtual Object *putOnTable(ConveyorBelt *conveyor, Object *obj) = 0;    //
        virtual Object *putOnConveyor(ConveyorBelt *conveyor, Object *obj) = 0; //
        virtual void pressInButton(ConveyorBelt *conveyor) = 0;                 //
        virtual void pressOutButton(ConveyorBelt *conveyor) = 0;                //
        virtual std::vector<std::string> lookAtTable(Table *table) = 0;         //

};

#endif // IELF_HPP