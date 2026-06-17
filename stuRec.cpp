#include<iostream>
using namespace std;
struct student{
    string name;
    string Class;
}typedef student;
int num = 0;

student* students = new student[100];
void addStu(string name,string Class){
    students[num].Class = Class;
    students[num].name = name;
    num++;
}
student* findStu(string name){
    for(int i = 0;i<num;i++)
    {
        if(students[i].name==name){
            student* result = &students[i];
            return result;
        }
    }
    return nullptr;
}
int main(){
addStu("Ali","CE");
student* myStu = findStu("Ali");
if(myStu==nullptr){
    cout<<"ILLE";
    return 0;
}
cout<<myStu->Class;
return 0;



}