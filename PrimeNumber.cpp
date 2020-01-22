#include <iostream>

using namespace std;

bool checkPrime(int number)
{
    if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0)
        return false;
    else
        return true;
}

int main()
{
    int number;
    bool isPrime;
    cout << "Prime Number Checker : ";
    cin >> number;
    if (checkPrime(number))
        cout << "Prime";
    else
        cout << "No";
}