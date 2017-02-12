#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{   clrscr();
int i,j,a[6],m=0;    cout<<"enter array";
for(i=0;i<6;i++)
{
cin>>a[i];
} cout<<"enter no.";cin>>j;
for(i=0;i<6;i++)
{
if(a[i]==j)
{
cout<<"no. found at"<<i+1;
}else m++;
}
if(m==6)
{
cout<<"no. not found";
}
getch();
}