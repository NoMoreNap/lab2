#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(0, "");
    wcout << L"### Задание 3 ###\n";

    int i, j, a[9];


    wcout << L"Введите 9 чисел: \n";

    for (i = 0; i < 9; i++) {
        cin >> a[i];
    }

    for (j = 1; j < 10; j++) {
        if (j % 3 == 0) {
            cout << setw(6) << a[j - 1] << "\n";
        }
        else {
            cout << setw(6) << a[j - 1];
        }
    }

    return 0;
}

