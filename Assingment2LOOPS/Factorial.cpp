#include <iostream>
using namespace std ;
int main (){
    long long n;
    cin>>n;
     long long fact =1;
     if(n==0){
        fact == 1;
     }
    for(int i = 1 ; i<=n;i++){
        fact = fact * i ;
    }
    cout<<fact;
}
