/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_
#include "Object.hpp"

class Wrap :
    public Object
{

    protected:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap
        ///
        /// @param name The name of the object given by his children
        /// @param type The type of the object given by his children
        //
        Wrap(const std::string &name, const std::string& type);

        bool _is_open;
        bool _is_gift;
        Object *_gift;

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Destruc a Wrap
        //
        virtual ~Wrap();

        ///////////////////////////////////////////////////////////////////////
        /// @brief Wrap the given object
        //
        virtual bool wrapMeThat(Object *gift);

        ///////////////////////////////////////////////////////////////////////
        /// @brief Open the Wrap
        //
        Object *openMe();

        ///////////////////////////////////////////////////////////////////////
        /// @brief Close the Wrap
        //
        void closeMe();

        ///////////////////////////////////////////////////////////////////////
        /// @brief Check if the Wrap is open
        ///
        /// @return true if the wrap is open, false otherwise
        //
        bool isOpen() const;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Access to the object in the Wrap
        ///
        /// @p @warning The wrap member is not set to nullptr,
        /// so their is two reference to the adresse
        /// It is only use to check the content of the wrap
        /// @return the object in the wrap, null if is empty
        //
        Object *accessGift() const;

};

#endif /* !WRAP_HPP_ */
