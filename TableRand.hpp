/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** TableRand
*/

#ifndef TABLERAND_H
#define TABLERAND_H

#include "PapaXmasTable.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

class TableRand : public PapaXmasTable
{
    public:

    ///////////////////////////////////////////////////////////////////////
    /// @brief Create a Table with random elements
    ///
    /// @p @warning Nothing to say
    //
    TableRand();

    ///////////////////////////////////////////////////////////////////////
    /// @brief Destruct a Table of Object *
    ///
    /// @p @warning Nothing to say
    //
    virtual ~TableRand();

    ///////////////////////////////////////////////////////////////////////
    /// @brief Do my random
    ///
    /// @param A int for the position in table for the new element
    /// @param A int for my random
    /// @p @warning Nothing to say
    /// @return Nothing
    //
    void myrand(int i, int r);
};

#endif /* TABLERAND_H */