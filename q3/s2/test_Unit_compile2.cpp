#include "Unit.hpp"
#include <iostream>

using namespace std;

int main(){
	Unit u1,u2,u3,u4;
	u1 = {0,0};
	u2 = {1,-1};
	u3 = {0,100};
	u4 = {0,10003};
	cout<<u1<<endl<<u2<<endl<<u3<<endl<<u4;
}