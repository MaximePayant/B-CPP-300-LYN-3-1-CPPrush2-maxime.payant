/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasTable
*/

#ifndef PAPAXMASTABLE_H
#define PAPAXMASTABLE_H

#include <iostream>

#include "ITable.hpp"

class PapaXmasTable :
    public ITable
{

    protected:
        Object *_table[10];

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Table (Object *)
        //
        PapaXmasTable();

        ///////////////////////////////////////////////////////////////////////
        /// @brief Destruct a Wrap
        ///
        /// @p @warning Attention to the invalid free
        //
        ~PapaXmasTable();

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves put an Object on the Table
        ///
        /// @return false if there is no place, true otherwise
        //
        bool putObject(Object *object) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves take an Object on the ConveyorBelt
        ///
        /// @return A pointer to the the Object who is on the Table at position pos
        //
        Object *takeObject(int pos) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief elves look for Objects on the Table
        ///
        /// @return an array of the titles of the various Objects. The last element in the array is null
        //
        const std::string *lookatTable() override;

};

ITable *createTable();

#endif /* !PAPAXMASTABLE_H */
