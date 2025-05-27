#include<iostream>
using namespace std;

class Animal
{

    public:
    virtual void makesound()
    {
        cout<<"Animal making sound";
    }
};

class Dog : public Animal
{
    public:
    void makesound() override //optional to use "override"
    {
        cout<<"Dog making sound";
    }
};

int main()
{
    Animal *a1;
    Dog d1;
    a1 = &d1; // code will run in run time not at compile time
    a1->makesound();
}