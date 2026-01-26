#include <iostream>
using namespace std ;
int main (){
    long long num, n , pow;
    cin>>n>>pow;
    num = n;
    if(pow==0){
        num = 1;
    }
    for(int i = 1 ; i<pow ; i++){
        num = num*n;
    }
    cout<<num;
}