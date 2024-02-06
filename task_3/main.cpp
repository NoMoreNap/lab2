#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(0, "");
    wcout << L"### Задание 3 ###\n";

    int i,j, a[9];


    wcout<<L"Введите 9 чисел: \n";

    for (i = 0 ; i < 9 ; i++) {
        cin>>a[i];
    }

    for (j = 0; j < 9 ; j++) {
        if (a[j] % 3 == 0 ) {
            cout << setw(6) << a[j] << "\n";
        } else {
            cout << setw(6) << a[j];
        }
    }

    return 0;
}

