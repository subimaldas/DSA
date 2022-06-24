#include <iostream>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int num;
    cout<<"Enter the desired number"<< endl;
    cin >> num;

    if (isPrime(num))
    {
        cout << "Is a prime Number" << endl;
    }
    else
    {
        cout << "Not a prime Number" << endl;
    }

    return 0;
}