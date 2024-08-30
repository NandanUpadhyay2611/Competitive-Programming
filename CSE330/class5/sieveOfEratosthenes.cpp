#include <iostream>
#include <vector>
using namespace std;
void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    
    isPrime[0] = isPrime[1] = false;

    
    for (int p = 2; p * p <= n; ++p) {
        
        if (isPrime[p]) {
        
            for (int i = 2 * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            cout << p << " ";
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Prime numbers up to " << n << " are: ";
    sieveOfEratosthenes(n);
    return 0;
}
