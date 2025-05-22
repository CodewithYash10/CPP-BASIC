#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age : ";
    cin>>age;
    if(age<12){
        cout<<"get discount";
    }
    else if(age>65){
        cout<<"get discount";
    }
    else{
        cout<<"not eligible";
    }
}