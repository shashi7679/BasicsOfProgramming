//Program using array
#include <iostream>

int main() {
    int a[10];
    for(int i=1;i<11;i++)
    {
        a[i-1]=10*i;
    }
    for(int i=0;i<10;i++)
    {
        std::cout<<"\n "<<a[i];
    }
    return 0;
}
