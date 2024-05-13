#include "d:\code\object-oriented-programming\main.hpp"

//method declarations..

void song::get_title(std::string new_title) {
    title=new_title;
}

std::string song::get_title(){
    return title;
}