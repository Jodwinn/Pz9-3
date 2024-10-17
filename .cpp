#include <iostream>;
#include <windows.h>;
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int matrix[2][2] = { {1, 2}, {3, 4} };
    int swap[2][2];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            swap[j][i] = matrix[i][j];
        }
    }

    cout << "Транспонована матриця:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << swap[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
