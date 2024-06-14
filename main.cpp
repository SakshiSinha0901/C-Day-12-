#include <iostream>
using namespace std;

int main(){
    char first,last;
    cout<<"Enter your first name following surname:"<<endl;

    first= cin.get();
    cout<<"First :"<<first<<endl;

    cin.ignore(256 ,' ');

    last = cin.get();
    cout<<"Your initials are " <<first<<last<<'\n';
    
    return 0;
}