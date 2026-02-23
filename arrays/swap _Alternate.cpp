#include <iostream>
using namespace std ;
int main(){
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i]; // taking input 
    }
    for(int i =1 ; i<n ; i+=2){
      swap(arr[i-1], arr[i]); // reverse alternte number logic 
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" "; // printing the modified array
    }
} 