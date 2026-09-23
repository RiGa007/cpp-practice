#include <iostream>
using namespace std;
class Sum{
    public:
    int a;
    int b;

    int getSum(){
        return a + b;
    }


};
int main(){
    int a,b;
    cin>>a>>b;
    Sum s;
    s.a = a;
    s.b = b;
    cout<<s.getSum()<<endl;
}