#include<iostream>
using namespace std;
int main(){
    //int arr[n][m];--syntax
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
            
        }
        
    }
    cout<<"matrix is"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]==x){
                cout<<i<<j<<endl;
                flag=true;

            }
            
            

            
        }
        
    }

    if(flag){
        cout<<"element is found\n";

    }else{
        cout<<"element is not found\n";
    }
}
