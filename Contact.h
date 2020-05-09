#include<iostream>
using namespace std;

class Contact{
    private:
    int x = 0;
    public:
    Contact(){
        cout<<"who do you wanna contact?\n";
        cout<<"1 for CEO";
        cout<<"2 for General Manager";
        cout<<"3 for account Manager";
        cout<<"4 for Relationship Manager";
        cout<<"5 for Assiss. Manager";
        cout<<"6 for PN";
        cout<<"7 for Insurance Manager";
        cout<<"8 for CFO";
        cin >> x;
        if (x==1){
            cout<<"if u want to contact our CEO let me explain you cant so sorry";
        }else if(x==2){
            cout<<"so GENERAL MANAGER HUH :)";
            cout<<"Here is phone number 9888057504";
        }else if(x==3){
            cout<<"Ohho Account Manager ;)";
            cout<<"here is account manager 9456800044";            
        }else if(x==4){
            cout<<"Relationship Manager Sounds Crazy";
            cout<<"here is account manager 8968057504";            
            }else if(x==5){
            cout<<"Assiss manager Problem so easy peazy";
            cout<<"here is account manager 7888779683";            
        }else if(x==6){
            cout<<"so wanna contact PN";
            cout<<"here is contact no. 212-4143-4132";
        }else if(x==7){
            cout<<"Wanna get an Insurance ?";
            cout<<"here is contact no. 9815941040";
        }else if(x==8){
            cout<<"Wanna contact the CFO:>";
            cout << "to contact him you need to be at a manager";
        }
    }
    
};