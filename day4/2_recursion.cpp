#include<iostream>
using namespace std;

int main()
{
    int input;
    cout<<"Enter a number:"<<endl;
    cin>>input;
    int res=fact(input);
    cout<<"Result:"<<res;
}

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else if (num == 2)
    {
        return 2;
    }

    return num*fact(num - 1);
}