#include<iostream>
#include<cmath>
using namespace std;

class Cal{
    private:
        int R;
        int P;
        int T;
        int A;
    public:
        void simpleInterest();
        void compoundInterest();
};
void Cal:: simpleInterest(){
    cout<< "please Enter the Principal\n";
    cin>>P;
    cout<< "please Enter the Rate of Interest\n";
    cin>>R;
    cout<<"Please Enter time for which you want to deposit\n";
    cin>>T;

    A=P*R*T/100;
    cout<<A;   
}
void Cal::compoundInterest(){
    cout<< "please Enter the Principal\n";
    cin>>P;
    cout<< "please Enter the Rate of Interest\n";
    cin>>R;
    cout<<"Please Enter time for which you want to deposit\n";
    cin>>T;

    A=P*(pow((1+R/100),T));
    

}