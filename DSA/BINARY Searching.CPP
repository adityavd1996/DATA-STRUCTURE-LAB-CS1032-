#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{ clrscr();
int i,j,first=0,last=5,a[6],middle;
cout<<"enter data";
for(i=0;i<6;i++)
{
cin>>a[i];
}cout<<"enter no.";cin>>j;
middle=(first+last)/2;
while(first<=last)
{
  if(a[middle]==j)
 {
   cout<<"no. found at"<<middle+1;
   break;
  }
 else if(a[middle]>j)
{
 last=middle-1;
}
else
{
 first=middle+1;
}
middle=(first+last)/2;
}
 if(first>last) {cout<<"no. not found";}
getch();
}