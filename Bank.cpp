#include<iostream>
#include"invest.h"
#include"class.h"
#include"Contact.h"
#include"calc.h"
#include"loan.h"
#include"Insurance.h"
#include"creditcard.h"


using namespace std;
main(){
    int ch;
    cout<<"##################################\n";
    cout<<"##                              ##\n";
    cout<<"##        WORLD BANK            ##\n";
    cout<<"##                              ##\n";
    cout<<"##  THE BEST BANK IN THE WORLD  ##\n";
    cout<<"##live your dreams with our card##\n";
    cout<<"##                              ##\n";
    cout<<"##################################\n";

    int x;
    int y;
    int z;
    cout<<"1 for BANK MANAGEMENT\n";
    cout<<"2 for Insurance\n";
    cout<<"3 for Applying for Card\n";
    cout<<"4 for Using Calculator\n";
    cout<<"5 for taking a Loan\n";
    cout<<"6 for Contacting Customer Care";
    cin >> y;
    switch (y)
    {
    case 1:
    
        cout<<"1 for Creating an Account\n";
        cout<<"2 To View Account Data\n";
        cout <<"3 To Deposit Money\n"; 
        cout<<"4 To Withdraw Money\n";
        cin >> x;

    do{
        switch (x)
        {
            account a;
        case 1:
            
            a.createAccount();
            break;
        
        case 2: 
            a.showAccount();
            break;

        case 3:
            cout << "\nEnter amount to deposit: ";
            float amt;
            cin >> amt;
            a.deposi(amt);
            break;

        case 4:
            cout << "\nEnter amount to withdraw: ";
            int b;
            cin >> b;
            a.withdraw(b);

        default:
            cout << "Wrong choice entered.. Enter again(y/ n): ";

            break;
        }
    }while(ch == 'y' || ch == 'Y');
    break;
    case 2:

    break;
    case 3:
    break;
    case 4:
    cin >> z;
    switch (z)
    {
    case 1:
        Cal D;
        D.simpleInterest();
        break;
    case 2:
        Cal E;
        E.compoundInterest();
    default:
        break;
    }
    
    break;
    case 5:

        break;
    default:
        break;
    }
}