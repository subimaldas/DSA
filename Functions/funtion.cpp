#include <iostream>

using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int answer = power(a, b);
    cout << "the required answer is " << answer << endl;

    int c, d;
    cin >> c >> d;
    answer = power(c, d);
    cout << "the required answer is " << answer << endl;

    int e, f;
    cin >> e >> f;
    answer = power(e, f);
    cout << "the required answer is " << answer << endl;

    return 0;
}
