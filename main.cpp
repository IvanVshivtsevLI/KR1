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
            cout << "Введите " << i+1 <<"-ю координату первого вектора \t";
            cin >> coordinaty1[i+1];
        }
        CIntNR A(5, coordinaty1);
        cout << "Вы ввели вектор: \t";
        A.print();
        cout << endl;
        for (int i = 0; i < LENGTH; i++) {
            cout << "Введите координаты второго вектора \t";
            cin >> coordinaty2[i+1];
        }
        CIntNR B(5, coordinaty2);
        cout << "Вы ввели вектор: \t";
        B.print();
        cout << endl;
        CIntNR C, D;
        C = A + B;
        D = A - B;
        cout << "Сумма:";
        C.print();
        cout << "Разность:";
        D.print();
    return 0;
}
