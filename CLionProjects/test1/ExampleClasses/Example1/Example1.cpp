//
// Created by tema on 16.09.2019.
//

#include <iostream>
#include "Example1.h"

Example1::Example1(){
    intToPointerConstInt(elem);
    bool flag1 = true, flag2 = false;
    int a = 0, b = 1, c = 2;
    flag1?a:flag2?b:c = 3;
}

void Example1::intToPointerConstInt(const int constelem) const{
    std::cout << "I const " << constelem;
    elem2++;
}
