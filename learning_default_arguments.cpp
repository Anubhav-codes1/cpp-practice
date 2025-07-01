//DEFAULT ARGUMENT: it is used in parameters when we want a parameter to use a default
//                  value when we have not entered any value for it.

#include<iostream>
using namespace std;

int prod(int x, int y=1){    // i,ve selected defualt argument as 1 for y
    return (x*y);
}

int main(){
    int a=5;     
    int b;       //here i haven't entered any value for b.
    cout<<prod(a)<<endl;
}
// as output says it'll take 1 as the defualt value and print 5*1 as 5