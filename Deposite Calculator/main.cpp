#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{ 
    const char TAB = '\t';
    const int DAYS_IN_MONTH = 30;
    const int DAYS_IN_YEAR = 365;
    const int INTEREST_RATE = 5;
    const int P = 100;
    
    float d, n, profit, pm, total;
    
    
    cout <<"Wellcome to The Deposite Calculator!"<< endl;
    cout <<"To calculate an income from the deposite, follow the instructions below"<< endl;
    cout<<""<<endl;
    cout <<"Enter your amount of deposit and press Enter.."<<endl;
    cout <<"*NOTE: The currency will be in US dollar.*"<< endl;
    cin >>d;
    cout<<""<<endl;
    cout <<"You entered" << TAB << d <<"$"<<endl;
    cout <<"*NOTE: Your interest rate is 5% per annum.*"<<endl;
    cout<<""<<endl;
    cout<<"Enter the number of months of money stored in the Bank and press Enter.."<< endl;
    cin >>n;
    cout<<""<<endl;
    cout <<"You entered" << TAB << n << TAB <<"months"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"So.."<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout <<"Your amount of deposit:" << TAB << d << TAB <<"$"<<endl;
    cout<<""<<endl;
    cout <<"Your interest rate is 5% per annum."<<endl;
    cout<<""<<endl;
    cout <<"Number of months is:" << TAB << n <<endl;
    cout<<""<<endl;
    profit = (d*INTEREST_RATE*DAYS_IN_MONTH*n) / (P*DAYS_IN_YEAR);
    total = profit + d;
    pm = profit/n;
    cout <<"Your profit per month is" << TAB << pm <<"$"<<endl;
    cout<<""<<endl;
    cout <<"Your profit for the whole time is\a" << TAB << profit << TAB <<"$"<<endl;
    cout<<""<<endl;
    cout<<"Your income is "<<total<<"$"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"Thank you for using our Calculator. Press Enter to close it.."<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
