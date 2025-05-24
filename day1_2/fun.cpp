/*
to declare a function in C/C++
==============================
1. function declaration/Prototype - return_type name_finction(parameter)
2. function definition
    return_type name_fun(...parameter)
3. function call
    name_func(...arguments);
*/

#include<iostream>
using namespace std;
int add(int num1, int  num2);

int main(){
    //function call
    int a = 80;
    int b = 30;
    int res = add(a,b);

    cout <<"The result is:" << res << endl;

    int c = 20;
    int d = 40;
    int res1 = add(c,d);

    cout << "The result2 is:" << res1 << endl;
}

//function defintion
int add(int num1, int num2)
{
    int sum = num1+num2;
    return sum;
}