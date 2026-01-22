#include<iostream>
using namespace std;
int main (){
    int length, bredth;
    cin>> length >> bredth;
    int Area = length*bredth;
    int Perimeter = 2*(length+bredth);
    cout<<"Area = " <<Area<<endl;
    cout<<"Perimeter = " <<Perimeter<<endl;
    return 0;
}
