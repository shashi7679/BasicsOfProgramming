//Program to find weather the given number is prime or not
#include <iostream>

int main() {
    int num;
    int f=0;
    std::cout << "Enter a number:- " << std::endl;
    std::cin>>num;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0){
            f=1;
            break;
        }
    }
    if(f==1){
        std::cout<<"\nNumber is not a prime";
    }
    else{
        std::cout<<"\nNumber is prime";
    }
    return 0;
}
