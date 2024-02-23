#include<iostream>
#include<vector>
#include<list>
#include<bits/stdc++.h>
using namespace std;
class Hashing{
    public:
    vector<list<int>>hashtable;
    int buckets;
    
    Hashing(int size){
        this->buckets=size;
        hashtable.resize(size);  

    }

    int hashvalue(int key){
        return key%buckets; // division method;
    }

    void add(int key){
        int index=hashvalue(key);
        hashtable[index].push_back(key);  // adding at that index at the last of linkedlist

    }

    list<int>::iterator search(int key){
        int index=hashvalue(key);
        return find(hashtable[index].begin(),hashtable[index].end(),key);
            
        

    }
    void Delete(int key){
    int index=hashvalue(key); 
    if(search(key)!=hashtable[index].end()) {
        hashtable[index].erase(search(key));
        cout<<key<<" is deleted "<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
     
    }
};
int main(){


    Hashing* h1=new Hashing(10);
    h1->add(21);
    h1->add(2);
    h1->add(89);
    h1->add(35);
    h1->add(23);

    h1->Delete(22);

}