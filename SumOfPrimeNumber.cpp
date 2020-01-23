#include <iostream>

using namespace std;

bool checkPrime(int number)
{
    if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0)
        return false;
    else
        return true;
}

int expressNumber(int number)
{
    for (int i = 2; i <= number; i++)
    {
        //say z = x + z, both x and z have to be a prime number
        if (checkPrime(i)) //check x, is this a prime number ?
        {
            if (number - i) //check y, is this a prime number ?
            {
                cout << number << '=' << i << '+' << number - i << endl;
            }
        }
    }
}

int main()
{
    int number;
    cout << "Is this number can be expressed as sum of prime numbers : ";
    cin >> number;
    if (checkPrime(number))
        cout << "No, its a prime number";
    else
        expressNumber(number);
}