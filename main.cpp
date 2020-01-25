#include <iostream>

int main() {
    float l,w;
    int ch;
    std::cout<<"Enter the length of the rectangle:-";
    std::cin>>l;
    std::cout<<"Enter the width of rectangle:-";
    std::cin>>w;
    std::cout<<"1.Area";
    std::cout<<"\n2.Perimeter";
    std::cout<<"Choose an option:-";
    std::cin>>ch;
    if(ch==1){
        float area;
        area=l*w;
        std::cout<<"\nArea is :-"<<area;
    }
    else if(ch==2){
        float peri;
        peri=2*(l+w);
        std::cout<<"Perimeter:- "<<peri;
    }
    else{
        std::cout<<"Invalid input!!!!";
    }

    return 0;
}
