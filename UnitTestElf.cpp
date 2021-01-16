/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** UnitTestElf.cpp
*/

#include "PapaXmasConveyorBelt.hpp"
#include "PapaXmasTable.hpp"
#include "PapaXmasElf.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

bool object_on_table()
{
    std::cout << "ELF PLAY WITH TABLE ====" << std::endl;
    PapaXmasTable table;
    Object pony = LittlePony("Little Pony");
    PapaXmasElf elf("Patrick");

    table.putObject(&pony);
    elf.assignTable(&table);
    elf.takeOnTable(LEFT, 0);
    elf.dispObject();
    elf.takeOnTable(LEFT, 0);
    elf.putOnTable(LEFT);
    elf.dispObject();
    elf.takeOnTable(LEFT, 5);
    elf.takeOnTable(LEFT, 11);
    elf.takeOnTable(LEFT, -7);
    return (true);
}

bool take_object_on_convoyer()
{
    std::cout << "ELF PLAY WITH CONVOYER ==" << std::endl;
    PapaXmasConveyorBelt conveyor;
    PapaXmasElf elf("Patrick");

    elf.assignConveyor(&conveyor);
    elf.pressInButton();
    elf.takeOnConveyor(LEFT);
    elf.dispObject();
    return (true);
}

bool unit_test()
{
    //PapaXmasConveyorBelt *conveyor = new PapaXmasConveyorBelt();
    //PapaXmasTable *table = new PapaXmasTable();
    //PapaXmasElf elf("Patrick");
    //Object *pony = new LittlePony("Little Pony");
    //Object *teddy = new Teddy("Teddy Bear");
    //Object *box1 = new Box("Carton");
    //Object *box2 = new Box("Boite");
    //Object *giftPaper1 = new GiftPaper("Papier vert");
    //Object *giftPaper2 = new GiftPaper("Papier bleu");

    object_on_table();
    std::cout << "========================" << std::endl << std::endl;
    take_object_on_convoyer();
    std::cout << "========================" << std::endl << std::endl;
    return (true);
}

int main(void)
{
    if (!unit_test())
        std::cout << "Aannd you fail !" << std::endl;
    else
        std::cout << "Your elf is so cool" << std::endl;
    return (0);
}