/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_
#include "Wrap.hpp"

class Box : public Wrap {
    public:
        Box();
        virtual ~Box();
        void wrapMeThat(Object *gift) override;

    protected:

};

#endif /* !BOX_HPP_ */
