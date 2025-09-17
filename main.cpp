#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int sum(int a, int b) {
    return a + b;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    cout << "Factorial(" << 5 << ") = " << factorial(5) << endl;
    cout << "Sum(3, 7) = " << sum(3, 7) << endl;
    cout << "isPrime(17) = " << isPrime(17) << endl;
    cout << "Power(2, 8) = " << power(2, 8) << endl;
    cout << "testing!!!" << endl;
    return 0;
}
