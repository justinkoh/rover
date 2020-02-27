#ifndef ProxyA_Impl1_hpp
#define ProxyA_Impl1_hpp
#include "ProxyA.hpp"
#include <string>

using namespace std;

class ProxyA_Impl1 : public ProxyA
{

public:
    ProxyA_Impl1();

    float fff() const;

    int ggg();

    void hhh(string g);
};

#endif