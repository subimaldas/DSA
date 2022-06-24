#include <iostream>

using namespace std;

int sqrRootInt(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        int sqr = mid * mid;

        if (sqr == n)
            return mid;

        if (sqr < n)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSolution)
{
    double factor = 1;
    double ans = tempSolution;
    for (double i = 0; i < precision; i++)
    {
        factor = factor / 10;
        //     0.1
        //     0.01
        //     0.001
    }

    for (double j = ans; j * j < n; j=j + factor)
    {
        ans = j;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Value of n:" << endl;
    cin >> n;

    int tempSolution = sqrRootInt(n);
cout <<"The answer is:"<< tempSolution<< endl;
    cout << "The precise answer is" << morePrecision(n, 3, tempSolution) << endl;

    return 0;
}
