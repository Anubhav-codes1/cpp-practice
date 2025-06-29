// UNION: another type of datatype used to store different types of variables in it
//        but use only one at a time, this helps in memory management.

#include<iostream>
using namespace std;

int main(){
    union bike{
        char brand;
        float price;
        int serialno;
    };
    union bike spleondor;
    spleondor.brand='h'; // if we put more than one variable here it'll show either an error or inaccurate data
    cout<<spleondor.brand<<endl;
// ENUM: this datatype stores different values and gives them index numbers if we print that value it'll print the index no.    
    enum boys {abhi,suraj,raj,anuj,virat,sushant,rahul,ravi,verma};
    cout<<abhi<<endl;
    // we can also put a value in another variable and then print it:
    boys b1= anuj;
    cout<<b1<<endl;
}   