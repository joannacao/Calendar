#pragma once
#include <string>
using namespace std; 

class dayOfTheYear {
private:
	int day;
	static string months[12]; 

public:
	dayOfTheYear(int); 
	dayOfTheYear(string, int); 
	void print(); 
	dayOfTheYear operator -- (); 
	dayOfTheYear operator -- (int); 
	dayOfTheYear operator ++ (); 
	dayOfTheYear operator ++ (int); 
};