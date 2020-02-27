#include "ProxyA_Impl1.hpp"
#include "ProxyA_factory.hpp"
#include <string>
#include <iostream>

int main(int argc, char* argv[])
{
	string ans(argv[1]);

    ProxyA *temp = ProxyA_factory(ans);
    ProxyA &proxy = *temp;

    int x=0;
    for(int i=0; i<11; i++){
        proxy.hhh(to_string(i));
        x += proxy.ggg();
        cout << x << " " << proxy.fff() << endl;
    }
    //delete proxy;
}
