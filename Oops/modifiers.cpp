#include<bits/stdc++.h>
using namespace std;
class Student{
     private:
    int age=21;
    protected:
    string ImpInfo="i am a boy";
    public:
    string name="mrityunjay";
    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return age;
    }
    

    
    

};
int main(){
    Student s1;
    cout<<s1.name<<endl;
    cout<<s1.getAge()<<endl;
    s1.setAge(90);
    cout<<s1.getAge()<<endl;
    
    

}