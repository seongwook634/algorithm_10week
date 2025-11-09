#include <iostream>

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;

    // Á¡È­½Ä: C(n, k) = C(n-1, k-1) + C(n-1, k)
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n, k;

    n = 5;
    k = 2;
    std::cout << n << "C" << k << " = " << binomialCoefficient(n, k) << std::endl;

    n = 4;
    k = 4;
    std::cout << n << "C" << k << " = " << binomialCoefficient(n, k) << std::endl;

    n = 15;
    k = 10;
    std::cout << n << "C" << k << " = " << binomialCoefficient(n, k) << std::endl;

    return 0;
}