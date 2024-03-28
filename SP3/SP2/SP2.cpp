#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    std::cout << "Ex1 \n";
    int num;

    std::cout << "Enter a number to calculate the factorial : ";
    std::cin >> num;

    int result = factorial(num);
    std::cout << "Factorial of a number " << num << " is " << result << endl;


    std::cout << "\nEx2 \n";

    float N, M;

    std::cout << "Enter number \"N\": ";
    std::cin >> N;
    std::cout << "Enter degree \"M\": ";
    std::cin >> M;
    cout << "The number "<< N << " to the degree of "<< M << " is equal to " << pow(N, M)<< "\n";

    return 0;

}

