/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** ConveyorBeltRand
*/

#include "ConveyorBeltRand.hpp"

void ConveyorBeltRand::myrand(int r)
{
    if (r == 0)
        _wrap = new Box("MyBOX");
    else
        _wrap = new GiftPaper("MyGiftPaper", "GiftPaper");
}

ConveyorBeltRand::ConveyorBeltRand() : PapaXmasConveyorBelt()
{
    int r = rand() % 4;
    myrand(r);
}

ConveyorBeltRand::~ConveyorBeltRand()
{
}