/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** asanra
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Toy.hpp"
#include "Wrap.hpp"

/*
** Wrapping a gift by putting it into a box and wrapping the giftpaper
*/
GiftPaper *create_gift(Toy *toy)
{
    GiftPaper *gift = new GiftPaper;
    Box *box = new Box;

    box->openMe();
    box->wrapMeThat(toy);
    gift->wrapMeThat(box);
    return gift;
}

/*
** Parsing a file to verify it is a valid xml defined gift
** The getline concats everyfile line in a buffer and the regex checks if the content is valid
*/
std::string extraction(char const *file, std::string &name)
{
    std::ifstream current (file);
    std::string line;
    std::string buff;
    std::string type = "";
    std::regex rgx("^[\t ]*<(Gift)>[\t ]*<(\\1Paper)>[\t ]*<(Box)>[\t ]*<(Teddy|LittlePony)>[\t ]*(.*)[\t ]*</\\4>[\t ]*</\\3>[\t ]*</\\2>[\t ]*</\\1>[\t ]*$");
    std::smatch match;

    while (std::getline(current, line))
        buff += line;
    std::regex_search(buff, match, rgx);
    current.close();
    if (match.size() > 0) {
        type = match[4];
        name = match[5];
    }
    return type;
}

/*
** Iterating over the files to parse them and put them into gifts
*/
std::vector<GiftPaper *> getGiftFromXml(int ac, char **av)
{
    std::vector<GiftPaper *> gifts;
    std::string type;
    std::string name;

    for (int i = 1; i < ac; i++) {
        type = extraction(av[i], name);
        if (type == "Teddy")
            gifts.push_back(create_gift(new Teddy(name)));
        if (type == "LittlePony")
            gifts.push_back(create_gift(new LittlePony(name)));
    }
    return gifts;
}

/*
** Main file with an ugly for the display the gift content for debugging
*/
int main(int ac, char **av)
{
    std::vector<GiftPaper *> gifts;

    if (ac < 2)
        return 84;
    gifts = getGiftFromXml(ac, av);
    for (size_t i = 0; i < gifts.size(); i++)
        std::cout << ((Wrap *)((Wrap *)((Wrap *)gifts[i])->accessGift())->accessGift())->getType() << " " << ((Wrap *)((Wrap *)((Wrap *)gifts[i])->accessGift())->accessGift())->getName() << std::endl;
    return 0;
}