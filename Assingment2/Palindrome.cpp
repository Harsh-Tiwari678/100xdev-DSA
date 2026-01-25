#include <iostream>
using namespace std ;
int main (){
    long long n ;
    cin>>n;
    long long  rev =0;
    long long  temp =n;
    if(n==0){
        cout<<0;
    }
    while(n!=0){
        rev = (rev*10) + n%10;
        n = n/10;        
     }
     if(temp==rev){
        cout<<"YES";
     }
     else{
        cout<<"NO";
    }
     
}
