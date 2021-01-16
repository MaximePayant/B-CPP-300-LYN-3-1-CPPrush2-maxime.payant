/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasConveyorBelt
*/

#include "PapaXmasConveyorBelt.hpp"

IConveyorBelt::~IConveyorBelt()
{
}

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
    _wrap = nullptr;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
}

Wrap *PapaXmasConveyorBelt::IN()
{
    int i = 0;
    if (_wrap) {
        std::cerr << "Something is already on the ConveyorBelt." << std::endl;
        return nullptr;
    }
    i = rand() % 2;
    if (i == 0)
        _wrap = new GiftPaper("MyGIFTPAPER");
    else
        _wrap = new Box("MyBOX");
    return (_wrap);
}

bool PapaXmasConveyorBelt::OUT()
{
    std::ofstream myfile;
    Box *mybox = (Box *)_wrap->accessGift();
    if (!_wrap) {
        std::cerr << "Nothing is on the ConveyorBelt for sending it to Santa." << std::endl;
        return false;
    }
    myfile.open("gift.xml");
    if (mybox->accessGift()->getType() == "Teddy")
        myfile << "<Gift>\n    <GiftPaper>\n        <Box>\n            " << "<Teddy>"
<< "Maugan" << "</Teddy>" << "\n        </Box>\n    </GiftPaper>\n</Gift>";
    else if (mybox->accessGift()->getType() == "Little Pony") {
        myfile << "<Gift>\n    <GiftPaper>\n        <Box>\n            " << "<LittlePony>"
<< mybox->accessGift()->getName() << "</LittlePony>" << "\n        </Box>\n    </GiftPaper>\n</Gift>";
    }
    myfile.close();
    delete _wrap;
    _wrap = nullptr;
    return true;
}

bool PapaXmasConveyorBelt::lookatTable()
{
    if (!_wrap)
        return false;
    return true;
}


bool PapaXmasConveyorBelt::putObject(Object *object)
{
    if (_wrap)
        return (false);
    _wrap = (Wrap *)object;
    return (true);
}

Object *PapaXmasConveyorBelt::takeObject()
{
    return (_wrap);
}

IConveyorBelt *createConveyorBelt()
{
    return (new PapaXmasConveyorBelt);
}