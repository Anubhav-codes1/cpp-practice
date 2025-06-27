// we'll learn use manipulators in a cpp code:

#include<iostream>
#include<iomanip> //it is the practical us of headerfile , this is a built-in headerfile having different printing options... 
using namespace std;

int main(){
    cout<<setw(5)<<"*"<<endl;  //it'll print * with 4 spaces as width is set at 5
    return 0;
}