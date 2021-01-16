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
m_conveyor(conveyor),
m_object(nullptr)
{
    speach::disp(SP_ELF_CREATE(m_name));
}

PapaXmasElf::~PapaXmasElf()
{
    speach::disp(SP_ELF_DESTROY(m_name));
}

bool PapaXmasElf::wrapObject(Wrap *wrap)
{
    if (!wrap)
        return (speach::error(SP_WRAP_NOEXIST), false);
    if (!m_object)
        return (speach::error(SP_ELF_HAD_NOT_OBJ(m_name)), false);
    if (!wrap->wrapMeThat(m_object))
        return (false);
    speach::disp(SP_ELF_WRAP);
    m_object = nullptr;
    return (true);
}

bool PapaXmasElf::openWrap(Wrap *wrap)
{
    if (m_object)
        return (speach::error(SP_ELF_HAD_OBJ(m_name)), false);
    if (!wrap)
        return (speach::error(SP_WRAP_NOEXIST), false);
    speach::disp(SP_ELF_OPEN(m_name, wrap->getName()));
    m_object = wrap->openMe();
    return (true);
}

bool PapaXmasElf::closeWrap(Wrap *wrap)
{
    if (!wrap)
        return (speach::error(SP_WRAP_NOEXIST), false);
    speach::disp(SP_ELF_CLOSE(m_name, wrap->getName()));
    wrap->closeMe();
    return (true);
}

bool PapaXmasElf::takeOnTable(int index)
{
    if (m_object)
        return (speach::error(SP_ELF_HAD_OBJ(m_name)), false);
    if (!m_table)
        return (speach::error(SP_ELF_HAD_NOT_TABLE(m_name)), false);
    if (index < 0 || index > 10)
        return (speach::error(SP_WRONG_INDEX), false);
    m_object = m_table->takeObject(index);
    if (m_object)
        speach::disp(SP_ELF_TAKE(m_name, m_object->getName()));
    if (m_object->getAttribut() == "Wrap")
        speach::disp(SP_ELF_TAKE_WRAP);
    return (true);

}

bool PapaXmasElf::takeOnConveyor()
{
    if (m_object)
        return (speach::error(SP_ELF_HAD_OBJ(m_name)), false);
    if (!m_conveyor)
        return (speach::error(SP_ELF_HAD_NOT_CONVOYER(m_name)), false);
    m_object = m_conveyor->takeObject();
    if (m_object)
        speach::disp(SP_ELF_TAKE_WRAP);
    return (true);
}

bool PapaXmasElf::putOnTable()
{
    if (!m_table)
        return (speach::error(SP_ELF_HAD_NOT_TABLE(m_name)), false);
    if (!m_object)
        return (speach::error(SP_ELF_HAD_NOT_OBJ(m_name)), false);
    if (!m_table->putObject(m_object))
        return (false);
    speach::disp(SP_ELF_PUT_TABLE(m_name, m_object->getName()));
    m_object = nullptr;
    return (true);
}

bool PapaXmasElf::putOnConveyor()
{
    if (!m_conveyor)
        return (speach::error(SP_ELF_HAD_NOT_CONVOYER(m_name)), false);
    if (!m_object)
        return (speach::error(SP_ELF_HAD_NOT_OBJ(m_name)), false);
    std::cout << "whistles while working" << std::endl;
    if (!m_conveyor->putObject(m_object))
        return (false);
    speach::disp(SP_ELF_PUT_CONVOYER(m_name, m_object->getName()));
    m_object = nullptr;
    return (true);
}

bool PapaXmasElf::pressInButton()
{
    if (!m_conveyor)
        return (speach::error(SP_ELF_HAD_NOT_CONVOYER(m_name)), false);
    speach::disp(SP_ELF_PRESS_IN(m_name));
    return (m_conveyor->IN());
}

bool PapaXmasElf::pressOutButton()
{
    if (!m_conveyor)
        return (speach::error(SP_ELF_HAD_NOT_CONVOYER(m_name)), false);
    speach::disp(SP_ELF_PRESS_OUT(m_name));
    return (m_conveyor->OUT());
}

const std::string* PapaXmasElf::lookAtTable()
{
    if (!m_table)
        return (speach::error(SP_ELF_HAD_NOT_TABLE(m_name)), nullptr);
    return (m_table->lookatTable());
}

void PapaXmasElf::assignTable(PapaXmasTable* table)
{
    m_table = table;
    if (m_table)
        speach::disp(SP_ELF_NEW_TABLE(m_name));
    else
        speach::disp(SP_ELF_LOST_TABLE(m_name));

}

void PapaXmasElf::assignConveyor(PapaXmasConveyorBelt *conveyor)
{
    m_conveyor = conveyor;
    if (m_table)
        speach::disp(SP_ELF_NEW_CONVOYER(m_name));
    else
        speach::disp(SP_ELF_LOST_CONVOYER(m_name));
}

void PapaXmasElf::dispObject() const
{
    if (!m_object)
        std::cout << m_name << " not carrying an object" << std::endl;
    else
        std::cout
            << m_name
            << " is carrying a "
            << m_object->getType()
            << " named "
            << m_object->getName()
            << std::endl;
}
