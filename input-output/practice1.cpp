// Write a program that takes your name and age as input and displays them.
#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"enter your name:";
    getline(cin,name);
    cout<<"enter your age:";
    cin>>age;

    cout<<"your name is :"<<name<<endl;
    cout<<"your age is :"<<age<<endl;
    
    return 0;
}