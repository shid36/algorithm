#include <iostream>
using namespace std;

long long power(long long base, int exp) {
    if (exp == 0) 
        return 1;
    else if (exp == 1) {  
        
        return base;
    }
    else {
  return base * power(base, exp - 1);
    }
}

int main() {
    long long base;
    int exponent;

    cout << "Enter the base = ";
    cin >> base;
    cout << "Enter the exponent = ";
    cin >> exponent;

    if (exponent < 0) {
        cout << "Negative exponent not supported!" << endl;
    }
    else {
        cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    }

    return 0;
}
