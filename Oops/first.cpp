#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name="mrityunjay";
    int age=21;
    string address="East champaran Bihar";
    string course;

    void method(){
        cout<<"method is called"<<endl;
    }

    void update(int age){
        this->age=age;
        cout<<"age of s1 after update : "<<this->age<<endl;
    }

};
int main(){
    student s1;
    student s2;
    cout<< s1.name <<" " <<s1.age << " "<< s2.address <<endl;
    s1.method();
    s2.method();
    s1.update(40);
    cout<<"main function printing age of s1 "<<s1.age<<endl;




}