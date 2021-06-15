#include<iostream>
using namespace std;
int main(){

float weight,height,bmi;
cout<<"Please enter the weight in kilograms\n";
cin>>weight;
cout<<"Please enter the height in meters\n";
cin>>height;

bmi = weight/(height*height);
cout<<"The BMI is: "<< bmi;
return 0;
}