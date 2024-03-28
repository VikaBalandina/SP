#include <iostream>
#include <math.h>

using namespace std;

int main() {

        std::cout << "Ex 1 \n";

    float a, side, perimeter;

    std::cout << "Enter the area of the square: ";
    std::cin >> a;
    side = sqrt(a);
    perimeter = 4 * side;
    std::cout << "The perimeter of the square is: " << perimeter << endl;
   
      std::cout << "\nEx 2 \n";

    float b, c, powb, powc;

    std::cout << "Enter sides b: ";
    std::cin >> b;
    std::cout << "Enter sides c: ";
    std::cin >> c;
    powb = pow(b, 2);
    powc = pow(c, 2);
    perimeter = sqrt(powb+powc)+b+c;
    cout << "the perimeter of a right triangle is: " << perimeter << endl;
 
    std::cout << "\nEx 3 \n";
    
    cout << "this is ex1";

   /*  std::cout << "\nEx 4 \n";
   * 
    float firstTerm, ratio;
    int numTerms;
    float sum;

    cout << "Enter the first term of the geometric progression:";
    cin >> firstTerm;

    cout << "Enter the denominator of the geometric progression: ";
    cin >> ratio;

    cout << "Enter the number of terms of the progression: ";
    cin >> numTerms;*/
}