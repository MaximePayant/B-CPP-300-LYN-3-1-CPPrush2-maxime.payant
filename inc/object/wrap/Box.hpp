/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include "Wrap.hpp"

class Box :
    public Wrap
{

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap Box
        ///
        /// @param name The name of the object
        //
        Box(const std::string &name = "Carton");

        ///////////////////////////////////////////////////////////////////////
        /// @brief Wrap the given object
        ///
        /// @param gift The object to be wrap
        //
        bool wrapMeThat(Object *gift) override;

};

#endif /* !BOX_HPP_ */
