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
while(true){
    int x;
    cout<<"Enter 1 to add a student, Enter 2 to pull a students records\n";
    cin>>x;
    if(x==1){
        string name;
        string Class;
        cout<<"Enter students name\n";
        cin>>name;
        cout<<"Enter students class\n";
        cin>>Class;
        addStu(name,Class);
        }
    else if(x==2)
    {
        string name;
        cout<<"Enter students name\n";
        cin>>name;
        student* result = findStu(name);
        if(result==nullptr)
        {
            cout<<"Error, Student not found\n";
        }
        else
        {
            cout<<result->Class<<endl<<endl;
        }
    }

}



}