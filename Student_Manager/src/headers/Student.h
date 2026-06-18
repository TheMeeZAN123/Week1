#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;
class Course;
class Student{
    private:
        string name;
        int rollnum;
        Course** courses;
        int courses_num;
        int courses_max;
    public:
    Student(string name);
    Student();
    void addCourse(Course* course);
    Course** getCourses();
};
#endif