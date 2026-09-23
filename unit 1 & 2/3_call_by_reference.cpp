#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    static int count;

    public:
    Student(string n){
        name = n;
        count++;
    }
    static void displayCount(){
        cout<<count<<endl;
    }
};
int Student::count=0;

int main(){
    string a,b,c;
    cin>>a>>b>>c;

    Student s1(a);
    Student s2(b);
    Student s3(c);

    Student::displayCount();

    return 0;
}