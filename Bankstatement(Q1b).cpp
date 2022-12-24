#include<iostream>
using namespace std;

class Account{

private:
    string accNumber, accName;
    double accBalance;

public:
    Account(string accNumber,string accName,double accBalance){

    this->accNumber=accNumber;
    this->accName=accName;
    this->accBalance=accBalance;

    }
    void getvalue(){
    cout<<"Account Name : "<<accName<<endl;
    cout<<"Account Number : "<<accNumber<<endl;
    cout<<"Initial Ac Balance : "<<accBalance<<endl;

    }
    double deposit(double amount){
        cout<<"Deposit Amount : "<<amount<<endl;
        if(amount>0){
            accBalance+=amount;
        }
        cout<<"Balance after deposit : "<<accBalance<<endl;
    }
    double withdraw(double amount){
        cout<<"Withdraw Amount : "<<amount<<endl;
        if(amount>0 && amount<accBalance){
            accBalance-=amount;
        }
        cout<<"Balance after withdraw : "<<accBalance<<endl;
    }
    double getBalance(){
    return accBalance;

    }
    ~Account(){

    cout<<"Delete all objects"<<endl;
    }


};

int main(){

Account a1("CSE6011","MAHBUB CHOWDHURY",500);
a1.getvalue();
a1.deposit(10000);
a1.withdraw(2000);
cout<<"Current Balance : "<<a1.getBalance()<<endl;
}
