#include "CIntNR.hpp"

void autotest()
{
	int* coordinaty1 = new int[LENGTH + 1], * coordinaty2 = new int[LENGTH + 1];
	int g = 0;
	coordinaty1[0] = LENGTH;
	coordinaty2[0] = LENGTH;
	for (int i = 1; i < LENGTH + 1; i++)
	{
		coordinaty1[i] = 7;
		coordinaty2[i] = 3;
	}
	CIntNR Vector1(5, coordinaty1), Vector2(5, coordinaty2), Summa;
	Summa = Vector1 + Vector2;
	for (int i = 0; i < LENGTH; i++)
	{
		if (Summa.vector[i] == 0) g++;
	}
	if (g == LENGTH) cout << "Тест пройден!" << endl;
	else cout << "Тест не пройден!" << endl;
	cout << "-----------------------" << endl;
}
