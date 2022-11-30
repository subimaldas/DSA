#include <iostream>

#include <bits/stdc++.h>

using namespace std;

class Hero
{

    // PROPERTIES
    int health;

public:
    char level;

    // constructor call
    Hero()
    {
        cout << "Calling of Constructor" << endl;
    }

    // parameterized constructor(this constructor)
    Hero(int health)
    {
        cout << "THis Constructor" << this << endl;
        this->health = health;
    }

    int getHealth()
    {
        return health;
    }

    // char getLevel()
    // {
    //     return level;
    // }

    void setHealth(int h)
    {
        health = h;
    }

    // void setLevel(char ch)
    // {
    //     level = ch;
    // }
};

int main()
{
    cout << "Hi" << endl;
    // Hero Ramesh;     // Ramesh.Hero();
    Hero Ramesh(11);
    cout << "Address of Ramesh" << &Ramesh << endl;
    cout << "Hello" << endl;
    return 0;

    /*
        // Statica allocation
        Hero alom;
        alom.setHealth(70);
        alom.level = 'S';
        cout << "Health is" << alom.getHealth() << endl;
        cout << "Level is" << alom.level << endl;

        // Dynamic Allocation
        Hero *b = new Hero;
        (*b).setHealth(990);
        b->level = 'F';
        cout << "Health is" << (*b).getHealth() << endl;
        cout << "Level is" << (*b).level << endl;

        // another way of expressing dynamic allocation (*b or b->)
        cout << "Health is" << b->getHealth() << endl;
        cout << "Level is" << b->level << endl;
        return 0;
     */
}