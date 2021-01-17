/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** ConveyorBeltRand
*/

#ifndef CONVEYORBELTRAND_H
#define CONVEYORBELTRAND_H

#include <fstream>

#include "PapaXmasConveyorBelt.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

class ConveyorBeltRand :
    public PapaXmasConveyorBelt
{

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap at random with a file .xml for Santa
        ///
        /// @param Name of the file for Santa
        //
        ConveyorBeltRand(std::string filename);

        ///////////////////////////////////////////////////////////////////////
        /// @brief Do my random
        ///
        /// @param A int for my random
        //
        void myrand(int r);

};

#endif /* CONVEYORBELTRAND_H */