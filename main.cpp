#include <iostream>

int main() {
    int i=1,sum=0;
    do{
        sum=sum+i;
    }while (i<=10);
    std::cout<<"Sum="<<sum;
    return 0;
}
