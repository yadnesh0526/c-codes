#include<iostream>
using namespace std;
int main(){
    //contiue- skip to next iteration
    //break-terminate loop
    //example to skip number divisible by 3 from nto100
    int n;
    cin>>n;
    for(n=n;n<=100;n++){
        if(n%3==0){
            continue;
        }
        
          
        cout<<n<<endl;
    }
    return 0;
}