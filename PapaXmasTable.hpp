/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasTable
*/

#ifndef PAPAXMASTABLE_H
#define PAPAXMASTABLE_H

#include "Object.hpp"
#include <iostream>

class ITable
{
    public:
        virtual ~ITable();
        virtual bool putObject(Object *object) = 0;
        virtual Object *takeObject(int position) = 0;
        virtual const std::string *lookatTable() = 0;
};

class PapaXmasTable : public ITable
{
    public:
        PapaXmasTable();
        ~PapaXmasTable();
        Object *takeObject(int position);
        bool putObject(Object *object);
        const std::string *lookatTable();

    protected:
        Object *_table[10];
};

ITable *createTable();

#endif /* !PAPAXMASTABLE_H */
