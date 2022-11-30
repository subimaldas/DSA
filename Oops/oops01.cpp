#include <iostream>

#include <bits/stdc++.h>

using namespace std;

class Hero
{
    // properties
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    // creation of object
    Hero sagar;

    // access properties we use (.) operator
    sagar.level = 64;

    // use setter
    sagar.setHealth(90);

    // cout << "Size:" << sizeof(sagar) << endl;
    cout << "Health is:" << sagar.getHealth() << endl;

    cout << "Level is:" << sagar.level << endl;
    return 0;
}
