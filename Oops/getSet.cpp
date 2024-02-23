#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name = "mrityunjay";
    int age=21;

    public:

    void setAtt(int age)
    {
        this->age = age;
    }
    int getAtt()
    {
        return age;
    }
};
int main()
{

    Student *s1= new Student();        
      
  

    s1->setAtt(20);
    cout<<s1->getAtt()<<endl;
}

