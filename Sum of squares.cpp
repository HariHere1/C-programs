#include <iostream>
using namespace std;
int main()
{
    int n,s=0,i;
    cout<<"Enter a limit";
    cin>>n;
    for(i=0;i<=n;i++)
    {
         s=s+i*i;
    }
    cout<<"Sum of squares :"<<s;
    return 0;
}