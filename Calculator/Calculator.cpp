#include<iostream>
#include<cmath>
using namespace std;
int main(){
    bool invalid = false;
    while(true){
        if(!invalid){
    cout<<"\nWelcome to the calculator\n Enter 1 for addition, 2 for multiplication, 3 for division, 4 for subtraction, 5 for factorial, 6 for square root, or enter 0 to exit\n";}
    int x;
    if(x==5){
        cout<<"Enter the number\n";
        int z;
        cin>>z;
        int result = 1;
        for(int i = 1;i<=z;i++)
        {
            result*=i;
        }
        cout<<result<<endl;
        continue;
    }
    if(x==5){
        cout<<"Enter the number\n";
        float z;
        cin>>z;
        cout<<sqrt(z)<<endl;
    }
    float y,z;
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