#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name="mrityunjay";
    int age=21;
    string color="brown";
    Student(int age,string name){
        this->age=age;
        this->name=name;
        cout<<"constructor called"<<endl;

    }




};
int main(){
    Student s1(11,"first");
    Student s2(s1);

    cout<<s1.age<<endl;
    cout<<s1.name<<endl;


}