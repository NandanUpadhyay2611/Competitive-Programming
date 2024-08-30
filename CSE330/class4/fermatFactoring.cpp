


#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectSquare(long long n) {
    long long sqRoot = static_cast<long long>(sqrt(n));
    return (sqRoot * sqRoot == n);
}


void fermatFactorization(long long N) {
    if (N <= 0) {
        std::cout << "Number should be greater than 0." << std::endl;
        return;
    }

    if (N % 2 == 0) {
        std::cout << "Factors: " << N / 2 << " and 2" << std::endl;
        return;
    }

    long long x = static_cast<long long>(ceil(sqrt(N)));
    long long y2 = x * x - N;

    while (!isPerfectSquare(y2)) {
        x++;
        y2 = x * x - N;
    }

    long long y = static_cast<long long>(sqrt(y2));
    long long factor1 = x - y;
    long long factor2 = x + y;

    if (factor1 == 1 || factor2 == 1) {
        std::cout << "The number " << N << " is prime." << std::endl;
    } else {
        std::cout << "Factors: " << factor1 << " and " << factor2 << std::endl;
    }
}

int main() {
    long long N;
    cout << "Enter an odd integer to factorize: ";
    cin >> N;

    fermatFactorization(N);

    return 0;
}
