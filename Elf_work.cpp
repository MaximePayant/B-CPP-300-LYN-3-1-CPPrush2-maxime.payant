/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Elf_work.cpp
*/

#include "PapaXmasElf.hpp"

static Object *searchToyInTable(PapaXmasTable *table)
{
    Object *tmp;

    for (int ctr = 0; ctr < 10 ; ctr += 1) {
        tmp = table->takeObject(ctr);
        if (!tmp)
            continue;
        if (tmp->getAttribut() == "Toy")
            return (tmp);
        table->putObject(tmp);
    }
    return (nullptr);
}

static Object *searchBox(PapaXmasTable *table, PapaXmasConveyorBelt *conveyor)
{
    Object *tmp;

    tmp = conveyor->takeObject();
    if (tmp) {
        if (tmp->getType() == "Box")
            return (tmp);
        conveyor->putObject(tmp);
    }
    for (int ctr = 0; ctr < 10 ; ctr += 1) {
        tmp = table->takeObject(ctr);
        if (!tmp)
            continue;
        if (tmp->getType() == "Box")
            return (tmp);
        table->putObject(tmp);
    }
    return (nullptr);
}

static Object *searchGiftPaper(PapaXmasTable *table, PapaXmasConveyorBelt *conveyor)
{
    Object *tmp;

    tmp = conveyor->takeObject();
    if (tmp) {
        if (tmp->getType() == "GiftPaper")
            return (tmp);
        conveyor->putObject(tmp);
    }
    for (int ctr = 0; ctr < 10 ; ctr += 1) {
        tmp = table->takeObject(ctr);
        if (!tmp)
            continue;
        if (tmp->getType() == "GiftPaper")
            return (tmp);
        table->putObject(tmp);
    }
    return (nullptr);
}

void PapaXmasElf::itsTimeToWork()
{
    while (1) {
        if (!(m_object[LEFT] = searchToyInTable(m_table)))
            return;
        if (!(m_object[RIGHT] = searchBox(m_table, m_conveyor)))
            while (1) {
                pressInButton();
                takeOnConveyor(RIGHT);
                if (m_object[RIGHT]->getType() == "Box")
                    break;
                if (!putOnTable(RIGHT))
                    return;
            }
        openWrap(RIGHT);
        wrapObject(LEFT);
        if (!(m_object[LEFT] = searchGiftPaper(m_table, m_conveyor)))
            while (1) {
                pressInButton();
                takeOnConveyor(LEFT);
                if (m_object[LEFT]->getType() == "GiftPaper")
                    break;
                if (!putOnTable(LEFT))
                    return;
            }
        wrapObject(RIGHT);
        putOnConveyor(LEFT);
        pressOutButton();
    }
}