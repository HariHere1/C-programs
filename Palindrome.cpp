#include <iostream>
using namespace std;
int main()
{
    int n,t,r=0,d;
    cout<<"Enter a number";
    cin>>n;
    t=n;
    while(t>0)
    {
        d=t%10;
        r=r*10+d;
        t=t/10;
    }
   
   cout<<"Palindrome checked Result : "<<r;
   if (r==n)
    {
        cout<<"\n""Entered number is Palindrome";
    }
    else {
        cout<<"\n""Entered number is not Palindrome";
    }
    return 0;
}