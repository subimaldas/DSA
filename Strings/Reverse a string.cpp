#include <iostream>

using namespace std;

// Reverse Function
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

// length of string (function)
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()

{

    char ch[20];

    cout << "Enter your String(Name):";
    cin >> ch;

    cout << "Your String(name) is:" << ch << endl;
    int len = getLength(ch);
    cout << " Length of the string:-" << len << endl;
    reverse(ch, len);
    cout << "Your String(name) is:" << ch << endl;
    return 0;
}
