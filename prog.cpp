#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int m, n;

   cout << "Введите количество строк: ";
   cin >> m;
   cout << "Введите количество столбцов: ";
   cin >> n;

   int matrix[m][n];

   cout << "Введите элементы матрицы:" <<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           cin >> matrix[i][j];
        }
    }

   cout << "Среднее значение по столбцам:" <<endl;
    for (int j = 0; j < n; j++) {
        double sum = 0;
        for (int i = 0; i < m; i++) {
            sum += matrix[i][j];
        }
        double average = sum / m;
       cout << "Столбец " << j << ": " << average <<endl;
    }

    return 0;
}
