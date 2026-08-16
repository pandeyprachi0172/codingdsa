#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age ,roll_number;
    string grade;
};


int main(){
    Student S1;
    S1.name="Rohit";
    S1.age=10;
    S1.roll_number=21;
    S1.grade="A+";
    cout<<S1.age<< " ";

    Student S2 ;
    S2.name="Mohit";
    S2.age=11;
    S2.grade="b+";
    cout <<S2.name<< "";
    


}