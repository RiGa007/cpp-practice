#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int *p = &x;
    int  **q = &p;

    **q = **q + 10;

    cout<<x;

    return 0;
}