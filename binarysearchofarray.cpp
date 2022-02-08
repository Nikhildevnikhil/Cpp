#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},key,l=0,h=9,mid;
    cout<<"Enter key";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"Element is found at"<<mid;
            return 0;
        }
        else if(key>a[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<"Element not found";
    return 0;
}