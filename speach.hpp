/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** speach.hpp
*/

#ifndef SPEACH_HPP
#define SPEACH_HPP

#include <iostream>

namespace speach
{
    inline void disp(const std::string& str, const std::string& f = "")
    {
        std::cout << (f != "" ? f + " : " : "") << str << std::endl;
    }

    inline void error(const std::string& str, const std::string& f = "")
    {
        std::cerr << (f != "" ? f + " : " : "") << str << std::endl;
    }
}

// ELF SPEAC
#define SP_ELF_WRAP ("tuuuut tuuut tuut")
#define SP_ELF_OPEN(name, wrapName) (name + " open " + wrapName + " wrap")
#define SP_ELF_CLOSE(name, wrapName) (name + " close " + wrapName + " wrap")
#define SP_ELF_TAKE(name, objName) (name + " take " + objName + " object")
#define SP_ELF_TAKE_WRAP ("whistles while working")
#define SP_ELF_PUT_TABLE(name, objName) (name + " put " + objName + " on table")
#define SP_ELF_PUT_CONVOYER(name, objName) (name + " put " + objName + " on convoyer")
#define SP_ELF_PRESS_IN(name) (name + " pressed IN convoyer's button")
#define SP_ELF_PRESS_OUT(name) (name + " pressed OUT convoyer's button")
#define SP_ELF_NEW_TABLE(name) (name + " has a new table")
#define SP_ELF_LOST_TABLE(name) (name + " lost his table")
#define SP_ELF_NEW_CONVOYER(name) (name + " has a new convoyer")
#define SP_ELF_LOST_CONVOYER(name) (name + " lost his convoyer")
// =========

// ELF ERROR
#define SP_ELF_CREATE(name) (name + " arrived in Santa Factory!")
#define SP_ELF_DESTROY(name) (name + " was fired for inactivity.")
#define SP_ELF_HAD_OBJ(name) (name + " already hold an object")
#define SP_ELF_HAD_NOT_OBJ(name) (name + " don't have an object")
#define SP_ELF_HAD_NOT_TABLE(name) (name + " don't have a table")
#define SP_ELF_HAD_NOT_CONVOYER(name) (name + " don't have a convoyer")
// =========

#define SP_WRAP_NOEXIST ("The given wrap doesn't exist.")
#define SP_OBJ_NOEXIST ("The given object doesn't exist.")
#define SP_TABLE_NOEXIST ("The given table doesn't exist")
#define SP_CONVEYOR_NOEXIST ("The given conveyor doesn't exist")
#define SP_WRONG_INDEX ("The given index is wrong")

#endif // SPEACH_HPP