#include<iostream>
#include<cstring>
using namespace std;
class sbp{
	protected : string bank_name,account_type;
	protected :  int interest_rate=7;
	protected :  int interest_calculater,amount;
	public : void get_bank_name(string name){
		bank_name=name;
	}
	public : void get_bank_name(string account){
		account_type=acount;
	}
	
	public : void display(){
		cout<<"\nbank name : "<<bank_name;
		cout<<"\naccount type : "<<account_type;
	}
	public : void  interest_rate(){
		if(account_type=="saving"){
			cout<<" interest rate on saving account is : " interest_rate<<" %";
		}
		
	}
	
	public : void  interest_calculater(int amount){
		
	      interest_calculter=amount*0.07;
		cout<<"\nyour interest rate :  "<<interest_calculter;
	}
};

class bank
{
      private:   int acno;
      private:  char nm[100], acctype[100];
      private:  float bal;  
   public:
        bank(int acc_no, char *name, char *acc_type, float balance)  
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
      public :  void deposit(){
        int damt1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>damt1;
        bal+=damt1;
}

public : void withdraw(){
        int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt1;
}

public : void display()
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}


};




int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
  
        bank b1(acc_no, name, acc_type, balance);  
        b1.deposit(); 
        b1.withdraw(); 
        b1.display();
        return 0;
}

