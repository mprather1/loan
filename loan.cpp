#include <iostream>
using namespace std;
int main()
{
  int months = 0;
  int years = 0;

  double balance, payment;

  cout<<"Loan Calculator..."<<endl;

  cout<<"Enter the balance:  "<<endl;
  cin>>balance;

  cout<<"Enter the monthly payment: "<<endl;
  cin>>payment;

  while(balance > 0)
  {
    months=months+1;
    balance = balance - payment;
  }

  cout<<"It will take you "<<months<<" months to pay off the loan"<<endl;

  years=months/12;

  cout<<months<<" months is "<<years<<" years."<<endl;

}
