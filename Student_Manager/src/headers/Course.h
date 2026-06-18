#ifndef COURSE_H
#define COURSE_H
#include<string>
using namespace std;
class Student;
class Course{
    private:
        string name;
        int course_num;
        int num_students;
        int num_students_max;
        string prof_name;
        Student** students;
    public:
        Course(string name, string prof_name);
        Course();
        void addStudent(Student* student);
        string getName();

};
#endif