#include "Unit.hpp"
#include <iostream>

using namespace std;

int main(){
	Unit u1,u2,u3,u4,u11,u22,u33,u44;
	cin>>u1>>u2>>u3>>u4;
	u11 = {0,0};
	u22 = {1,-1};
	u33 = {0,100};
	u44 = {0,10003};
	Unit test = {1,2};
	if(u1.x!=u11.x || u1.y!=u11.y ||u2.x!=u22.x || u2.y!=u22.y ||u3.x!=u33.x || u3.y!=u33.y ||u4.x!=u44.x || u4.y!=u44.y){
		exit(1);
	}
	else return 0;

}