//
// Created by Agustin on 06/04/2023.
//

#include "A.h"
#include <iostream>

using namespace std;

A::A(int a){
    this->a = a;
    this->punteroBA = NULL;
    this->punteroCA = NULL;
}

void A::setBA(B * b) {
    this->punteroBA= b;
}

void A::setCA(C * c) {
    this->punteroCA= c;
}

B * A::getBA(){
    return this->punteroBA;
}

C * A::getCA(){
    return this->punteroCA;
}

void A::setA(int a){
    this->a = a;
}

int A::getA(){
    return this->a;
}


void A::printInt(){
    cout << "printInt Clase A"<<endl;
    cout << "Atributo a:" << a << endl;
    cout << "-----------------"<<endl;
}