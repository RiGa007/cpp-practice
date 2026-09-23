#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    void setData(int l, int b){
        length = l;
        breadth = b;
    }

    friend void compareArea(Rectangle r1, Rectangle r2);
};

void compareArea(Rectangle r1, Rectangle r2){
    int area1 = r1.length * r1.breadth;
    int area2 = r2.length * r2.breadth;

     if (area1 > area2)
        cout << area1;
    else if (area2 > area1)
        cout << area2;
    else
        cout << "Equal";
}

int main(){
    Rectangle r1, r2;

    int l1,b1,l2,b2;

    cin>>l1>>b1;
    cin>>l2>>b2;

    r1.setData(l1,b1);
    r2.setData(l2,b2);

    compareArea(r1, r2);

    return 0;
}