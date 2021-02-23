// wap CLASS AND OBJECT

#include <iostream>
using namespace std;
class Account
{
    public:
        int accno;
        double balance;
    
    public:
        void displayInfo()
        {
            cout<<"Account Number"<<accno<<endl;
            cout<<"Account Balance"<<balance<<endl;
        }
};
int main()
{
    Account arfa;
    arfa.accno=101;
    arfa.balance=100001.01;
    arfa.displayInfo();
    
    Account tarfa;
    tarfa.accno=102;
    tarfa.balance=200001.01;
    tarfa.displayInfo();

    return 0;
}
