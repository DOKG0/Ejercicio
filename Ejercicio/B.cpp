//
// Created by Agustin on 06/04/2023.
//

#include "B.h"
#include <iostream>

using namespace std;

B::B(int b){
    this->b = b;
    this->punteroAB = NULL;
    this->punteroCB = NULL;
}

void B::setAB(A * a) {
    this->punteroAB= a;
}

void B::setCB(C * c) {
    this->punteroCB= c;
}

A * B::getAB(){
    return this->punteroAB;
}

C * B::getCB(){
    return this->punteroCB;
}

void B::setB(int b){
    this->b = b;
}

int B::getB(){
    return this->b;
}

void B::printInt(){
    cout << "printInt Clase B"<<endl;
    cout << "Atributo b:" << b << endl;
    cout << "-----------------"<<endl;
}