#include<iostream>
using namespace std;
int search(int n,int a[],int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    int key;
    cin>>key;
    cout<<search(n,a,key);
    return 0;


}