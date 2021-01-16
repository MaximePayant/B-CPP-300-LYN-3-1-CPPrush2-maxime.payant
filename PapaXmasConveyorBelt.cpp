/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasConveyorBelt
*/

#include "PapaXmasConveyorBelt.hpp"

IConveyorBelt::~IConveyorBelt()
{
}

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
    _wrap = nullptr;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
}

Wrap *PapaXmasConveyorBelt::IN()
{
    int i = 0;
    if (_wrap) {
        std::cerr << "Something is already on the ConveyorBelt." << std::endl;
        return nullptr;
    }
    i = rand() % 2;
    if (i == 0)
        _wrap = new GiftPaper("MyGIFTPAPER", "GiftPaper");
    else
        _wrap = new Box("MyBOX", "Box");
    return (_wrap);
}

bool PapaXmasConveyorBelt::OUT()
{
    if (!_wrap) {
        std::cerr << "Nothing is on the ConveyorBelt for sending it to Santa." << std::endl;
        return false;
    }
    delete _wrap;
    _wrap = nullptr;
    return true;
}

bool PapaXmasConveyorBelt::lookatTable()
{
    if (!_wrap)
        return false;
    return true;
}


bool PapaXmasConveyorBelt::putObject(Object *object)
{
    Box *box = new Box("Box", "");
    if (lookatTable() == false) {
        box->openMe();
        box->wrapMeThat(object);
        box->closeMe();
        _wrap->wrapMeThat(box);
        return (true);
    }
    return (false);
}

Object *PapaXmasConveyorBelt::takeObject()
{
    return (_wrap->accessGift());
}

IConveyorBelt *createConveyorBelt()
{
    return (new PapaXmasConveyorBelt);
}