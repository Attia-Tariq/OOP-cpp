#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    float marks;
    public:
    void input(){
        cout <<"Enter the name: " << name << endl;
        cout <<"Enter rollno: " << rollno<< endl;
        cout <<"Enter the marks: " << marks << endl;
    }
    void display(){
        cout <<"\n-----Student Record----" << endl;
        cout<<"Name = " << name << endl;
        cout <<"Rollno = " << rollno << endl;
        cout <<"Marks = " << marks << endl;
    }
};
int main() {
    student s1;
    s1.input();
    s1.display();
    return 0;
}

/*
-----------------------------------------------
-----------------------------------------------
Output
-----------------------------------------------
-----------------------------------------------
Enter Name: Attia
Enter Rollno: 1234
Enter Marks: 95.2
------Student Reocord----
Name: Attia
Rollno: 1234
Marks :95.2
*/
