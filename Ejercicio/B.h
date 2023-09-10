//
// Created by Agustin on 06/04/2023.
//

#ifndef LAB0EJ2_B_H
#define LAB0EJ2_B_H


#include "A.h"
#include "C.h"

class B {
private:
    int b;
    A * punteroAB;
    C * punteroCB;
public:
    B (int);
    void setAB(A * a);
    void setCB(C * c);
    A * getAB();
    C * getCB();
    void setB(int);
    int getB();
    void printInt();
    //~B();
};



#endif //LAB0EJ2_B_H
