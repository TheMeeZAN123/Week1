#include "headers/Student.h"
#include "headers/Course.h"
#include<random>
using namespace std;

        Course::Course(string name, string prof_name){
            this->name = name;
            this->prof_name = prof_name;
            this->course_num = rand();
            this->num_students = 0;
            this->num_students_max = 8;
            this->students = nullptr;
        }
        Course::Course(){
            this->name = "none";
            this->prof_name = "none";
            this->course_num = 0;
            this->num_students = 0;
            this->students = nullptr;
            this->num_students_max = 0;
        }
        void Course::addStudent(Student* student){
            if(this->students == nullptr && this->name!="none"){
                this->students = new Student*[8];
                this->students[num_students] = student;
                num_students++;
                return;
            }
            if(num_students==num_students_max){
                Student** new_students = new Student*[num_students_max*2];
                for(int i = 0;i<num_students_max;i++)
                {
                    new_students[i] = this->students[i];
                }
                num_students_max *= 2;
                delete[] students;
                this->students = new_students;
            }
            this->students[num_students] = student;
            this->num_students++;
            return;
        }
        string Course::getName(){
            return this->name;
        }
