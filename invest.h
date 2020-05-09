#include<iostream>
using namespace std;
class Investment {
    private:
        int P = 0;
        int R = 0;
        int T = 0;
        int A = 0;
        int X;
    public:
        void FixedDeposit();
        void mutualFund();
        void stockBroker();
        void ForexTrading();

};

void Investment::mutualFund(){
    cout<<"Mutual Funds Investement are subject to market risk read all scheme related documents carefully";
    cout <<"Select the mutual fund you want to invest in \n";
    cout <<"1.)ICICI Prudential Equity & Debt Fund. \n";
    cout <<"2.)Mirae Asset Hybrid Equity Fund. \n";
    cout <<"3.)Axis Bluechip Fund. \n";
    cout <<"4.)ICICI Prudential Bluechip Fund. \n";
    cout <<"5.)L&T Midcap Fund. \n";
    cout <<"6.)HDFC Mid-Cap Opportunities Fund. \n";
    cout <<"7.)L&T Emerging Businesses Fund. \n";
    cout <<"8.)HDFC Small Cap Fund. \n";
    cin >>X;
    cout << "You will be contacted by us shortly ";
    }
void Investment::stockBroker(){
    cout << "Here we Invest in Stocks we have high class world level Investors  ";
    cout <<" ";
}
