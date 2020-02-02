//Program to count number of characters in a given string
#include <iostream>

int main() {
    char ch[20];
    std::cout << "Enter your name(max. 20):-" << std::endl;
    gets(ch);
    std::cout<<"\n"<<ch;
    int count=0,i=0;
    while(ch[i]!='\0')
    {
        count++;
        i++;
    }
    std::cout<<"\nSize of given String is:-"<<count;
    return 0;
}
