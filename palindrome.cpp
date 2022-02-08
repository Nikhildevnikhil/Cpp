#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0,temp;
    cout<<"Enter n"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(temp==rev)
    cout<<"No. is Palindrome";
    else
    cout<<"no. is not palindrome";

    return 0;
}