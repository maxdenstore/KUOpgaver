#pragma once
#include <string>
#include "stdafx.h"
using namespace std;

#ifdef LEKTION1_EXPORTS
#define LEKTION1_API __declspec(dllexport)
#else
#define LEKTION_API1 __declspec(dllimport)
#endif

extern "C" LEKTION_API1  float AddNumbers(int num1, int num2);

extern "C" LEKTION_API1  string Addstring(string string1, string string2);
LEKTION_API1  string Addstring(char* a, char* b);