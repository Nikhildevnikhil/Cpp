#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main(){
    Rectangle r; //object creation in stack
    r.length = 10;
    r.breadth = 5;
    cout<<r.area()<<endl<<r.perimeter();
    return 0;
}