#include<iostream>
#include"teacher.h"
#include"student.h"

class teacherAssistance: public teacher,public student {
    public:
    void print(){
        std::cout<<"TA print"<<std::endl;
    }
};

int main(){
    teacherAssistance a;

    a.student::print(); //  explicity mentioned whic classs.
    a.print(); // print function of ta class.

}
