#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    int area();
        
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
int Rectangle::area(){                 // scope resolution operator
    return length * breadth;
}

int main(){
    Rectangle r; //object creation in stack
    r.setLength(10);
    r.setBreadth(5);
    cout<<r.area()<<endl<<r.perimeter();
    return 0;
}