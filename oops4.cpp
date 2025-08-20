#include<iostream>
#include<string>
using namespace std;
class Point{
    int x;
    int y;
    public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    void display(){
        cout<<"x = "<<x<<",y= "<<y<<endl;
    }

};
int main(){
    Point p1(10,20);
    Point p2(p1);
    p1.display();
    p2.display();
}