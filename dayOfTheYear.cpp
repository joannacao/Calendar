// dayOfTheYear.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "dayOfTheYear.h"
#include <string> 
#include <iostream>
#include <cstdlib>

using namespace std; 

string dayOfTheYear::months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

dayOfTheYear dayOfTheYear::operator -- () {
	day -= 1; 
	return *this; 
}

dayOfTheYear dayOfTheYear::operator -- (int) {
	dayOfTheYear temp(day); 
	day -= 1; 
	return *this; 
}

dayOfTheYear dayOfTheYear::operator ++ () {
	day += 1; 
	return *this; 
}

dayOfTheYear dayOfTheYear::operator ++ (int) {
	dayOfTheYear temp(day); 
	day += 1; 
	return *this; 
}

dayOfTheYear::dayOfTheYear(int d) {
	day = d; 
}

dayOfTheYear::dayOfTheYear(string s, int d) { 
	if (months[0] == s){
		if (d > 31) {
			exit(EXIT_FAILURE); 
		}
		else {
			day = d; 
		}
	}
	else if (months[1] == s) {
		if (d > 28) {
			exit(EXIT_FAILURE); 
		}
		else {
			day = 31 + d; 
		}
	}
	else if (months[2] == s) {
		if (d > 31) {
			exit(EXIT_FAILURE); 
		}
		else {
			day = 59 + d; 
		}
	}
	else if (months[3] == s) {
		if (d > 30) {
			exit(EXIT_FAILURE); 
		}
		else {
			day = 90 + d; 
		}
	}
	else if (months[4] == s) {
		if (d > 31) {
			exit(EXIT_FAILURE); 
		}
		else {
			day = 120 + d; 
		}
	}
	else if (months[5] == s) {
		if (d > 30) {
			exit(EXIT_FAILURE);
		}
		else {
			day = 151 + d;
		}
	}
	else if (months[6] == s) {
		if (d > 31) {
			exit(EXIT_FAILURE);
		}
		else {
			day = 181 + d;
		}
	}
	else if (months[7] == s) {
		if (d > 31) {
			exit(EXIT_FAILURE);
		}
		else {
			day = 212 + d;
		}
	}
	else if (months[8] == s) {
		if (d > 30) {
			exit(EXIT_FAILURE);
		}
		else {
			day = 243 + d;
		}
	}
	else if (months[9] == s) {
		if (d > 31) {
			exit(EXIT_FAILURE);
		}
		else {
			day = 273 + d;
		}
	}
	else if (months[10] == s) {
		if (d > 30) {
			exit(EXIT_FAILURE);
		}
		else {
			day = 304 + d;
		}
	}
	else if (months[11] == s) {
		if (d > 31) {
			exit(EXIT_FAILURE);
		}
		else {
			day = 334 + d;
		}
	}
}

void dayOfTheYear::print()
{
	int dayCount = 0; 
	if (day <= 31) {
		cout << months[0] << " " << day << endl; 
	}
	else if ((day > 31) && (day <= 59)) {
		dayCount = day - 31; 
		cout << months[1] << " " << dayCount << endl; 
	}
	else if ((day > 59) && (day <= 90)) {
		dayCount = day - 59; 
		cout << months[2] << " " << dayCount << endl; 
	}
	else if ((day > 90) && (day <= 120)) {
		dayCount = day - 90; 
		cout << months[3] << " " << dayCount << endl; 
	}
	else if ((day > 120) && (day <= 151)) {
		dayCount = day - 120; 
		cout << months[4] << " " << dayCount << endl; 
	}
	else if ((day > 151) && (day <= 181)) {
		dayCount = day - 151; 
		cout << months[5] << " " << dayCount << endl; 
	}
	else if ((day > 181) && (day <= 212)) {
		dayCount = day - 181; 
		cout << months[6] << " " << dayCount << endl;
	}
	else if ((day > 212) && (day <= 243)) {
		dayCount = day - 212; 
		cout << months[7] << " " << dayCount << endl; 
	}
	else if ((day > 243) && (day <= 273)) {
		dayCount = day - 243; 
		cout << months[8] << " " << dayCount << endl;
	}
	else if ((day > 273) && (day <= 304)) {
		dayCount = day - 273; 
		cout << months[9] << " " << dayCount << endl; 
	}
	else if ((day > 304) && (day <= 334)) {
		dayCount = day - 304; 
		cout << months[10] << " " << dayCount << endl; 
	}
	else {
		dayCount = day - 334; 
		cout << months[11] << " " << dayCount << endl; 
	}
}
