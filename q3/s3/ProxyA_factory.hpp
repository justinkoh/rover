#ifndef ProxyA_factory_hpp
#define ProxyA_factory_hpp
#include "ProxyA.hpp"
#include "ProxyA_Impl1.hpp"
#include "ProxyA_Impl2.hpp"
#include <string>
#include <iostream>

/*Create an instance of ProxyA, using the given
string to select the concrete type:
- 'Impl1' : Returns a new ProxyA_Impl1
- 'Impl2' : Returns a new ProxyA_Impl2
*/


ProxyA *ProxyA_factory(const string &type);

#endif