#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node*next;
	node()
	{
		data=0;
		next=NULL;
	}
};
int main()
{
   node*newnode1 =new node;
   newnode1->data = 10;
   node*newnode2 = new node;
   newnode1->data =20;
   
   cout<<"Data "<< newnode1->data <<"selfAdress"<<newnode1<<"nextAdress"<<newnode1->next <<endl;
   cout<<"Data "<< newnode2->data <<"selfAdress"<<newnode1<<"nextAdress"<<newnode2->next <<endl;
   
   return 0;
      
}
