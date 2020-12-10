#include "CIntNR.hpp"
#include "Autotest.hpp"

int main() {
     autotest();
     cout << endl << endl;
         int* coordinaty1 = new int[LENGTH]; 
         int* coordinaty2 = new int[LENGTH];
         coordinaty1[0] = LENGTH; coordinaty2[0] = LENGTH;
        for (int i = 0; i < LENGTH; i++) {
            cout << "Vvedite " << i+1 <<"-yu koordinatu \t";
            cin >> coordinaty1[i+1];
        }
        CIntNR A(5, coordinaty1);
        cout << "vector1: \t";
        A.print();
        cout << "-----------------------" << endl;
        cout << endl;
        for (int i = 0; i < LENGTH; i++) {
            cout << "Vvedite " << i + 1 << "-yu koordinatu \t";
            cin >> coordinaty2[i+1];
        }
        CIntNR B(5, coordinaty2);
        cout << "vector2: \t";
        B.print();
        cout << "-----------------------" << endl;
        cout << endl;
        CIntNR C, D;
        C = A + B;
        D = A - B;
        cout << "Summa:";
        C.print();
        cout << "Rasnost:";
        D.print();
    return 0;
}