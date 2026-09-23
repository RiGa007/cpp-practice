#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string insertStr;
    int ins_pos;
    int del_pos;
    int del_count;

    cin>>str;
    cin>>insertStr;
    cin>>ins_pos;
    cin>>del_pos;
    cin>>del_count;

    cout<<"Length: "<<str.length()<<endl;

    str.insert(ins_pos, insertStr);
    str.erase(del_pos, del_count);

    cout<<"Final String: "<<str;

    return 0;
    
}