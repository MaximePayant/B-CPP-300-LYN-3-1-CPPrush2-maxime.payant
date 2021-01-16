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
    m_object[0] = nullptr;
    m_object[1] = nullptr;
    speach::disp(SP_ELF_CREATE(m_name));
}

PapaXmasElf::~PapaXmasElf()
{
    speach::disp(SP_ELF_DESTROY(m_name));
}

bool PapaXmasElf::wrapObject(Hand hand)
{
    Hand otherHand = (hand == RIGHT ? LEFT : RIGHT);

    if (!m_object[hand])
        return (speach::error(SP_ELF_HAD_NOT_OBJ(m_name)), false);
    if (!m_object[otherHand] || m_object[otherHand]->getAttribut() != "Wrap")
        return (speach::error(SP_ELF_HAD_NOT_WRAP(m_name)), false);

    if (m_object[hand]->getType() == "Box" && m_object[otherHand]->getType() == "Box")
        return (speach::error("A Box in another Box ? Really ?"), false);
    if (m_object[hand]->getType() == "GiftPaper" && m_object[otherHand]->getType() == "GiftPaper")
        return (speach::error("More GiftPaper ? Naaaaa !"), false);
    if (m_object[hand]->getAttribut() == "Toy" && m_object[otherHand]->getType() == "GiftPaper")
        return (speach::error("You must put the toy into a Box before."), false);

    if (!((Wrap *)m_object[otherHand])->wrapMeThat(m_object[hand]))
        return (false);
    m_object[hand] = nullptr;
    speach::disp(SP_ELF_WRAP);
    return (true);
}

bool PapaXmasElf::openWrap(Hand hand)
{
    Hand otherHand = (hand == RIGHT ? LEFT : RIGHT);

    if (!m_object[hand] || m_object[hand]->getAttribut() != "Wrap")
        return (speach::error("Open a ... Toy ?"), false);

    m_object[otherHand] = ((Wrap *)m_object[hand])->openMe();
    speach::disp(SP_ELF_OPEN(m_name, m_object[hand]->getName()));
    return (true);
}

bool PapaXmasElf::closeWrap(Hand hand)
{
    if (!m_object[hand]
    || (m_object[hand] && m_object[hand]->getAttribut() != "Wrap"))
        return (speach::error(SP_WRAP_NOEXIST), false);
    speach::disp(SP_ELF_CLOSE(m_name, m_object[hand]->getName()));
    ((Wrap *)m_object[hand])->closeMe();
    return (true);
}

bool PapaXmasElf::takeOnTable(Hand hand, int index)
{
    if (!m_table)
        return (speach::error(SP_ELF_HAD_NOT_TABLE(m_name)), false);
    if (index < 0 || index > 10)
        return (speach::error(SP_WRONG_INDEX), false);
    if (m_object[hand])
        return (speach::error(SP_ELF_HAD_OBJ(m_name)), false);

    m_object[hand] = m_table->takeObject(index);

    if (m_object[hand]) {
        speach::disp(SP_ELF_TAKE(m_name, m_object[hand]->getName()));
        if (m_object[hand]->getAttribut() == "Wrap")
            speach::disp(SP_ELF_TAKE_WRAP);
    }
    return (true);

}

bool PapaXmasElf::takeOnConveyor(Hand hand)
{
    if (!m_conveyor)
        return (speach::error(SP_ELF_HAD_NOT_CONVOYER(m_name)), false);
    if (m_object[hand])
        return (speach::error(SP_ELF_HAD_OBJ(m_name)), false);

    m_object[hand] = m_conveyor->takeObject();

    if (m_object[hand])
        speach::disp(SP_ELF_TAKE_WRAP);
    return (true);
}

bool PapaXmasElf::putOnTable(Hand hand)
{
    if (!m_table)
        return (speach::error(SP_ELF_HAD_NOT_TABLE(m_name)), false);
    if (!m_object[hand])
        return (speach::error(SP_ELF_HAD_NOT_OBJ(m_name)), false);

    if (!m_table->putObject(m_object[hand]))
        return (false);
    speach::disp(SP_ELF_PUT_TABLE(m_name, m_object[hand]->getName()));
    m_object[hand] = nullptr;
    return (true);
}

bool PapaXmasElf::putOnConveyor(Hand hand)
{
    if (!m_conveyor)
        return (speach::error(SP_ELF_HAD_NOT_CONVOYER(m_name)), false);
    if (!m_object[hand])
        return (speach::error(SP_ELF_HAD_NOT_OBJ(m_name)), false);

    if (!m_conveyor->putObject(m_object[hand]))
        return (false);
    speach::disp(SP_ELF_PUT_CONVOYER(m_name, m_object[hand]->getName()));
    m_object[hand] = nullptr;
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
    if (m_conveyor)
        speach::disp(SP_ELF_NEW_CONVOYER(m_name));
    else
        speach::disp(SP_ELF_LOST_CONVOYER(m_name));
}

void PapaXmasElf::dispObject() const
{
    if (!m_object[LEFT] && !m_object[RIGHT])
        std::cout << m_name << " not carrying an object" << std::endl;
    else {
        if (m_object[RIGHT])
            std::cout
                << m_name
                << " is carrying a "
                << m_object[RIGHT]->getType()
                << " named "
                << m_object[RIGHT]->getName()
                << " in his right hand"
                << std::endl;
        if (m_object[LEFT])
            std::cout
                << m_name
                << " is carrying a "
                << m_object[LEFT]->getType()
                << " named "
                << m_object[LEFT]->getName()
                << " in his left hand"
                << std::endl;
    }
}
