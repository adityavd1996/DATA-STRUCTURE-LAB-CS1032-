#include<iostream.h>
#include<conio.h>
#include<process.h>
class slink
{
private:
struct node
{
int data;
node*next;
}*head;
public:
slink()
{
head=NULL;
}
void create();
void insert();
void delnode();
void display();
};
void slink::create()
{
head=new node;
cout<<"Enter the data for the node:";
cin>>head->data;
head->next=NULL;
}
void slink::insert()
{
int n;
char p;
node*list,*prev,*temp;
list=head;
cout<<"Insert node at f/m/l:"<<endl;
cin>>p;
if(p=='f')
{
temp=new node;
cout<<"Enter the data for the node:";
cin>>temp->data;
temp->next=head;
head=temp;
}
if(p=='m')
{
cout<<"Enter the data for the new node before:"<<endl;
cin>>n;
while(list->data!=n)
{
prev=list;
list=list->next;
}
temp=new node;
cout<<"Enter the data for the node:";
cin>>temp->data;
prev->next=temp;
temp->next=list;
}
if(p=='l')
{
while(list->next!=NULL)
list=list->next;
temp=new node;
cout<<"Enter the data for the node:";
cin>>temp->data;
temp->next=NULL;
list->next=temp;
}
}
void slink::delnode()
{
int n,p=0;
node *list,*prev,*temp;
list=head;
cout<<"Enter the data for the node to be deleted:";
cin>>n;
if(head->data==n)
{
head=head->next;
p=1;
}
else
{
while((list->next!=NULL)&&(list->data!=n))
{
prev=list;
list=list->next;
}
if((list->next!=NULL)&&(list->data==n))
{
temp=list;
prev->next=NULL;
p=1;
}
else if(list->data==n)
{
temp=list;
prev->next=list->next;
p=1;
}
delete(temp);
}
if(p==0)
{
cout<<"Node is not present";
}
}
void slink::display()
{
node*list;
list=head;
if(list==NULL)
cout<<"List is empty";
else
{
cout<<"The list is: ";
while(list!=NULL)
{
cout<<list->data<<"<==>";
list=list->next;
}
cout<<"NULL";
}
getch();
}
void main()
{
int option;
slink s;
while(option!=5)
{
clrscr();
cout<<"1.Create."<<endl;
cout<<"2.Insert."<<endl;
cout<<"3.Delete."<<endl;
cout<<"4.Display."<<endl;
cout<<"5.Exit."<<endl;
cout<<"Enter your option:";
cin>>option;
switch(option)
{
case 1:
s.create();
break;
case 2:
s.insert();
break;
case 3:
s.delnode();
break;
case 4:
s.display();
break;
case 5:
break;
}
}
}