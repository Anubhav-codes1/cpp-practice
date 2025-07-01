// FUNCTIONS: used when we need to perform set of activity again and again. So, we need to create a fun
//            once and just give it value it returns value by itself.

// we can create function either above int main() or after int main().

// fun before uint main():
#include<iostream>
using namespace std;

int sum(int a,int b){     // Here, we made a function called sum having two parameters a and b.
        int c= a+b;       // Here, we shown operation on two of them and putting result in c .
        return c;         // Here, we shown that the fun will return c on giving two int values a & b. 
}
int main(){
    int num1=2,num2=6;
    cout<<"the sum is "<<sum(num1,num2);  // it'll print num1+num2 by assigning the values of num1&num2 as int a and int b
}
// num1 & num2 are known as actual parameters as their values are being used.
// int a & int b are known as formal parameters as they dont have a fixed value.

// we can also write the function below int main() but our comp would be unable to find the 
// sum function so, we would need a prototype of our fun to be put above int main() so that 
// our comp would know there should be any fun named sum and it'll search for it.

// Fun after int main():

#include<iostream>
using namespace std;

int sum(int , int);   // it is our prototype.

int main(){
    int num1=2,num2=6;
    cout<<"the sum is "<<sum(num1,num2);
}
int sum(int a,int b){     //fun after int main().
        int c= a+b;       
        return c;}

// Both of the functions will return same outputs.