#include <iostream>
using namespace std;
int main()
{
    int i1, i2, i3, i4, count = 0, odd;
    cout << "Please enter four positive integers, each separated by a space" << endl;
    cin >> i1 >> i2 >> i3 >> i4; 
    if (i1 % 2 == 0)
        count += 1;
    if (i2 % 2 == 0)
        count += 1;

    if (i3 % 2 == 0)
        count += 1;

    if (i4 % 2 == 0)
        count += 1;
    odd = 4 - count;    
    cout << count << " is the number of evens\n";
    cout<< odd << " is the number of odds\n";
     
   if(odd<count)
    cout<<" More odds than evens ";
    if(odd == count)
    cout<<" Equal odds and evens";
    if(odd > count)
    cout<<" More odds than evens"; 

    return 0;
}