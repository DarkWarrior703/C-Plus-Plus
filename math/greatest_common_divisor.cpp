// C++ program to find GCD of two numbers
#include <iostream>

// Recursive function to return gcd of a and b
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

// Driver program to test above function
int main() {
    int a = 98, b = 56;
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}
