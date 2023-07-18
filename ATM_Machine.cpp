#include <bits/stdc++.h>
using namespace std;
#include <string.h>

class Bank{
    int bal;
public:
    Bank(int val){
        bal=val;
    }
    string check_balance(){
        return("Your balance is: " + to_string(bal));
    }
    string deposit(int val){
        bal=bal+val;
        return("deposit successfull");
    }
    string withdraw(int val){
        if (bal-val>=0){
            bal=bal-val;
            return("debit successfull");
        }
        else{
            return("Your balance is low to make this transaction");
        }
    }
};


int main(){
    Bank shwetank(1000);
    Bank chitrank(2000);

    cout<<"Welcome to ATM !! Our Service Available 24 Hours."<<endl;
   
    bool a=true;
    while(a){
        bool b=true;
        cout<<"Enter your identity"<<endl;
        string name;
        cin>>name;
        string message1,message2,message;
        if(name=="shwetank"){
            while(b){
                cout<<"Choose option to take action"<<endl;
                cout<<"1. Send Money \t2. Deposit Money \t3. Withdraw Money \t4. Check Balance \t5. Abort Transaction"<<endl;
                int option=0;
                cin>>option;
                
                if(option==1){
                    int value;
                    cout<<"entered amount to send to chitrank"<<endl;
                    cin>>value;
                    message1=shwetank.withdraw(value);
                    message2=chitrank.deposit(value);
                    if(message1=="debit successfull" && message2=="deposit successfull"){
                        cout<<value<<" rs sended to chitrank"<<endl;
                    }
                    else{
                        cout<<message1<<endl;
                        message="finished";
                    }
                }
                else if(option==2){
                    int value;
                    cout<<"entered amount to deposit"<<endl;
                    cin>>value;
                    message1=shwetank.deposit(value);
                    if(message1=="deposit successfull"){
                        cout<<value<<" rs deposited to shwetank sucessfully"<<endl;
                    }
                    else{
                        cout<<"error in depositing money to shwetank"<<endl;
                        message="finished";
                    }
                }
                else if(option==3){
                    int value;
                    cout<<"entered amount to withdraw"<<endl;
                    cin>>value;
                    message1=shwetank.withdraw(value);
                    if(message1=="debit successfull"){
                        cout<<value<<" rs withdraw from shwetank"<<endl;
                    }
                    else{
                        cout<<message1<<endl;
                        message="finished";
                    }
                }
                else if(option==4){
                    message1=shwetank.check_balance();
                    cout<<message1<<endl;
                }
                else if(option==5){
                    cout<<"Ending the Transaction \nThank you for visiting"<<endl;
                    message="finished";
                }
                else{
                    cout<<"invalid option choosed!! Transaction aborted"<<endl;
                    message="finished";
                }
                
                if(message=="finished")
                    b=false;
            }
        }
        else if(name=="chitrank"){
            while(b){
                cout<<"Choose option to take action"<<endl;
                cout<<"1. Send Money \t2. Deposit Money \t3. Withdraw Money \t4. Check Balance \t5. Abort Transaction"<<endl;
                int option=0;
                cin>>option;
                
                if(option==1){
                    int value;
                    cout<<"entered amount to send to shwetank"<<endl;
                    cin>>value;
                    message1=chitrank.withdraw(value);
                    message2=shwetank.deposit(value);
                    if(message1=="debit successfull" && message2=="deposit successfull"){
                        cout<<value<<" rs sended to shwetank"<<endl;
                    }
                    else{
                        cout<<message1<<endl;
                        message="finished";
                    }
                }
                else if(option==2){
                    int value;
                    cout<<"entered amount to deposit"<<endl;
                    cin>>value;
                    message1=chitrank.deposit(value);
                    if(message1=="deposit successfull"){
                        cout<<value<<" rs deposited to chitrank sucessfully"<<endl;
                    }
                    else{
                        cout<<"error in depositing money to chitrank"<<endl;
                        message="finished";
                    }
                }
                else if(option==3){
                    int value;
                    cout<<"entered amount to withdraw"<<endl;
                    cin>>value;
                    message1=chitrank.withdraw(value);
                    if(message1=="debit successfull"){
                        cout<<value<<" rs withdraw from chitrank"<<endl; 
                    }
                    else{
                        cout<<message1<<endl;
                        message="finished";
                    }
                }
                else if(option==4){
                    message1=chitrank.check_balance();
                    cout<<message1<<endl;
                }
                else if(option==5){
                    cout<<"Ending the Transaction \nThank you for visiting"<<endl;
                    message="finished";
                }
                else{
                    cout<<"invalid option choosed!! Transaction aborted"<<endl;
                    message="finished";
                }
                
                if(message=="finished")
                    b=false;
            }
        }
        else{
            cout<<"invalid account entered"<<endl;
            message="exit";
        }

        if(message=="exit")
            a=false;
    }

return 0;
}