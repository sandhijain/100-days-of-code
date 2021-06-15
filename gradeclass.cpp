#include<iostream>
using namespace std;
int main(){
int g1,g2;
cout<<"Please enter two grades, separated by space "<<endl;
cin>>g1>>g2;
if(g1<60 && g2<60)
cout<<"Student Failed :(";
if(g1>=95 && g2>=95)
cout<<"Student Graduated With Honors :)";
else
cout<<"Student Graduated!";
return 0;
}