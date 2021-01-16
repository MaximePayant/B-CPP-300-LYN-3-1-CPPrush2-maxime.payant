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

/*
bool object_on_table()
{
    std::cout << "ELF PLAY WITH TABLE ====" << std::endl;
    PapaXmasTable table;
    Object *pony = new LittlePony("Little Pony");
    PapaXmasElf elf("Patrick");

    table.putObject(pony);
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

bool make_perfect_gift()
{
    std::cout << "ELF MAKE PERFECT GIFT ===" << std::endl;
    PapaXmasTable table;
    PapaXmasConveyorBelt conveyor;
    PapaXmasElf elf("Patrick");
    Object *box = new Box("Carton");
    Object *giftPaper = new GiftPaper("Papier vert");
    Object *pony = new LittlePony("Little Pony");

    table.putObject(box);
    table.putObject(giftPaper);
    table.putObject(pony);
    elf.assignTable(&table);
    elf.assignConveyor(&conveyor);
    elf.takeOnTable(LEFT, 0);
    elf.takeOnTable(RIGHT, 2);
    elf.dispObject();
    elf.openWrap(LEFT);
    elf.wrapObject(RIGHT);
    elf.dispObject();
    elf.takeOnTable(RIGHT, 1);
    elf.dispObject();
    elf.wrapObject(LEFT);
    elf.dispObject();
    elf.putOnConveyor(RIGHT);
    elf.pressOutButton();
    return (true);
}

bool unit_test()
{
    object_on_table();
    std::cout << "========================" << std::endl << std::endl;
    take_object_on_convoyer();
    std::cout << "========================" << std::endl << std::endl;
    make_perfect_gift();
    std::cout << "========================" << std::endl << std::endl;
    return (true);
}
*/

int main(void)
{
    //if (!unit_test())
    //    std::cout << "Aannd you fail !" << std::endl;
    //else
    //    std::cout << "Your elf is so cool" << std::endl;

    srand(time(NULL));

    TableRand table = TableRand();
    ConveyorBeltRand conveyor = ConveyorBeltRand("Gift.xml");
    PapaXmasElf elf("Patrick");

    elf.assignTable(&table);
    elf.assignConveyor(&conveyor);
    elf.itsTimeToWork();
    return (0);
}