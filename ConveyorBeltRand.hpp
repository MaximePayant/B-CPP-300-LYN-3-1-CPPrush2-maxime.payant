/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** ConveyorBeltRand
*/

#ifndef CONVEYORBELTRAND_H
#define CONVEYORBELTRAND_H

#include "PapaXmasConveyorBelt.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include <fstream>


class ConveyorBeltRand : public PapaXmasConveyorBelt
{
    public:
        ConveyorBeltRand(std::string filename);
        ~ConveyorBeltRand();
        void myrand(int r);
};

#endif /* CONVEYORBELTRAND_H */