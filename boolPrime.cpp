#include <iostream>
using namespace std ;
bool Isprime(int  n , int count = 0){ // 1 is the smallest factor and n is the largest factor for any number 
    for(int i = 1 ; i<=n ; i++){
 if(n%i==0){
        count ++;
      }
    }
    cout<<count<<endl;
    if(count ==2){
        return true;
    } 
    else{
        return false;
    }   
    }
    int main(){
        int n ;
        cin>>n;
       bool ans =  Isprime(n);
       if(ans == true ){
           cout<<"yes it is prime";
       }
       else{
           cout<<"no it is not prime";
       }
    }