#include "B.hpp"
#include <cmath>

int main()
{
    B *c1 = c1->create("M1");
    B *c2 = c2->create("M2");

    for(int i=0; i<14; i++){
        c1->acc(c1,int(cos(i)*113));
        if(i % 2){
            c2->acc(c2,int(cos(i)*113));
        }
    }

    c1->dump(c1);
    c2->dump(c2);

    c1->destroy(c1);
    c2->destroy(c2);
}
