#include <iostream>

using namespace std;


int main() {
    setlocale(0, "");
    wcout << L"### Задание 2 ###\n";

    int integer;
    float fl;
    double db;
    char charSet;
    wstring str;
    wcout << L"Введите число >>";
    cin>> integer;
    wcout << L"Введите число с плавающей точкой >>";
    cin>> fl;
    wcout << L"Введите длинное число с плавающей точкой (2^32) >>";
    cin>> db;
    wcout << L"Введите символ аски >>";
    cin >> charSet;
    wcout << L"Введите строку >>";
    wcin >> str;

    wcout <<
    L"Число: " << integer << "\n" <<
    L"Число с плавающей точкой: " << fl << "\n"<<
    L"Длинное число  с плавающей точкой (2^32): " << db << "\n"<<
    L"Символ аски : " << charSet << "\n" <<
    L"Строка: " << str << "\n";


    return 0;

}