#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;

int main() {

    A* a = new A(1);
    B* b = new B(2);
    C* c = new C(3);

    a->setBA(b);
    a->setCA(c);

    b->setAB(a);
    b->setCB(c);

    c->setAC(a);
    c->setBC(b);

    a->printInt();
    b->printInt();
    c->printInt();

    return 0;
}
