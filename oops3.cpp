#include<iostream>
#include<string>
using namespace std;
class Student{
    float marks1, marks2, marks3;
    public:
    Student(float m1,float m2, float m3){
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    float calculatetotal(){
        return marks1+marks2+marks3;
    }
    float calculatepercentage(){
        int k = (marks1+marks2+marks3)*100;
        return k/300;
    }
};
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    Student s(n,m,l);
    cout<<"Totalmarks: "<<s.calculatetotal()<<endl;
    cout<<"Totalpercentage: "<<s.calculatepercentage()<<"%"<<endl;
    return 0;
}