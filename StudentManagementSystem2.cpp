#include <iostream>
using namespace std;
class student{
    private:
    string name ;
    float marks;
    int rollno;
    public:
    void input(){
cout <<"Name = " << name << endl;
cout <<"Rollno = " << rollno<< endl;
cout <<"Marks = " << marks << endl;
    }
    void display(){
        cout <<"\n-----Student Record-----" << endl;
        cout <<"Name = " << name << endl;
cout <<"Rollno = " << rollno<< endl;
cout <<"Marks = " << marks << endl;
    }
};
int main() {
    student s1[3];
    for(int i =0; i<3; i++){
        cout<<"\nstudent Record" << i+1 <<endl;
        s1[i].input();
    }
for(int i =0; i<3 ;i++){
    s1[i].display();
}
    return 0;
}
