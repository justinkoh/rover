#include "B.hpp"

#include <cmath>

int main()
{
    B* c = c->create("S1");

    double running=0;

    for(int i=0; i<14; i++){
        for(int j=0; j<30; j++){
            int ij = i*j;
            c->acc(c, int(sin(ij)*176));
        }

        c->dump(c);
/*
        int total=c.total;
        c.seen=0;
        c.total=0;
        running += total;
*/
        int total = c->reinit(c);
        running += total;
    }

    cout << running << endl;
}
