#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
      Rectangle(){
          length = 1;
          breadth = 1;
      }

      Rectangle(int l , int b){
          setLength(l);
          setBreadth(b);
      }

      Rectangle(Rectangle &r){
          length = r.length;
          breadth = r.breadth;
      }

    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
    void setLength(int l){     // acccessors
        if(l > 0){
            length = l;
        }
        else{
            length = 1;
        }

    }
    void setBreadth(int b){           // acccessors
        if(b > 0){
            breadth = b;
        }
        else{
            breadth = 1;
        }

    }
    int getLength(){        // mutuators
        return length;
    }
    int getBreadth(){        // mutuators
        return breadth;
    }
};
int main(){
    Rectangle r; //object creation in stack
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r.area()<<endl<<r.perimeter()<<endl;    // userdefined constructor
    cout<<r1.area()<<endl<<r1.perimeter()<<endl;   // parametrized constructor
    cout<<r2.area()<<endl<<r2.perimeter()<<endl;    // copy constructor
    return 0;
}