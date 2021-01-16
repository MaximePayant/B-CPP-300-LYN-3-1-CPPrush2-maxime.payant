/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_
#include "Object.hpp"

class Wrap {
    public:
        Wrap();
        virtual ~Wrap();
        virtual bool wrapMeThat(Object *gift);
        Object *openMe();
        void closeMe();
        bool isOpen() const;
        Object *accessGift() const;

    protected:
        bool _is_open;
        bool _is_gift;
        Object *_gift;
};

#endif /* !WRAP_HPP_ */
