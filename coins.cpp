#include<iostream>
using namespace std;
int main(){
int dollars, cents, dtc, x , y, w, z;    
cout<<"Enter the amount of dollars\n";
cin>>dollars;
cout<< "Enter the amount of cents\n";
cin>>cents;
dtc = dollars*100;
cents = dtc + cents;
x = cents/25;
y = (cents%25)/10;
z = ((cents%25)%10)/5;
w = (((cents%25)%10)%5)/1;
cout<<"The coins are "<< x <<" quarters "<< y << " dimes "<< z << " nickels "<<w<<" pennies "; 
return 0;
}