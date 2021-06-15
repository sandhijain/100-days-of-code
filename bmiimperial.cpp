#include<iostream>
#include<iomanip>
using namespace std;
int main(){

float weight,height,bmi;
cout<<"Please enter the weight in pounds\n";
cin>>weight;
cout<<"Please enter the height in inches\n";
cin>>height;
weight = weight*0.453592 ;
height = height*0.0254;
 
bmi = weight/(height*height);
cout<<"The BMI is: "<<setprecision(4)<<bmi;
 
return 0;
}