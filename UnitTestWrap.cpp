/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** UnitTestWrap.cpp
*/

#include "Teddy.hpp"
#include "Wrap.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "Object.hpp"
#include <iostream>

/*
** Ungly func that tests all my functions respecting the pdf prototype
** Wrapping a gift. It helped me.
*/
Object *MyUnitTests(Object **arr)
{
    int size = 0;

    for (; arr[size] != nullptr; size++);
    std::cout << size << std::endl;
    if (size != 3) {
        std::cerr << "The array does not contain enough components" << std::endl;
        return nullptr;
    }
    if (arr[0]->getType() != "Teddy") {
        std::cerr << "arr[0] Not a toy" << std::endl;
        return nullptr;
    }
    if (arr[1]->getType() != "Box") {
        std::cerr << "arr[1] Not a Box" << std::endl;
        return nullptr;
    }
    if (arr[2]->getType() != "GiftPaper") {
        std::cerr << "arr[2] Not a GiftPaper" << std::endl;
        return nullptr;
    }
    ((Wrap *)arr[1])->openMe();
    if (((Wrap *)arr[1])->isOpen() == false)
        std::cerr << "Box closed" << std::endl;
    else
        std::cerr << "Box Opened" << std::endl;
    ((Wrap *)arr[1])->wrapMeThat(arr[0]);
    if (((Wrap *)arr[1])->isOpen() == false)
        std::cerr << "Box closed" << std::endl;
    else
        std::cerr << "Box Opened" << std::endl;
    ((Wrap *)arr[1])->closeMe();
    ((Wrap *)arr[2])->wrapMeThat(arr[1]);
    return arr[2];
}

int main(void)
{
    Object **arr = new Object *[4];
    arr[3] = nullptr;
    arr[0] = new Teddy("Jean Jacques");
    arr[1] = new Box;
    arr[2] = new GiftPaper;
    Object *object = MyUnitTests(arr);
    std::cerr << ((Wrap *)object)->getType() << " is green" << std::endl;
    std::cerr << ((Wrap *)((Wrap *)object)->accessGift())->getType()<< " is closed" << std::endl;
    std::cerr << ((Wrap *)((Wrap *)((Wrap *)object)->accessGift())->accessGift())->getType()<< " is sweet" << std::endl;
    return 0;
}
