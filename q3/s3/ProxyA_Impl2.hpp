#ifndef ProxyA_Impl2_hpp
#define ProxyA_Impl2_hpp
#include "ProxyA.hpp"
#include <string>

using namespace std;

class ProxyA_Impl2 : public ProxyA
{

public:
    ProxyA_Impl2();

    float fff() const;

    int ggg();

    void hhh(string g);
};

#endif
