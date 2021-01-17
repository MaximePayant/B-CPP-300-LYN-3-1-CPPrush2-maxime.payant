/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** ConveyorBeltRand
*/

#include "ConveyorBeltRand.hpp"

void ConveyorBeltRand::myrand(int r)
{
    if (r == 0)
        _wrap = new GiftPaper("MyGiftPaper");
    else
        _wrap = new Box("MyBox");
}

ConveyorBeltRand::ConveyorBeltRand(std::string filename) : PapaXmasConveyorBelt()
{
    int r = rand() % 2;
    std::ofstream myfile;
    myrand(r);
    myfile.open(filename, std::ofstream::out | std::ofstream::app);
    if (r == 0)
        myfile << "<Gift>\n    <GiftPaper>\n        <Box>\n            " << "<Teddy>"
<< "Maugan" << "</Teddy>" << "\n        </Box>\n    </GiftPaper>\n</Gift>";
    else {
        myfile << "<Gift>\n    <GiftPaper>\n        <Box>\n            " << "<LittlePony>"
<< "Maximel" << "</LittlePony>" << "\n        </Box>\n    </GiftPaper>\n</Gift>";
    }
    myfile.close();
}