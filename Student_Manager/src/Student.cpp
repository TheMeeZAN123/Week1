#include "headers/Course.h"
#include<random>
#include "headers/Student.h"
using namespace std;

    Student::Student(string name){
        this->name = name;
        this->rollnum = rand();
        courses_num = 0;
        courses_max = 8;
        this->courses = nullptr;
    }
    Student::Student(){
        this->name = "xyz";
        this->rollnum = 0;
        courses_num = 0;
        courses_max = 0;
        this->courses = nullptr;
    }
    void Student::addCourse(Course* course){
        if(this->courses == nullptr && this->name!="xyz"){
            this->courses = new Course*[8];
            this->courses[courses_num] = course;
            courses_num++;
            course->addStudent(this);
            return;
        }
        if(courses_num==courses_max){
            Course** new_courses = new Course*[courses_max*2];
            for(int i = 0;i<courses_max;i++)
            {
                new_courses[i] = this->courses[i];
            }
            courses_max *= 2;
            delete[] courses;
            this->courses = new_courses;
        }
        this->courses[courses_num] = course;
        this->courses_num++;
        course->addStudent(this);
        return;
    }
    Course** Student::getCourses(){
        return this->courses;
    }

