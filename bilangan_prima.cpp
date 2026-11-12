#include <iostream>

using namespace std;

int main() {
    cout << "Bilangan prima dari 1 sampai 100:" << endl;

    for (int i = 0; i <= 100; i++) {
        bool isPrime = true;

        if (i < 2)
        isPrime = false;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break; 
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}