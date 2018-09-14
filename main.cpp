#include <iostream>

class point{
    int x;
public:
    void setX(int peremX){
        x= peremX;
    }
    void print (){
        printf("%d",x);
    }
    int giveX (int perem){
        int a=2*perem;
        return a;
    }
};

int main() {
    //std::cout << "Hello, World!" << std::endl;
   point MyPoint;
   MyPoint.setX(10);
   int a=MyPoint.giveX(10);
   printf("%d\n",a);
   MyPoint.print();
    return 0;
}