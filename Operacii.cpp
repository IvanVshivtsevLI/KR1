#include "CIntNR.hpp"

CIntNR::CIntNR() = default;

CIntNR::CIntNR(int N)
{
	if (N <= 0)
	{
		cout << "Error!" << endl;
		exit(-1);
	}
	mod = N;
	for (int i = 0; i < LENGTH; i++)
	{
		vector[i] = 0;
	}
}

CIntNR::CIntNR(int N, int* coord_arr)
{
	if (N <= 0)
	{
		cout << "Error!" << endl;
		exit(-1);
	}
	mod = N;
	if (coord_arr[0] != LENGTH)
	{
		cout << "Error!" << endl;
		exit(-1);
	}
	for (int i = 0; i < LENGTH; i++)
	{
		vector[i] = coord_arr[i + 1] % mod;
	}
}

CIntNR CIntNR::operator+(const CIntNR & arg)
{
	int* sum = new int[LENGTH + 1];
	sum[0] = LENGTH;
	for (int i = 1; i < LENGTH + 1; i++)
	{
		sum[i] = (vector[i - 1] + arg.vector[i - 1]) % mod;
	}
	CIntNR result(mod, sum);
	delete[] sum;
	return result;
}

CIntNR CIntNR::operator-(const CIntNR & arg)
{
	int* rasnost = new int[LENGTH + 1];
	rasnost[0] = LENGTH;
	for (int i = 1; i < LENGTH + 1; i++)
	{
		rasnost[i] = (vector[i - 1] - arg.vector[i - 1]) % mod;
		if (rasnost[i] < 0) rasnost[i] += mod;
	}
	CIntNR result(mod, rasnost);
	delete[] rasnost;
	return result;
}
void CIntNR::print()
{
	cout << "(";
	for (int i = 0; i < LENGTH - 1; i++)
	{
		cout << vector[i] << " ";
	}
	cout << vector[LENGTH - 1];
	cout << ")" << endl;
}
