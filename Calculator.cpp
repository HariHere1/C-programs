#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,r;
    cout<<"\t""Calculation Methods";
    cout<<"\t""\n""Addition : 1""\t""Subtraction : 2""\t""Multiplication : 3";
    cout<<"\n""\n""Enter the method with it's corresponding number";
    cin>>n;
    if(n==1){
        cout<<"\n""Enter three numbers to additon";
        cin>>a>>b>>c;
        r=a+b+c;
        cout<<"RESULT = "<<r;
    }
    else if (n==2)
    {
      cout<<"\n""Enter three numbers to subtraction in the decreasing order";
        cin>>a>>b>>c;
        r=a-b-c;
        cout<<"RESULT = "<<r;
    }
    else{
        cout<<"\n""Enter three numbers to multiply";
        cin>>a>>b>>c;
        r=a*b*c;
        cout<<"RESULT = "<<r;
    } 
    return 0;

}