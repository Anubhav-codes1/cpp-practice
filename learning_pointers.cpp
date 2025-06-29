// we'll learn and make simple programes showcasing use of pointers:
// POINTERS= kind of datatype which stores address of any variable.

#include<iostream>
using namespace std;

int main(){
    int a=7;
    int*b=&a; //& is the operator used to find address of a variable and *b is the pointer variable
    cout<<"Address of variable a is "<<&a<<endl;
    cout<<"Address of variable a is "<<b<<endl;
    //to find the value of address:
    cout<<"value of address in b is "<<*b<<endl;
    //* is called deference operator used to find value of address.
}