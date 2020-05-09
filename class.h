#include<iostream>
#include<fstream>
using namespace std;
class account{
    private:
        int accno;
        char name[100];
        int deposit;
        char type;
        int phno[10];
        char adhaarCard[12];
    public:
        void createAccount();
        // to create an account
        void showAccount();
        // to show data 
        void add();
        // to add new data 
        void deposi(int);
        //to add money in account
        void withdraw(int);
        //to subtract the money in account
        void display();

};
void account::createAccount(){
    cout<<"\n Enter The account No.:";
    cin>>accno;
    cout<<"\n Enter The Name of Account Holder :";
    cin.getline(name,100);
    cout<<"\n Enter Type of The Account(C/S)";
    cin>>type;
    cout<<"\n Enter The Initial amount(>=500 for saving and >=1000 for current):";
    cin>>deposit;
    cout<<"\n Enter Your Phone number :";
    cin>> phno[10];
    cout<<"Enter Adharcard number:";
    cin.getline(adhaarCard,12);

    ofstream o("account.dat", ios::binary| ios::out);
    o.write(reinterpret_cast<char*>(this), sizeof(*this));




}
void account::showAccount(){
    
    cout<<"\n Account No:"<<accno;
    cout<<"\n Account Holder Name:"<<name;
    cout<<"\n Type of Account :"<<type;
    cout<<"\n Balance amount :" <<deposit;
    
    

}

void account:: display(){
    ifstream i("account.dat", ios::binary| ios::in);
    while(!i.eof()){
        i.read(reinterpret_cast<char*>(this), sizeof(*this));
        this->showAccount();
    }
}

void account::add(){
    cout<<"\n Account no.:"<<accno;
    cout<<"\n Modify Account Holder Name:";
    cin.ignore();
    cin.getline(name,100);
    cout<<"\n Modify Type of Account";
    cin>>type;
    cout<<"\n Modify Balance Amount:";
    cin>>deposit;
}
void account::deposi(int x){
    deposit+=x;
}
void account::withdraw(int x){
    deposit-=x;
}
