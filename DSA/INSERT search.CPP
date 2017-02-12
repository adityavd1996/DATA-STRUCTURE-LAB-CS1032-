#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a[10],i,j,key;
cout<<"enter array";
for(i=0;i<6;i++)
{
cin>>a[i];
}
for(i=1;i<6;i++)
{
for(j=i;j>=1;j--)
{
if(a[j]<a[j-1])
{
key=a[j];
a[j]=a[j-1];
a[j-1]=key;
}
else
break;
}
}
for(i=0;i<6;i++)
{
cout<<a[i]<<" ";
}
getch();
}
