#ifndef B_HPP
#define B_HPP

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class B
{
    private : 
    int seen;
    int total;
    string name;
    public :
    B *create(string seen)
{
    B *res=new B;
    res->seen = 0;
    res->total = 0;
    res->name = seen;
    return res;
}

void destroy(B *me)
{
    delete me;
}

void acc(B *me, float x)
{
    me->seen += 1 ;
    me->total = me->total + int(x * 1000) / me->seen;
}
float reinit(B *me)
{
    float r=me->total;
    me->seen = 0;
    me->total = 0;
    return r;
}

void dump(B *me)
{
    cout << me->name << " " << me->seen << " " << me->total << endl; 
}

};





#endif
