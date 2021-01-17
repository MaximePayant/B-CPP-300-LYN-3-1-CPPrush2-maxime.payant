/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** TableRand
*/

#include "TableRand.hpp"

void TableRand::myrand(int i, int r)
{
    if (r == 0)
        _table[i] = new Teddy("Teddy");
    else if (r == 1)
        _table[i] = new LittlePony("LittlePony");
}

TableRand::TableRand()
{
    int r = 0;
    for (size_t i = 0; i < 10; i++) {
        r = rand() % 2;
        myrand(i, r);
    }
}