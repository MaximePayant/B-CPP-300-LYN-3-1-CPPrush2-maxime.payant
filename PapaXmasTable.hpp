/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasTable
*/

#ifndef PAPAXMASTABLE_H
#define PAPAXMASTABLE_H

#include "Object.hpp"
#include <iostream>

class ITable
{
    public:
        virtual ~ITable();
        virtual bool putObject(Object *object) = 0;
        virtual Object *takeObject(int position) = 0;
        virtual const std::string *lookatTable() = 0;
};

class PapaXmasTable : public ITable
{
    protected:
        Object *_table[10];

    public:

    ///////////////////////////////////////////////////////////////////////
    /// @brief Create a Table (Object *)
    ///
    /// @p @warning R.A.S mann
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
    /// @p @warning R.A.S
    /// @return false if there is no place, true otherwise
    //
    bool putObject(Object *object) override;

    ///////////////////////////////////////////////////////////////////////
    /// @brief elves take an Object on the ConveyorBelt
    ///
    /// @p @warning Nothing to say
    /// @return A pointer to the the Object who is on the Table at position pos
    //
    Object *takeObject(int pos) override;

    ///////////////////////////////////////////////////////////////////////
    /// @brief elves look for Objects on the Table
    ///
    /// @p @warning Nothing to say
    /// @return an array of the titles of the various Objects. The last element in the array is null
    //
    const std::string *lookatTable() override;
};

ITable *createTable();

#endif /* !PAPAXMASTABLE_H */
