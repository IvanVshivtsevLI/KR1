#pragma once
#include <string>
#include <iostream>
#define LENGTH 5

using namespace std;

class CIntNR
{
	int mod;
public:
	int vector[LENGTH];
	CIntNR(); 
	CIntNR(int N);
	CIntNR(int N, int* coord_arr);
	CIntNR operator+(const CIntNR& arg);
	CIntNR operator-(const CIntNR& arg);
	void print();
};
