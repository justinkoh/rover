#ifndef Channel_hpp
#define Channel_hpp

#include <string>

#include "Unit.hpp"

using namespace std;

class Channel
{
private:
    int m_x;
    float m_y;
    string m_z;
    Unit m_f;
public:
    int get_X() const;
    float get_Y() const;
    string get_Z() const;

    void set_X(int x);
    void set_Y(float y);
    void set_Z(const string &z);

    void g();
    void f(int d);
};

#endif
