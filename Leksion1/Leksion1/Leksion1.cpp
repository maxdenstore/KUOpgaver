// Leksion1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <string>
#include "Lab1.h"

using namespace std;

float AddNumbers(int num1, int num2) {
	return num1 + num2;
};

string Addstring(string string1, string string2) {
	return(string1 + string2);
};

string Addstring(char* a, char* b) {
	
	string s1(a);
	string s2(b);

	return (s1 + s2);
}