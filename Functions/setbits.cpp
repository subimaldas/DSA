#include <iostream>

using namespace std;

//For getting a setbit for 1st number 
int setbits1(int a)
{
    int ans = 0;
    while (a > 0)
    {
        if (a % 2 == 1)
            ans++;
        a /= 2;
    }
    return ans;
}


//For getting setbits for 2nd number 
int setbits2(int b)
{
    int ans = 0;
    while (b > 0)
    {
        if (b % 2 == 1)
            ans++;
        b /= 2;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter The value of a and b" << endl;
    cin >> a >> b;
    int ans1, ans2, ans;
    ans1 = setbits1(a);
    ans2 = setbits2(b);
    ans = ans1 + ans2;
    cout << "The final number of setbits is " << ans << endl;
    return 0;
}