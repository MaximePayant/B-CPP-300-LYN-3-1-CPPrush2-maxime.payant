/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** main.cpp
*/

#include "PapaXmasConveyorBelt.hpp"
#include "PapaXmasTable.hpp"
#include "PapaXmasElf.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

int main(void)
{
    TableRand table = TableRand();
    ConveyorBeltRand conveyor = ConveyorBeltRand("Gift.xml");
    PapaXmasElf elf("Patrick");

    srand(time(NULL));

    elf.assignTable(&table);
    elf.assignConveyor(&conveyor);
    elf.itsTimeToWork();
    return (0);
}