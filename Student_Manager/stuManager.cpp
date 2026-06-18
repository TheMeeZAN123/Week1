#include<iostream>
#include<random>
#include "src/Student.cpp"
#include "src/Course.cpp"
using namespace std;

int main() {
    Student s1("Ali");
    Course c1("OOP", "Dr Ahmed");

    s1.addCourse(&c1);
    cout<<s1.getCourses()[0]->getName();
    return 0;
}