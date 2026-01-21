#include<iostream>
using namespace std;

int main (){
    int M, N;
    cin >> N>> M ;
    if(M%N==0){
        cout<< "Yes" << endl;
    }
    else{
        cout<<"No";
    }
    return 0;
}