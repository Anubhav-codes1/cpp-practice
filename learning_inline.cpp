// INLINE FUN: used when a small and very basic fun is called very frequently for many times.
//             it saves our time and memory by copy pasting the opration where the fun is 
//             called instead of running that fun again and again.

#include<iostream>
using namespace std;
inline int prod(int x,int y){    // Here i've shown how to make inline fun. 
    return x*y;
}
int main(){
    int a=4,b=9;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
    cout<<prod(a,b)<<endl;
}
// as we can see a very basic fun is called many times so i've made an inline fun for it.