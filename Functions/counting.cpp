#include <iostream>

using namespace std;
// function signature
void printCounting(int n)
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    cout << " The counting value is ";
    // function call
    printCounting(n);
    return 0;
}