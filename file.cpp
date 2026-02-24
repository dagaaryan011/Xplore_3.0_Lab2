#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n < 0) {
        cout << "Error: Negative number!\n";
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    cout << "\n📊 Factorial Calculator\n";
    cout << "=======================\n\n";
    cout << "Enter a number: ";
    cin >> num;
    
    cout << num << "! = " << factorial(num) << "\n\n";
    
    return 0;
}
