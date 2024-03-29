#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int n;

    std::cout << "Введите количество элементов: ";
    std::cin >> n;

    int arr[20] ;
    
    std::cout << "Введите элементы:" << std::endl;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << "Сумма элементов: " << sum << std::endl;

    return 0;
}