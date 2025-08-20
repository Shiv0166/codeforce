#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    double length;
    double width;
    public:
    Rectangle(double len, double wid){
        length = len;
        width = wid;
    }
    double calculatearea(){
        return length*width;
    }
    double calculateperimeter(){
        return 2*(length+width);
    }
};
int main(){
    Rectangle r(8,9);
    cout<<"Area is: "<<r.calculatearea()<<endl;
    cout<<"Perimeter is: "<<r.calculateperimeter();
}