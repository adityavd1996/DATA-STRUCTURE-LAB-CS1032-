#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a[10],i,j,min,temp;
cout<<"enter array";
for(i=0;i<6;i++)
{
cin>>a[i];
}
for(i=0;i<5;i++)
{
min=i;
{
for(j=i+1;j<6;j++)
{
if(a[j]<a[min])
{
temp=a[j];
a[j]=a[min];
a[min]=temp;
}
}
}
}
cout<<"after selection sort";
for(i=0;i<6;i++)
{
cout<<a[i]<<" ";
}
getch();
}