//Program to split the digits
#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number(3 digit only)";
    std::cin>>num;
    int a,b,c,d;
    a=num/100;
    b=num%100;
    c=b/10;
    d=b%10;
    std::cout<<"\n At Ones Place we have:-"<<d;
    std::cout<<"\n At tens place we have:-"<<c;
    std::cout<<"\n At hunderdth place we have:-"<<a;
    return 0;
}
