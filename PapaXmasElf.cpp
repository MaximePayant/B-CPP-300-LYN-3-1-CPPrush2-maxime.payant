/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** PapaXmasElf.cpp
*/

#include "PapaXmasElf.hpp"

PapaXmasElf::PapaXmasElf(const std::string& name
                        , PapaXmasTable* table
                        , PapaXmasConveyorBelt *conveyor) :
m_name(name),
m_table(table),
m_conveyor(conveyor)
{
    speach::disp(SP_ELF_CREATE(m_name));
}

PapaXmasElf::~PapaXmasElf()
{
    speach::disp(SP_ELF_DESTROY(m_name));
}

bool PapaXmasElf::wrapObject(Wrap *wrap, Object *obj)
{
    speach::disp("tuuuut tuuut tuut");
    if (!wrap)
        return (speach::error(SP_WRAP_NOEXIST), false);
    if (!obj);
        return (speach::error(SP_OBJ_NOEXIST), false);
    wrap->wrapMeThat(obj);
    return (true);
}

Object* PapaXmasElf::openWrap(Wrap *wrap)
{
    if (!wrap)
        return (speach::error(SP_WRAP_NOEXIST), nullptr);
    return (wrap->openMe());
}

bool PapaXmasElf::closeWrap(Wrap *wrap)
{
    if (!wrap)
        return (speach::error(SP_WRAP_NOEXIST), false);
    wrap->closeMe();
    return (true);
}

Object* PapaXmasElf::takeOnTable(int index)
{
    if (!m_table)
        return (speach::error(SP_TABLE_NOEXIST), nullptr);
    if (index < 0 || index > 10)
        return (speach::error(SP_WRONG_INDEX), nullptr);
    return (m_table->takeObject(index));

}

Object* PapaXmasElf::takeOnConveyor()
{
    if (!m_conveyor)
        return (speach::error(SP_CONVEYOR_NOEXIST), nullptr);
    speach::disp("whistles while working");
    return (m_conveyor->takeObject());
}

bool PapaXmasElf::putOnTable(Object *obj)
{
    if (!m_table)
        return (speach::error(SP_TABLE_NOEXIST), false);
    if (!obj)
        return (speach::error(SP_OBJ_NOEXIST), false);
    return (m_table->putObject(obj));
}

bool PapaXmasElf::putOnConveyor(Object *obj)
{
    if (!m_conveyor)
        return (speach::error(SP_CONVEYOR_NOEXIST), false);
    if (!obj)
        return (speach::error(SP_OBJ_NOEXIST), false);
    std::cout << "whistles while working" << std::endl;
    return (m_conveyor->putObject(obj));
}

bool PapaXmasElf::pressInButton()
{
    if (!m_conveyor)
        return (speach::error(SP_CONVEYOR_NOEXIST), false);
    return (m_conveyor->IN());
}

bool PapaXmasElf::pressOutButton()
{
    if (!m_conveyor)
        return (speach::error(SP_CONVEYOR_NOEXIST), false);
    return (m_conveyor->OUT());
}

const std::string* PapaXmasElf::lookAtTable()
{
    if (!m_table)
        return (speach::error(SP_TABLE_NOEXIST), nullptr);
    return (m_table->lookatTable());
}

const void PapaXmasElf::assignTable(PapaXmasTable* table)
{
    m_table = table;
}

const void PapaXmasElf::assignConveyor(PapaXmasConveyorBelt *conveyor)
{
    m_conveyor = conveyor;
}