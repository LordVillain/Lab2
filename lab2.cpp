#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    // �������� ������
    string str = "42";

    // ������� stringstream �� ������ str
    stringstream sin(str);

    int a;

    // ��������� �������� �� stringstream � ����������� � int
    sin >> a;

    // ������� ���������
    cout << "�������� a: " << a << endl;

    return 0;
}
