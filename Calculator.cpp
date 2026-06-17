#include<iostream>
using namespace std;
int main(){
    bool invalid = false;
    while(true){
        if(!invalid){
    cout<<"\nWelcome to the calculator\n Enter 1 for addition, 2 for multiplication, 3 for division, 4 for subtraction, 5 for factorial, or enter 0 to exit\n";}
    int x,y,z;
    invalid = false;
    cin>>x;
    if(x==0)
    {
        break;
    }
    if(x==5){
        cout<<"Enter your number\n";
        cin>>y;
        z=1;
        for(int i = 1;i<=y;i++)
        {
            z = z*i;
        }
        cout<<z;
        continue;
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