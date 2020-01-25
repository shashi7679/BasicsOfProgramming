#include <iostream>

int main(){
    int a,b,c;
    std::cout<<"Enter a:- ";
    std::cin>>a;
    std::cout<<"Enter b:- ";
    std::cin>>b;
    std::cout<<"Enter c:- ";
    std::cin>>c;
    if(a>b){
       if(a>c){
           std::cout<<"A is greater";
       }
       else{
            std::cout<<"C is greater";
       }
    }
    else if(b>a){
        if(b>c){
            std::cout<<"B is greater";
        }
        else{
            std::cout<<"C is greater";
        }
    }


    return 0;
}
