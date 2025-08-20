#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    
    Student(string n,int a){
        name = n;
        age = a;
    }
    
};

int main(){
    Student s1("Nipun", 19);
    Student s2(s1);
    
    cout << s1.name<< s1.age <<endl;
    cout << s2.name<< s2.age <<endl;
}