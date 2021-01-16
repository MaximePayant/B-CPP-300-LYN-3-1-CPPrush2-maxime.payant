/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** PapaXmasElf.hpp
*/

#ifndef PAPAXMAS_ELF
#define PAPAXMAS_ELF

#include <iostream>

#include "speach.hpp"
#include "IElf.hpp"
#include "Object.hpp"
#include "Wrap.hpp"
#include "PapaXmasTable.hpp"
#include "PapaXmasConveyorBelt.hpp"

class PapaXmasElf :
    public IElf
{

    private:
        std::string m_name;
        PapaXmasTable *m_table;
        PapaXmasConveyorBelt *m_conveyor;

    public:
        PapaXmasElf() = delete;
        PapaXmasElf(const PapaXmasElf&) = delete;
        PapaXmasElf(PapaXmasElf&&) = delete;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Create an Elf
        ///
        /// @param name The name of the Elf
        /// @param table You can give a table now, or assign it later
        /// @param conveyor You can give a conveyor now, or assign it later
        /// @p @warning You need to assign a table if you want to assign a conveyor
        //
        PapaXmasElf(const std::string& name
                    , PapaXmasTable* table = nullptr
                    , PapaXmasConveyorBelt *conveyor = nullptr);

        ///////////////////////////////////////////////////////////////////////
        /// @brief Destruct an Elf
        //
        ~PapaXmasElf();

        ///////////////////////////////////////////////////////////////////////
        /// @brief Wrap the given @p object with the given @p wrap
        ///
        /// @param wrap The @p Wrap call to wrap the @p Object
        /// @param obj The @p Object to wrap
        /// @return true if the object was wrap, false otherwise
        //
        bool wrapObject(Wrap *wrap, Object *obj) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Open the given @p Wrap
        /// @warning Does nothing if it isn't a @p Box
        ///
        /// @param wrap The @p Wrap to open
        /// @return The @p Object in the given wrap, null if there is nothing
        //
        Object *openWrap(Wrap *wrap) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Close the given @p Wrap
        /// @warning Does nothing if it isn't a @p Box
        ///
        /// @param wrap The @p Wrap to close
        /// @return true if the wrap was closed, false otherwise
        //
        bool closeWrap(Wrap *wrap) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Take the @p Object at the given index on the elf's table
        ///
        /// @param index The index to access
        /// @return The @p Object on the elf's table at the given index
        //
        Object *takeOnTable(int index) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Take the @p Object on the elf's conveyor
        ///
        /// @return The @p Object on the elf's conveyor
        //
        Object *takeOnConveyor() override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Put the given @p Object on the elf's table
        ///
        /// @param obj The object to be put
        /// @return true if the object was put, false otherwise
        //
        bool putOnTable(Object *obj) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Put the given object on the elf's conveyor
        ///
        /// @param obj The object to be put
        /// @return true if the object was put, false otherwise
        //
        bool putOnConveyor(Object *obj) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Put an object on the elf's conveyor
        ///
        /// @return true if an object arrived, false otherwise
        //
        bool pressInButton() override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Send the object on the elf's conveyor to Santa
        ///
        /// @return true if the object goes, false otherwise
        //
        bool pressOutButton() override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Look the objects
        ///
        /// @return A list of the objects name
        //
        const std::string *lookAtTable() override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Assign the given table to the elf
        ///
        /// @param table table to be assign
        //
        const void assignTable(PapaXmasTable* table) override;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Assign the given conveyor to the elf
        ///
        /// @param conveyor conveyor to be assign
        //
        const void assignConveyor(PapaXmasConveyorBelt *conveyor) override;

};

#endif // PAPAXMAS_ELF