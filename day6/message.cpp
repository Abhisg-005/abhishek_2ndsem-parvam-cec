#include<iostream>
using namespace std;

class Message{

    public:
    void SendMessage(string email, string message)
    {
        cout<<"Email sent successfully:"<<endl;
        cout<<"Email:"<<email<<endl;
        cout<<"Message:"<<message<<endl;
    }
    void SendMessage(long long ph,int otp)
    {
        cout<<"OTP sent successfully:"<<endl;
        cout<<"Phone Number:"<<ph<<endl;
        cout<<"OTP:"<<otp<<endl;
    }
};

int main(){
    Message m1;
    m1.SendMessage("abhiabhisg8114@gmail.com","hello");
    m1.SendMessage(1234567890,1234);
}