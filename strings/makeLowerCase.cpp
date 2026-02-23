#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<ch<<" ";
    }
    else if(ch>='A' && ch<='Z'){
         char ch1= (int)ch+32; // making the capital letter small by adding 32 to it 
        cout<<ch1;
    }
    
    return 0;
}