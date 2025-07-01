// CALL BY VALUE: when we make any function we have two ways to call it either by call by value 
//                or by call by reference.We use call by value when we dont want the original 
//                value of the parameter to change OR there will be no change in the actual para-
//                -meter outside the function.

#include<iostream>
using namespace std;

void change(int a){
    a=a+10;
    cout<<"The value of num inside change fun is "<<a<<endl;
}
int main(){
    int num=5;
    change(num);
    cout<<"The value of num outside change fun is "<<num<<endl;
}
// in the output we can see there is no change in the num on exiting the change fun.