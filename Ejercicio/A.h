//
// Created by Agustin on 06/04/2023.
//

#ifndef LAB0EJ2_A_H
#define LAB0EJ2_A_H



class B;
class C;

class A {
private:
    int a;
    B * punteroBA;
    C * punteroCA;
public:
    A (int);
    void setBA(B * b);
    void setCA(C * c);
    B * getBA();
    C * getCA();
    void setA(int);
    int getA();
    void printInt();
    //~A();
};


#endif //LAB0EJ2_A_H
