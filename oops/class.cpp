#include <iostream>
#include <string.h>

using namespace std;

class Hero
{

    // properties

private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // constructor
    Hero()
    {
        cout << "Contrutor is called" << endl;
        name = new char[100];
    }

    // Parameterised constructor

    Hero(int health)
    {
        // cout << " this ->" << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        // cout << " this ->" << this << endl
        this->health = health;
        this->level = level;
    }

    // copy constructor

    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];

        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor is called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // static  function

    static int random()
    {
        return timeToComplete;
    }

    int getHealth()
    {

        return health;
    }

    int print()
    {
        cout << "nmae: " << this->name << endl;
        cout << "health " << this->health << endl;
        cout << "level: " << this->level << endl;
    }
    int setLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        // conditions can also be appilied hereonly mentioned or specificed usser or name can set or change the values we can also do like that in setter method
        health = h;
    }
    void setLevel(int l)
    {
        level = l;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Destructor
    ~Hero()
    {

        cout << " Destructor is called " << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{

    cout << Hero ::timeToComplete << endl;
    cout << Hero::random() << endl;
}

/*
    Hero hero1;
    hero1.setHealth(121);
    hero1.setLevel('X');
    char name[10] = "nikith";
    hero1.setName(name);

    // hero1.print();

    // using default copy constructor

    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // copy assignment operator

    hero1 = hero2;
    cout << "copy assignment operator" << endl;
    cout << endl;
    hero1.print();
    hero2.print();

    */

// Hero niki;
// niki.setHealth(21);
// niki.setLevel('A');
// or using parameterized constructor

/*
    Hero niki(21, 'C');
    niki.print();

    // copy constructor
    Hero nikith(niki);
    // nikith.health= niki.health;
    // nikith.level= niki.level;
    nikith.print();

    */

/*
// object is created statically
Hero nikith(21);
// cout << "address of nikith :" << &nikith << endl;
nikith.print();

Hero temp(21, 'B');
temp.print();

// if object is created dynamically
// cout << "hello" << endl;
// Hero *a = new Hero;
*/

/*
    // static allocation

    Hero a;
    a.setHealth(21);
    a.setLevel('A');
    cout << "level is " << a.level << endl;
    cout << "healt is :" << a.getHealth() << endl;

    // dynamically allocating

    Hero *b = new Hero;
    b->setHealth(21);
    b->setLevel('A');
    cout << "level is " << (*b).level << endl;
    cout << "healt is :" << (*b).getHealth() << endl;

    // or

    cout << "healt is :" << b->getHealth() << endl;
    */

// creating an object
// Hero nikith;
// cout << "size " << sizeof(nikith) << endl;
// // by get and

// cout << "nikith health is " << nikith.getHealth();

// // set methods
// nikith.setHealth(21);

// nikith.level = 'a';
// cout << "health is :" << nikith.getHealth() << endl;
// cout << "level is :" << nikith.level << endl;

/*
    Hero a;

    // Dynamically

    Hero *b = new Hero();
    delete b;

    */