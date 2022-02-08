#include<bits/stdc++.h>
using namespace std;
void printarray(int a[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
}
void binarysearch(int a[], int n , int key){
    int l=0,h = n - 1,mid;
    while(l<=h){
        mid = (l + h) / 2;
        if(key == a[mid]){
            cout<<"Element found at  "<<mid;
        }
        else if(key > a[mid]){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    cout<<"Element not found";
}
int main(){
    int n,key;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    printarray(a,n);
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    binarysearch(a,n,key);
    
    

    

}
