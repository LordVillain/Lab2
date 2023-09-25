#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {

    cout << "Enter the number of numbers in the array n: ";
    int n, left, right;
    cin >> n;
    cout << endl;

    cout << "Enter the left and right boundaries of the array separated by a space: ";
    cin >> left >> right;

    int* a = new int[n];
    cout << endl;
    cout << "First array: ";

    for (int i = 0; i < n; i++) {
        a[i] = rand() % (right - left + 1) + left;
        cout << a[i] << " ";
    }

    cout << endl;
    // Задание 1
    int newSize = 1;
    int* newArr = new int[n];

    newArr[0] = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > newArr[newSize - 1]) {
            newArr[newSize] = a[i];
            newSize++;
        }
    }
    cout << endl;
    cout << "1)New array:";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
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
    
    cout << "2) product of array elements located between the last max. and min. elements: " << pr << endl;

    // Задание 3

    int* chet = new int[(n + 1) / 2];

    for (int i = 0; i < (n + 1) / 2; i++) {
        chet[i] = a[i * 2];
    }

    sort(chet, chet + (n + 1) / 2);

    cout << endl;

    cout << "3) New array: ";
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