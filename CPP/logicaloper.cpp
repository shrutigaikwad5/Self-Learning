#include<iostream>
using namespace std;

//Implement logical urnary ternary assignment operator
int main()
{
    
int a = 3;
int b = 5;
    
//Unary Operator
cout<<"Unary Operators:"<<endl;
cout<<"++a"<<++a<<endl;
cout<<"--b"<<--b<<endl;

// Logical Operators
cout<<"\nLogical Operators:"<<endl;
cout<<"(a>b)"<<(a>b)<<endl;
cout<<"(a<b) && (b>0) ="<<((a<b)&&(b>0))<<endl;
cout<<"!(a==b)="<<!(a==b)<<endl;

//Assignment Operators


cout<<"\nAssignment Operators:"<<endl;

int x = 30;
cout<<"x= "<<x<<endl;

 x+= 10;
cout<<"x+=30 is "<<x<<endl;

 x-=20;
cout<<"x-=20 is"<< x<<endl;

 x*=20;
cout<<"x-=20 is"<<x<<endl;

 x/=20;
cout<<"x/=20 is"<<x<<endl;

cout<<"Ternary Operator"<<endl;

cout<<"Enter two Nos."<<endl;
cin>>a>>b;

int max = (a>b)?a:b;

cout<<"The Nos. is:"<<max<<endl;

return 0;
}
