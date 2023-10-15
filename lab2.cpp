#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    // Исходная строка
    string str = "42";

    // Создаем stringstream из строки str
    stringstream sin(str);

    int a;

    // Извлекаем значение из stringstream и преобразуем в int
    sin >> a;

    // Выводим результат
    cout << "Значение a: " << a << endl;

    return 0;
}
