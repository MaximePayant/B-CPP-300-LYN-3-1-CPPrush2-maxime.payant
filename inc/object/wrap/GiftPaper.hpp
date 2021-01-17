/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** GiftPaper
*/

#ifndef GIFTPAPER_HPP_
#define GIFTPAPER_HPP_
#include "Wrap.hpp"

class GiftPaper :
    public Wrap
{

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap GiftPaper
        ///
        /// @param name The name of the object
        //
        GiftPaper(const std::string &name = "Gift Paper");

};

#endif /* !GIFTPAPER_HPP_ */
