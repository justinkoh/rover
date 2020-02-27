#ifndef Unit_hpp
#define Unit_hpp

#include <iostream>

using namespace std;

struct Unit
{
    bool x;
    int y;
};
ostream &operator<<(ostream &dst, const Unit &o);
istream &operator>>(istream &src, Unit &o);

#endif