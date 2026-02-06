// #include <iostream>
// using namespace std ;
// void Factor(int  n , int count = 0){ // 1 is the smallest factor and n is the largest factor for any number 
//     for(int i = 1 ; i<=n ; i++){
//  if(n%i==0){
//         count ++;
//       }
//     }
//     cout<<count<<endl;
//     if(count ==2){
//         cout<<"yes the number is prime ";
//     } 
//     else{
//         cout<<"the number is not prime ";
//     }   
//     }
//     int main(){
//         int n ;
//         cin>>n;
//         Factor(n);
//     }



 // using bool 
//     #include <iostream>
// using namespace std ;
// bool Isprime(int  n , int count = 0){ 
//     for(int i = 1 ; i<=n ; i++){
//  if(n%i==0){
//         count ++;
//       }
//     }
//     cout<<count<<endl;
//     return count ==2;
//     }
//     int main(){
//         int n ;
//         cin>>n;
//        bool ans =  Isprime(n);
//        if(ans == true ){
//            cout<<"yes it is prime";
//        }
//        else{
//            cout<<"no it is not prime";
//        }
//     }



// print prime numbers till n 
#include <iostream>
using namespace std ;
bool Prime(int n , int count =0 ){
    for(int i = 1; i<=n ; i++){
        if(n%i==0){
            count ++;
        }
    }
    return count ==2;
    
        
    }
 int main(){
     int n ; 
     cin>>n;  
     for(int i = 1 ; i<=n ; i++){
     if(Prime(i)){
         cout<<i<<" ";
         
     }
     
     }
 }