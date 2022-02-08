#include<iostream>
using namespace std;
int main()
{
    int n,key,l=0,mid;
    cout<<"Enter no. of elements";
    cin>>n;
    int a[n];
    for( int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int h = sizeof(a[n]);
    cout<<"Enter key";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"Element is found at "<<mid;
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