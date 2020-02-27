#include "ProxyA_Impl1.hpp"
#include "ProxyA_factory.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    const string ans(argv[1]);
    //ProxyA_Impl1 concrete_p0;
    ProxyA *temp1 = ProxyA_factory(ans);
    ProxyA &p0 = *temp1;
    //ProxyA_Impl1 concrete_p1
    ProxyA *temp2 = ProxyA_factory(ans); 
    ProxyA &p1 = *temp2;

    int x=0;
    for(int i=0; i<10; i++){
        if(i&1){
            p0.hhh("4");
        }else{
            p1.hhh("7");
        }
        
        p0.ggg();
        cout << x << " " << p0.fff() << " " << p1.fff() << endl;
    }
}
