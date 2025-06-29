// we'll make one program of each for,while & do-while loop to practice our learnings:

// for loop:
#include<iostream>
using namespace std;

int main(){
    int num=5;
    for (int i=0;i<=num;i++){
        cout<<"Printed through for loop "<<i<<endl;
    }
    return 0;
}
// This will print the number 0 to 5 or till the number given in num...

// while loop:
#include<iostream>
using namespace std;

int main(){
    int i=0;
    while(i<=5){
        cout<<"Printed through while loop "<<i<<endl;
        i=i+1;
    }
}
/*in while loop we only have to write conition in parenthesis
  but in for loop we can write (from where to start;condition;updation)
  also in while loop we have to first create varible i */  

// Do-while loop:
#include<iostream>
using namespace std;

int main(){
    int i=0;
    do{
       cout<<"Printed through do-while loop "<<i<<endl;
       i=i+1;
    } while (i<=5);
    
}
// simply we can say that even if the condition is false
// in the first round of the loop , it will print it once.
// else everything is same as while loop...