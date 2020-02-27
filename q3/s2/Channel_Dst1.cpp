#ifndef Channel_Dst1_hpp
#define Channel_Dst1_hpp

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
    m_f.x = !m_f.x;
    m_f.y += 3;
}

void Channel::f(int c)
{
    m_x = m_y;
    m_y = c * 2;
    cout << m_f << " " << m_x << endl;
}

#endif
