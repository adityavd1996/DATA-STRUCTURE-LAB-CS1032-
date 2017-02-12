#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
class stack1
{int top,i,a[10],x,y;
public:
void display();
stack1(){
top=-1;
}
void push(int x)
{
if(top==10)
{
cout<<"Stack Full";
}
else{
top++;
a[top]=x;
cout<<"element inserted";
}
}
void pop()
{
if(top==-1)
{
cout<<"stacks empty";
}
else
{
top--;
cout<<"element popped";
}
}
};
void stack1::display()
{
cout<<"elements in stack are:";
for(i=0;i<=top;i++)
cout<<a[i]<<" ";
}
void main()
{
clrscr();
stack1 s;
int ch,b;
cout<<"enter a choice"<<endl<<"1.push"<<endl<<"2. pop"<<endl<<"3. display"<<endl<<"4.exit";
while(1){
cin>>ch;
switch(ch)
{
case 1:
cout<<"enter push no.";
cin>>b;
s.push(b);
break;
case 2:
s.pop();
break;
case 3:
s.display();
break;
case 4:
exit(1);
break;
default :
cout<<"no option";
break;
}
}
getch();
}