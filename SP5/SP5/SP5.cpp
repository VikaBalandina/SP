#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int rows, colums, sum = 0;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> colums;

    int arr[20][20];

    std::cout << "Введите элементы n: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colums; j++) {
            std::cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    std::cout << "Сумма элементов: " << sum << std::endl;

    return 0;
}