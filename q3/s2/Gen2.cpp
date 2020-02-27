#include "Channel.hpp"

int main()
{
    Channel a;
    Channel b;

    a.set_X(-2);
    a.set_Y(2.250);
    a.set_Z("Blah");

    for(int i=0; i<5; i++){
        a.g();
        a.f(4);
        b.set_Y(i);
        b.f(i);
    }
}