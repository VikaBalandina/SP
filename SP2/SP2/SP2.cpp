#include <iostream>
#include <math.h>


using namespace std;

int main() {
    
    setlocale(LC_ALL, "Russian");

    //Я научилась ставить русский язык :D

    std::cout << "Ex1\n";

    float a, b, c;

    std::cout << "Введите коэффициенты уравнения ax^2 + bx + c = 0:" << endl;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    float discr = pow(b,2) - 4*a*c;

    std::cout << "Дискриминант: " << discr << "\n";

    if (discr > 0) {
        float x1 = (-b + sqrt(discr)) / (2*a);
        float x2 = (-b - sqrt(discr)) / (2*a);

        std::cout << "У уравнения два корня: " << endl;
        std::cout << "x1 = " << x1 << endl;
        std::cout << "x2 = " << x2 << endl;
    }
    else if (discr == 0) {
        float x = -b / (2*a);
        std::cout << "У уравнения один корень: " << endl;
        std::cout << "x = " << x << endl;
    }
    else {
        std::cout << "У уравнения нет корней." << endl;
    }

    std::cout << "\nEx2\n";
 
    int M, N;

    std::cout << "Введите целое число M: ";
    std::cin >> M;
    std::cout << "Введите цело число N: ";
    std::cin >> N;

    if (M % N == 0) {
        std::cout << "Частное от деления " << M / N << std::endl;
    }
    else {
        std::cout << "M на N нацело не делится" << std::endl;
    }

    std::cout << "\nEx3\n";

    int t, j, k;

    std::cout << "Введите длины сторон треугольника a, b, c: ";
    std::cin >> t >> j >> k;

    if (t + j > k && j + k > t && t + k > j) {
        std::cout << "Треугольник с такими длинами сторон существует" << std::endl;
    }
    else {
        std::cout << "Треугольник с такими длинами сторон не существует" << std::endl;
    }

}

