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

GiftPaper *create_gift(Toy *toy)
{
    GiftPaper *gift = new GiftPaper;
    Box *box = new Box;

    box->openMe();
    box->wrapMeThat(toy);
    gift->wrapMeThat(box);
    return gift;
}

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
