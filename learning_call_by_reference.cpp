//CALL BY REFERENCE: It is the second method to call any function and done when we want to change 
//                   the value of the actual parameter's outside the function.

#include<iostream>
using namespace std;

void change(int &a){    // here we've used address operator.It changes the actal value of the parameter
    a=a+10;
    cout<<"The value of num inside change fun is "<<a<<endl;
}
int main(){
    int num=5;
    change(num);
    cout<<"The value of num outside change fun is "<<num<<endl;
}
// in the output we can see the value of num has changed even on exiting the change fun.