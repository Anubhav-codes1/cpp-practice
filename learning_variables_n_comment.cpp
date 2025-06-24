// we'll make a program in which we'll put variables:

#include <iostream>
    int sum1=52;
    int sum2=611;
    int main(){
        std::cout<<"sum is "<<sum1+sum2;
        return 0;
}
// here line 4 and 5 are global variables as they are before int main()..

// what if a program have same local variable name as a global variable name:


# include <iostream>
char glo='A';
int main()
{
    glo='D';
    std::cout<<glo;
    return 0;}
// we'll see that the local variable has got more priority and it'll print 'D' not 'A'