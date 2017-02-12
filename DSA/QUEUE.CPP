#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class queue
{
clrscr();
int a[10],i,j,top,rear;
public:
void display();
queue()
{
top=rear=-1;
}
void push(int j)
{
if(top>9)
{
cout<<"stack full";
}
else
{
top++;
a[top]=j;
}
}
void pop()
{
if(top<0)
{
cout<<"stack empty";
}
else
{
rear++;
cout<<"element popped";
}
}
};
void queue::display()
{
for(i=rear+1;i<=top;i++)
{
cout<<a[i]<<" ";
}
}
void main()
{
clrscr();
queue q;
int ch,l;
while(1)
{
cout<<"enter choice"<<"1. push"<<endl<<"2. pop"<<endl<<"3. display"<<endl<<"4. exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"enter no. to push";
cin>>l;
q.push(l);
break;
case 2:
q.pop();
break;
case 3:
q.display();
break;
case 4:
exit(1);
break;
default :
cout<<"no element found";
break;
}
}
getch();
}