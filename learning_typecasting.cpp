//making a program that will teach us to assign the  value of one varible to another:
#include <iostream>
using namespace std;
int main(){
    int a=12;
    int & c=a; //giving the value of variable a into variable c...
    int b=a;  //giving the value of variable a into variable b,by another method...
    int d= int(a); //giving the value of variable a into variable d,by another method...
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;//all will print the same value...
}

//type casting:

#include <iostream>
using namespace std;
int main(){
    int a=54;
    float b=46.007;
    int c=a+b;
    cout<<int(c)<<endl;
    cout<<float(c)<<endl;//typecasting int into float...
    cout<<int(b)<<endl;//typecasting float into int...
    return 0; 
}