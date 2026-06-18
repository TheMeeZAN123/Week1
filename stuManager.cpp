#include<iostream>
#include<random>
using namespace std;
class course;
class Student{
    private:
    string name;
    int rollnum;
    course* courses;
    int courses_num;
    int courses_max;
    public:
    Student(string name){
        this->name = name;
        this->rollnum = rand();
        courses_num = 0;
        courses_max = 8;
        this->courses = nullptr;
    }
    Student(){
        this->name = "xyz";
        this->rollnum = 0;
        courses_num = 0;
        courses_max = 0;
        this->courses = nullptr;
    }
    void addCourse(course* Course){
        if(this->courses == nullptr && this->name!="xyz"){
            this->courses = new course[8];
            this->courses[courses_num] = *Course;
            courses_num++;
            Course->addStudent(this);
            return;
        }
        if(courses_num==courses_max){
            course* new_courses = new course[courses_max*2];
            for(int i = 0;i<courses_max;i++)
            {
                new_courses[i] = this->courses[i];
            }
            courses_max *= 2;
            this->courses = new_courses;
        }
        this->courses[courses_num] = *Course;
        this->courses_num++;
        Course->addStudent(this);
        return;
    }
    course* getCourses(){
        return this->courses;
    }
};


class course{
    private:
        string name;
        int course_num;
        int num_students;
        int num_students_max;
        string prof_name;
        Student* students;
    public:
        course(string name, string prof_name){
            this->name = name;
            this->prof_name = prof_name;
            this->course_num = rand();
            this->num_students = 0;
            this->num_students_max = 8;
            this->students = nullptr;
        }
        course(){
            this->name = "none";
            this->prof_name = "none";
            this->course_num = 0;
            this->num_students = 0;
            this->students = nullptr;
            this->num_students_max = 0;
        }
        void addStudent(Student* student){
            if(this->students == nullptr && this->name!="none"){
                this->students = new Student[8];
                this->students[num_students] = *student;
                num_students++;
                return;
            }
            if(num_students==num_students_max){
                Student* new_students = new Student[num_students_max*2];
                for(int i = 0;i<num_students_max;i++)
                {
                    new_students[i] = this->students[i];
                }
                num_students_max *= 2;
                this->students = new_students;
            }
            this->students[num_students] = *student;
            this->num_students++;
            return;
        }
};