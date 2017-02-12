#include <iostream.h>
#include <stdio.h>
#include<conio.h>
#include <string.h>

class Dllist
{
   private:
       typedef struct Node
       {
	  string name;
	  Node* next;
	  Node* prev;
       };
       Node* head;
       Node* last;
   public:
       Dllist()
       {
	 head = NULL;
	 last = NULL;
       }
       bool empty() const { return head==NULL; }
       friend ostream& operator<<(ostream& ,const Dllist& );
       void Insert(const string& );
       void Remove(const string& );
};

void Dllist::Insert(const string& s)
{
    // Insertion into an Empty List.
    if(empty())
    {
       Node* temp = new Node;
       head = temp;
       last = temp;
       temp->prev = NULL;
       temp->next = NULL;
       temp->name = s;
    }
    else
    {
       Node* curr;
       curr = head;
       while( s>curr->name && curr->next != last->next) curr = curr->next;

       if(curr == head)
       {
	 Node* temp = new Node;
	 temp->name = s;
	 temp->prev = curr;
	 temp->next = NULL;
	 head->next = temp;
	 last = temp;
      //  cout<<" Inserted "<<s<<" After "<<curr->name<<endl;
       }
       else
       {
       if(curr == last && s>last->name)
       {
	 last->next = new Node;
	 (last->next)->prev = last;
	 last = last->next;
	 last->next = NULL;
	 last->name = s;
      //  cout<<" Added "<<s<<" at the end "<<endl;
       }
       else
       {
	 Node* temp = new Node;
	 temp->name = s;
	 temp->next = curr;
	 (curr->prev)->next = temp;
	 temp->prev = curr->prev;
	 curr->prev = temp;
      //  cout<<" Inserted "<<s<<" Before "<<curr->name<<endl;
       }
      }
    }
}

ostream& operator<<(ostream& ostr, const Dllist& dl )
{
    if(dl.empty()) ostr<<" The list is empty. "<<endl;
    else
    {
	Dllist::Node* curr;
	for(curr = dl.head; curr != dl.last->next; curr=curr->next)
	  ostr<<curr->name<<" ";
	ostr<<endl;
	ostr<<endl;
	return ostr;
    }
}

void Dllist::Remove(const string& s)
{
    bool found = false;
    if(empty())
    {
      cout<<" This is an empty list! "<<endl;
      return;
    }
    else
    {
      Node* curr;
      for(curr = head; curr != last->next; curr = curr->next)
      {
	  if(curr->name == s)
	  {
	     found = true;
	     break;
	  }
      }
      if(found == false)
      {
       cout<<" The list does not contain specified Node"<<endl;
       return;
      }
      else
      {
	 // Curr points to the node to be removed.
	 if (curr == head && found)
	 {
	   if(curr->next != NULL)
	   {
	    head = curr->next;
	    delete curr;
	    return;
	   }
	   else
	   {
	    delete curr;
	    head = NULL;
	    last = NULL;
	    return;
	   }
	 }
	if (curr == last && found)
	{
	 last = curr->prev;
	 delete curr;
	 return;
	}
       (curr->prev)->next = curr->next;
       (curr->next)->prev = curr->prev;
	delete curr;
     }
  }
}

int main()
{
    Dllist d1;
    int ch;
    string temp;
    while(1)
    {
       cout<<endl;
       cout<<" Doubly Linked List Operations "<<endl;
       cout<<" ------------------------------"<<endl;
       cout<<" 1. Insertion "<<endl;
       cout<<" 2. Deletion "<<endl;
       cout<<" 3. Display "<<endl;
       cout<<" 4. Exit "<<endl;
       cout<<" Enter your choice : ";
       cin>>ch;
       switch(ch)
       {
	  case 1: cout<<" Enter Name to be inserted : ";
		  cin>>temp;
		  d1.Insert(temp);
		  break;
	  case 2: cout<<" Enter Name to be deleted : ";
		  cin>>temp;
		  d1.Remove(temp);
		  break;
	  case 3: cout<<" The List contains : ";
		  cout<<d1;
		  break;
	  case 4: system("pause");
		  return 0;
		  break;
       }
    }