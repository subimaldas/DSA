Questiion: Find the legth of the string.
  
  
CODE:
#include <iostream>

using namespace std;

// length of string (function)
int getLength(char name[])
{
    int count = 0;
    //We know that the last element in the character array is null character, i.e (<\0)
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
    ;
    cout << " Length of the string:-" << getLength(ch) << endl;

    return 0;
}
