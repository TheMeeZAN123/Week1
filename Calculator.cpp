#include<iostream>
using namespace std;
int main(){
    bool invalid = false;
    while(true){
        if(!invalid){
    cout<<"\nWelcome to the calculator\n Enter 1 for addition, 2 for multiplication, 3 for division, 4 for subtraction, or enter 0 to exit\n";}
    int x,y,z;
    invalid = false;
    cin>>x;
    if(x==0)
    {
        break;
    }
    cout<<"Enter both numbers\n";
    cin>>y;
    cin>>z;
    if(x==1){
        cout<<y+z<<endl;

    }
    else if(x==2){
        cout<<z*y<<endl;
        
    }
    else if(x==3){
        cout<<y/z<<endl;
        
    }
    else if(x==4)
    {
        cout<<y-z<<endl;
        
    }

    else
    {
        cout<<"enter a valid operation\n";
        invalid = true;
        continue;
    }
}


return 0;
}