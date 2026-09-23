#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int* ptr = arr;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += *ptr;
        ptr++;
    }
    cout<<sum<<endl;

    return 0;
}