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
    Rectangle *p = new Rectangle(); //object creation in heap
    p->length=10;
    p->breadth=5;
    cout<<p->area()<<endl<<p->perimeter();
    return 0;
}