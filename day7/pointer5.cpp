#include<iostream>
using namespace std;

int main ()
{
        int a = 10;
        //reference variable is pointing to a
        int &r = a;
        r = r  + 10;
        cout<<"The value of a:"<< a << endl;
}