#include "CIntNR.hpp"
#include "Autotest.hpp"

int main() {
     setlocale(LC_ALL, "Rus"); 
     autotest();
     cout << endl << endl;
         int* coordinaty1 = new int[LENGTH]; 
         int* coordinaty2 = new int[LENGTH];
         coordinaty1[0] = LENGTH; coordinaty2[0] = LENGTH;
        for (int i = 0; i < LENGTH; i++) {
            cout << "������� " << i+1 <<"-� ���������� ������� ������� \t";
            cin >> coordinaty1[i+1];
        }
        CIntNR A(5, coordinaty1);
        cout << "�� ����� ������: \t";
        A.print();
        cout << endl;
        for (int i = 0; i < LENGTH; i++) {
            cout << "������� " << i+1 <<"-� ���������� ������� ������� \t";
            cin >> coordinaty2[i+1];
        }
        CIntNR B(5, coordinaty2);
        cout << "�� ����� ������: \t";
        B.print();
        cout << endl;
        CIntNR C, D;
        C = A + B;
        D = A - B;
        cout << "�����:";
        C.print();
        cout << "��������:";
        D.print();
    return 0;
}