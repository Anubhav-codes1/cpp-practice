// we'll learn to use if-else statement in a cpp code:

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age<18){
        cout<<"oops! you are not invited to this party..."<<endl;
    }
    else{
        cout<<"congrats! you are invited to this party..."<<endl;
    }
}
// EXPLAINATION: this is a program that'll ask user's age and if user is
//               older than 18 it'll tell them they are invited to the party
//               else it'll tell them they aren't invited to te party...