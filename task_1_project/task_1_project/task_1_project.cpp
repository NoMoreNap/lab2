#include <iostream>
#include <string>

using namespace std;

void consoleInfo(wstring lastName, int course, float age)
{
    wcout << L"Фамилия: " << lastName << "\n" << L"Возраст: " << age << "\n" << L"Курс: " << course << endl;
}



int main() {

    setlocale(LC_ALL, "Russian");
    const float age{ 24.6 };
    const int course{ 1 };
    const wstring lastName{ L"Бушуев" };
    wcout << L"### Задание 1 ###\n" << endl;
    consoleInfo(lastName, course, age);
}


