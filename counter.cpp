#include<iostream>
using namespace std;
int main(){
int quarters, dimes, nickels, pennies, cents, tcents, dollars;
cout<<"Enter the number of quarters "<<endl;
cin>> quarters; 
cout<<"Enter the number of dimes "<<endl;
cin>> dimes;
cout<<"Enter the number of nickels "<<endl;
cin>> nickels;
cout<<"Enter the number of pennies "<<endl;
cin>> pennies;
tcents = 25*quarters + 10*dimes + 5*nickels + 1*pennies;
dollars = tcents/100;
cents = tcents%100;
 
cout<<"The total is "<< dollars << " dollars and "<< cents << " cents";

return 0;
}