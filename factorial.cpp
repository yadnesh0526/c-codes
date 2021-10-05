#include<iostream>
using namespace std;

/*int main(){
   int n;
   int factorial=1;
   cin>>n;
   for(int i=1;i<=n;i++){
       factorial=factorial*i;

   }
   cout<<factorial<<endl;
return 0;  
}*/
int fact(int n){
   int factorial=1;
   for(int i=2;i<=n;i++){
       factorial*=i;

   }
   return factorial;
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}