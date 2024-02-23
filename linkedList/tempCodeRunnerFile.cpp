#include<iostream>
using namespace std;
void print(int *q) {
    
    q=q+1;
    *q=*q+1;
    
  
cout<<q<<endl;

}


int main(){
   int a=10;
   int *p=&a;
   cout<<"main"<<endl;
   cout<<p<<endl;
  
   print(&a);
    cout<<" after print main"<<endl;
   cout<<p<<endl;
   cout<<a<<endl;
  
   
   
    

}