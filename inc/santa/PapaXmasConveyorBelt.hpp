/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasConveyorBelt
*/

#ifndef PAPAXMASCONVEYORBELT_H
#define PAPAXMASCONVEYORBELT_H

#include <iostream>
#include <fstream>

#include "IConveyorBelt.hpp"
#include "GiftPaper.hpp"
#include "Box.hpp"

class PapaXmasConveyorBelt :
    public IConveyorBelt
{

    protected:
        Wrap *_wrap;

    public:

        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap
        ///
        //
        PapaXmasConveyorBelt();

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves receive Wraps by pressing the “IN” button of the ConveyorBelt
        ///
        /// @p @warning Attention check if something is already on the ConveyorBelt
        /// @return A pointer to the Wrap
        //
        Wrap *IN();

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves send what’s on the ConveyorBelt to Santa by pressing its OUT button
        ///
        /// @p @warning Attention check if something is already on the ConveyorBelt and can be send to Santa
        /// @return false if nothing is on the ConveyorBelt, true otherwise
        //
        bool OUT();

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves put an Object on the ConveyorBelt
        ///
        /// @p @warning Attention check if something is already on the ConveyorBelt
        /// @return false if something is already on the ConveyorBelt, true otherwise
        //
        bool putObject(Object *object) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves take an Object on the ConveyorBelt
        ///
        /// @return A pointer to the the Object who is on the ConveyorBelt
        //
        Object *takeObject() override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves look for an Object on the ConveyorBelt
        ///
        /// @return false if the nothing is on ConveyorBelt, true otherwise
        //
        bool lookatTable() override;

};

IConveyorBelt *createConveyorBelt();

#endif /* !PAPAXMASCONVEYORBELT_H */
