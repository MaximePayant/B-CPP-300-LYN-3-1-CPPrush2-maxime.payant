/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** PapaXmasElf.hpp
*/

#ifndef PAPAXMAS_ELF
#define PAPAXMAS_ELF

#include <iostream>

#include "IElf.hpp"

class PapaXmasElf :
    public IElf
{

    private:
        Table *m_table;
        ConveyorBelt *m_conveyor;

    public:
        PapaXmasElf();

};

#endif // PAPAXMAS_ELF