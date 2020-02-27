#include "Unit.hpp"
//print x and then y, seperated by a space

ostream &operator<<(ostream &dst, const Unit &o)
{ return dst << o.x << " " << o.y ; }


istream &operator>>(istream &src, Unit &o)
{ return src >> o.x >> o.y ; }

