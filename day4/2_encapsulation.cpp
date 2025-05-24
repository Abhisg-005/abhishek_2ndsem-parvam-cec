#include<iostream>
using namespace std;

class BankAccount{
    private:
    string holder_name;
    int acc_no;

    public:
    string getHolderName()
    {
        return this->holder_name;
    }
    int getAccNo()
    {
        return this->acc_no;
    }

    void setHolderName(string holder_name)
    {
        this->holder_name=holder_name;
    }
     void setAccNo(int acc_no)
    {
        this->acc_no=acc_no;
    }

};

int main()
{
    BankAccount b1;
    b1.setHolderName("Abhishek");
    b1.setAccNo(1234567890);

    cout<<"Name is:"<<b1.getHolderName()<<endl;
    cout<<"RollNum is:"<<b1.getAccNo()<<endl;

    return 0;
}