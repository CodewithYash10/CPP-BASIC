#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int i = 0;
    // while(i<1){
    //     if(n%2==0){ 
    //         cout<<"Even";
    //     }else{
    //         cout<<"odd";
    //     }
    //     i++;
    // }

    do{
        if(n%2==0){
            cout<<"Even";
        }else{
            cout<<"odd";
        }
        i++;
    }while(i<1);
}