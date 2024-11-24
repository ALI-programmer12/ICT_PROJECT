#include <iostream>

using namespace std;

class BankAccount {
	
	private:
		string accountNum = " ";
		double balance = 0;
	
	public:
		AccountDetails (string s){
			
			accountNum = s;
			balance = 0;
		}
		
		void deposit(double amount){
			
			balance += amount;
		}
		
		void withdraw(double withdraw){
			
			if(balance>withdraw){
				
				balance -= withdraw;
			}
			else{
				
				cout<<"\nInsufficient balance!!\n";
			}
		}
		
		void checkBalance(){
			
			cout<< "\nYour Current Remaining balance is: "<<balance;
		}
};

int main(){
	
	double amount, withdraw;
	
	BankAccount BA1;
	
	cout<<"Enter the amount you want to deposit: ";
	cin>>amount;
	BA1.deposit(amount);
	
	cout<<"Enter the amount you want to withdraw: ";
	cin>>withdraw;
	BA1.withdraw(withdraw);
	
	BA1.checkBalance();
}
