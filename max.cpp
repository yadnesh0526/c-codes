#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"MAXIMUM OF THREE NUMBERS IS "<<a;

        }else{
            cout<<"MAXIMUM OF THREE NUMBERS IS "<<c;
        } 
    }else{
        if(b>c){
            cout<<"MAXIMUM OF THREE NUMBERS IS "<<b;
        }else{
             cout<<"MAXIMUM OF THREE NUMBERS IS "<<c;
        }
    }       
}