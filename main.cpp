#include <iostream>
#include <fstream>
int main()
{
    int y;
    setlocale(LC_ALL, "RUS");
    using namespace std;
    float r;
    float result;
    cout << "������� ������: ";
    cin >> r;
    float p = 3.14;
    result = r * r * p;
    cout << "������� ����� = " << result;

	return 0;
}