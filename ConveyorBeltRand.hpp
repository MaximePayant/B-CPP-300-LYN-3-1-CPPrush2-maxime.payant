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

    ///////////////////////////////////////////////////////////////////////
    /// @brief Create a Wrap at random with a file .xml for Santa
    ///
    /// @param Name of the file for Santa
    /// @p @warning Nothing to say
    //
    ConveyorBeltRand(std::string filename);

    ///////////////////////////////////////////////////////////////////////
    /// @brief Destruct the Wrap *
    ///
    /// @p @warning Nothing to say
    //
    virtual ~ConveyorBeltRand();

    ///////////////////////////////////////////////////////////////////////
    /// @brief Do my random
    ///
    /// @param A int for my random
    /// @p @warning Nothing to say
    /// @return Nothing
    //
    void myrand(int r);
};

#endif /* CONVEYORBELTRAND_H */