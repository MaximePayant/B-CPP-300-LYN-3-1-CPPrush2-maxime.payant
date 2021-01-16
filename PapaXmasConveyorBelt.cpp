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
    if (!_wrap) {
        std::cerr << "Something is already on the ConveyorBelt." << std::endl;
        return nullptr;
    }
    _wrap = new GiftPaper();
    return (_wrap);
}

bool PapaXmasConveyorBelt::OUT(Object *obj)
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

IConveyorBelt *createConveyorBelt()
{
  return (new PapaXmasConveyorBelt);
}