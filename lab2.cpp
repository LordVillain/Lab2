#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество чисел массива n: ";
    int n, left, right;
    cin >> n;
    cout << endl;

    cout << "Введите через пробел левую и правую границы массива: ";
    cin >> left >> right;

    int* a = new int[n];
    cout << endl;
    cout << "Исходный масссив: ";

    for (int i = 0; i < n; i++) {
        a[i] = rand() % (right - left + 1) + left;
        cout << a[i] << " ";
    }

    cout << endl;

    //Задание 2

    cout << endl;

    int min1 = 0, max1 = 0;

    for (int i = 1; i < n; i++) {
        if (a[min1] <= a[i]) {
            min1 = i;
        }
        if (a[max1] >= a[i]) {
            max1 = i;
        }
    }

    int pr = 1;

    if (min1 > max1) {
        int buf;
        buf = min1;
        min1 = max1;
        max1 = buf;
    }

    for (int i = min1; i <= max1; i++)
        pr *= a[i];

    cout << "2) произведение элементов массива, расположенных между последним макс. и мин. элементами " << pr << endl;

    // Задание 3

    int* chet = new int[(n + 1) / 2];

    for (int i = 0; i < (n + 1) / 2; i++) {
        chet[i] = a[i * 2];
    }

    sort(chet, chet + (n + 1) / 2);

    cout << endl;

    cout << "3) Новый массив: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << chet[i / 2] << " ";
        }
        else
            cout << a[i] << " ";
    }

    delete[] a, chet;

    cout << endl;

    return 0;
}