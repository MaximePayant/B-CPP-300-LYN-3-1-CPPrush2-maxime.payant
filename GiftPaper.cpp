/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** GiftPaper
*/

#include "GiftPaper.hpp"

GiftPaper::GiftPaper(const std::string &name, const std::string &type) : Object("Wrap", "GiftPaper");
{
    this->_name = name;
    this->_type = type;
}

GiftPaper::~GiftPaper()
{
}
