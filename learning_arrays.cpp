//ARRAYS:a kind of datatype used to store multiple data of same datatype.

#include<iostream>
using namespace std;

int main(){
    int rollno[]={21,56,87,90,58,45,17,95,33,67};
    //we can store as much data as we want to
    //the data stored in the array is indexed from 0
    //to print:
    cout<<rollno[0]<<endl; //or we can use for loop:
    for(int i=0;i<10;i++){
        cout<<rollno[i]<<endl;
    }
    // we can also update any value by doing:
    rollno[4]=39;
    cout<<rollno[4];
    // we can also use pointers in arrays:
    int*p=rollno; //the values stored in arrays are in the form of address only so we don't use & operator.
    cout<<p<<endl; // it'll print the address of rollno variable.
    cout<<*p<<endl; //we can also use dereference operator.*p for index 0 *(p+1)for index 1 and so on.
    cout<<*(p+4)<<endl; //it'll print value of index 4
}