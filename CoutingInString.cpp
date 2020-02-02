//Program to count number of comma, whiteSpaces and fullStop in the given String
#include <iostream>

int main() {
    char ch[30];
    std::cout <<"Enter the String(max. 30):-" << std::endl;
    gets(ch);
    int i=0,a=0,b=0,c=0;
    while(ch[i]!='\0')
    {
        if(ch[i]==' ')
            a++;
        if(ch[i]==',')
            b++;
        if(ch[i=='.']){
            c++;
        }

        i++;
    }
    std::cout<<"\n Number of Whitespaces:-"<<a;
    std::cout<<"\n Number of Comma:-"<<b;
    std::cout<<"\n Number of fullStop:-"<<c;

    return 0;
}
