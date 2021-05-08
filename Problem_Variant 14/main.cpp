#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float S1,S2,T,V1,V2,Approach_Speed, Approach_Time;
    cout<<"PROBLEM: The first car's speed is V1 km / h, the second - V2 km / h," <<endl;
    cout<<"the distance between them S km." <<endl;
    cout<<"Determine the distance between cars in T hours,"<<endl;
    cout<<"if they are moving in one direction."<<endl;
    cout<<""<<endl;
    cout<<"*"<<endl;
    cout<<""<<endl;
    cout<<"Type V1 speed of a car (in km/h)"<<endl;
    cin>>V1;
    cout<<"You typed " << V1 <<" km/h " << endl;
    cout<<""<<endl;
    cout<<"Type V2 speed of a car (in km/h)  NOTE: V2 must be different from V1 !"<<endl;
    cin>>V2;
    cout<<"You typed " << V2 <<" km/h " << endl;
    cout<<""<<endl;
    
    if(V1 == V2)
         {
              cout<< "V1 and V2 can not be the same value. Try again, please."<<endl;
              system("pause");
              return 0;
         }  
          
    cout<<"Type the distance between cars (in km) NOTE: Distance can not be equal to zero !"<<endl;
    cin>>S1; 
    cout<<"You typed " << S1 <<" km " << endl;  
    cout<<""<<endl;
    cout<<"Type travel time (in hours) of cars to get final distance between them."<<endl;
    cout<<"NOTE: Time can not be equal to zero !"<<endl;
    cin>>T; 
    cout<<"You typed " << T <<" hours " << endl; 
    
    
    if(V1>V2)
             {
              Approach_Speed = (V1 - V2) / 3.6;
              Approach_Time = (S1*1000) / Approach_Speed;
              S2 = (((T*3600) - Approach_Time) / 3600)*(Approach_Speed * 3.6);
              cout<<"After " <<T<< " hours, the distance between cars will be "<<S2<< " kilometers" <<endl;
              system("pause");
              return 0;
             }  
    else if (V1<V2)
             {
              Approach_Speed = V2 - V1;
              S2 = Approach_Speed * T + S1;
              cout<<"After " <<T<< " hours, the distance between cars will be "<<S2<< " kilometers" <<endl;
              system("pause");
              return 0; 
             }    
    system("pause");
}
