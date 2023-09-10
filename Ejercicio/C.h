//
// Created by Agustin on 06/04/2023.
//

#ifndef LAB0EJ2_C_H
#define LAB0EJ2_C_H



#include "B.h"
#include "A.h"

class C {
private:
    int c;
    A* punteroAC;
    B* punteroBC;
public:
    C (int);
    void setAC(A * a);
    void setBC(B * b);
    A * getAC();
    B * getBC();
    void setC(int);
    int getC();
    void printInt();
    //~C();
};

#endif //LAB0EJ2_C_H
