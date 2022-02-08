#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0},n,key;
    cout<<"Enter the value of key";
    cin>>key;
    
    for(int i=0;i<10;i++)
    {
     if(key==a[i])
     {
         cout<<"Element fount at"<<" "<<i<<endl;
         return 0;
     }
    }
    cout<<"Element not found";
    return 0;
}