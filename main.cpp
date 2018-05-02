#include "stdafx.h"
#include "dayOfTheYear.h"
#include <string> 
#include <iostream>

using namespace std;

int main() {
	dayOfTheYear obj(2);
	obj.print(); 
	dayOfTheYear obj2(32); 
	obj2.print(); 
	dayOfTheYear obj3(365); 
	--obj3; 
	obj3.print(); 
	dayOfTheYear obj4(59); 
	obj4++; 
	obj4.print(); 

	dayOfTheYear obj5("February", 1); 
	obj5.print(); 

}