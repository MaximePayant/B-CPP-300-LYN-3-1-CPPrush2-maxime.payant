/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** TableRand
*/

#ifndef TABLERAND_H
#define TABLERAND_H

#include "PapaXmasTable.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

class TableRand : public PapaXmasTable
{
    public:
        TableRand();
        virtual ~TableRand();
        void myrand(int i, int r);
};

#endif /* TABLERAND_H */