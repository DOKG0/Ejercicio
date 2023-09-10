//
// Created by Agustin on 06/04/2023.
//

#include "C.h"
#include <iostream>

using namespace std;

C::C(int c){
    this->c = c;
    this->punteroAC = NULL;
    this->punteroBC = NULL;
}

void C::setAC(A * a) {
    this->punteroAC= a;
}

void C::setBC(B * b) {
    this->punteroBC= b;
}

A * C::getAC(){
    return this->punteroAC;
}

B * C::getBC(){
    return this->punteroBC;
}

void C::setC(int c){
    this->c = c;
}

int C::getC(){
    return this->c;
}

void C::printInt(){
    cout << "printInt Clase C"<<endl;
    cout << "Atributo c:" << c << endl;
}