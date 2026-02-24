#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter your height :";
    cin >> a;
    cout << "Enter your first friend's height :";
    cin >> b;
    cout << "Enter your second friend's height :";
    cin >> c;
    int avg = a + b + c / 3;
    cout << "Avg height of your group is : " << avg;

    return 0;
}