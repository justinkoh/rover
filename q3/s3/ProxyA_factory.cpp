#include "ProxyA_factory.hpp"
#include "ProxyA_Impl1.hpp"
#include "ProxyA_Impl2.hpp"
#include "ProxyA.hpp"
#include <iostream>
#include <assert.h>
#include <string>
using namespace std;


ProxyA *ProxyA_factory(const string &type){
	if(type == "Impl1"){
		return new ProxyA_Impl1;
	}
	else if (type == "Impl2"){
		return new ProxyA_Impl2;
	}
	else assert(0);

}

