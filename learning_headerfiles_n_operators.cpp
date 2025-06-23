// #include <iostream>
// #include "hey.h"
// // here hey.h is a user defined header files & .h is used as a standard to tell it is a header file
// // you must have the same file present and named as the header file...
// using namespace std;
// int main(){
//     cout<<"hey";
//     return 0;
// }

// now we will use and print each and every operator used frequently in cpp:

#include <iostream>
using namespace std;
int main(){
    int a=12,b=6;
    // use of arithmetic operators:
    cout<<"the result of operator a+b is:"<<(a+b)<<endl;
    cout<<"the result of operator a-b is:"<<(a-b)<<endl;
    cout<<"the result of operator a*b is:"<<(a*b)<<endl;
    cout<<"the result of operator a/b is:"<<(a/b)<<endl;
    cout<<"the result of operator a++ is:"<<(a++)<<endl;
    cout<<"the result of operator a-- is:"<<(a--)<<endl;
    cout<<"the result of operator ++a is:"<<(++a)<<endl;
    cout<<"the result of operator --a is:"<<(--a)<<endl;


    // use of comparison operators:
    cout<<"the result of operator a<b is:"<<(a<b)<<endl;
    cout<<"the result of operator a>b is:"<<(a>b)<<endl;
    cout<<"the result of operator a==b is:"<<(a==b)<<endl;
    cout<<"the result of operator a!=b is:"<<(a!=b)<<endl;
    // it gives result in form of 0 and 1 where 0=false and 1=true...

    // use of logical operators:
    cout<<"the result of operator a>b  && (a>=b)is:"<<((a==b)&&(a>=b))<<endl;
    cout<<"the result of operator a>b is:"<<((a>=b) || (a<b))<<endl;
    cout<<"the result of operator !(a>b) is:"<<!(a>b)<<endl;
    // it also gives result in 0 and 1...
}