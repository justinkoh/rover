#ifndef Channel_Dst2_hpp
#define Channel_Dst2_hpp

#include "Channel.hpp"

int Channel::get_X() const
{ return m_x; }

float Channel::get_Y() const
{ return m_y; }

string Channel::get_Z() const
{ return m_z; }

void Channel::set_X(int x)
{
    m_x=x;
}

void Channel::set_Y(float y)
{
    m_y=y;
}

void Channel::set_Z(const string &z)
{
    m_z=z;
}

void Channel::g()
{
    m_f.x = (m_f.y % 5)==0;
    m_f.y += 7;
}

void Channel::f(int d)
{
    m_y = d + 3;
    m_x = m_x * d;
    cout << m_y << " " << m_x << endl;
}

#endif
