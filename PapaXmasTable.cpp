/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** PapaXmasTable
*/

#include "PapaXmasTable.hpp"

ITable::~ITable() {}

PapaXmasTable::PapaXmasTable()
{
    for (int i = 0; i < 10; i++)
        _table[i] = nullptr;
}

PapaXmasTable::~PapaXmasTable()
{
    for (int i = 0; i < 10; i++)
        if (_table[i])
          delete _table[i];
}

bool PapaXmasTable::putObject(Object *object)
{
    for (size_t i = 0; i < 10; i++) {
        if (_table[i] == nullptr) {
            _table[i] = object;
            return (true);
        }
    }
  std::cerr << "No place on the Table... so saaad" << std::endl;
  return false;
}

Object *PapaXmasTable::takeObject(int pos)
{
    if (_table[pos] != nullptr) {
        Object *tmp = _table[pos];
        _table[pos] = nullptr;
        return tmp;
    }
    std::cerr << "Not find this object... So saaad" << std::endl;
    return nullptr;
}

const std::string *PapaXmasTable::lookatTable()
{
    std::string *tab = new std::string[10];
    int i = 0;
    int j = 0;

    for (i = 0 ; i < 10; i++)
        if (_table[i]) {
            tab[j] = _table[i]->getName();
            j++;
        } else
            tab[j] = "";
    if (j == 0) {
        std::cerr << "Table is empty." << std::endl;
        return nullptr;
    }
    for (; j < 10; j++)
        tab[j] = nullptr;
    return (tab);
}

ITable *createTable()
{
    ITable *tab = new PapaXmasTable;
    for (int i = 0; i < 10; i++)
        tab->putObject(nullptr);
    return (tab);
}