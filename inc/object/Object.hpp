/*
** EPITECH PROJECT, 2021
** B-CPP-300-LYN-3-1-CPPrush2-prince.miyigbena
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <string>
#include <iostream>

class Object
{

    protected:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap
        ///
        /// @param name The name of the object given by his children
        /// @param type The type of the object given by his children
        /// @param attribut The attribut of the object given by his children
        //
        Object(const std::string &name, const std::string &type, const std::string& attribut);

        std::string _name;
        std::string _type;
        std::string _attribut;

    public:
        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap
        ///
        /// @return The name of the object
        //
        std::string getName() const;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap
        ///
        /// @return The type of the object
        //
        std::string getType() const;

        ///////////////////////////////////////////////////////////////////////
        /// @brief Create a Wrap
        ///
        /// @return The attribut of the object
        //
        std::string getAttribut() const;

};

std::ostream &operator<<(std::ostream &s, Object object);

#endif /* !OBJECT_HPP_ */
