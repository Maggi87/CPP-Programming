#include"myheader.h"

Stack::Stack()
{
	head = NULL;
}
void Stack::push(int iValue)
{
	PNODE newn = NULL;

	newn = new NODE;
	newn->data = iValue;
	newn->next = NULL;

	if(head == NULL)
	{
		head = newn;
	}
	else
	{
		newn->next = head;
		head = newn;
	}
}
int Stack::pop()
{
	
	if(head == NULL)
	{
		return -1;
	}
	else
	{
		PNODE temp = head;
		head = head->next;
		int iRet = temp->data;
		delete  temp;
		return iRet;
	}
}
void Stack::display()
{
	PNODE temp = head;

	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
}
int Stack::peep()
{
	if(head == NULL)
	{
		return -1;
	}
	else
	{
		return (head->data);
	}
}
Stack::~Stack()
{
	PNODE temp = head;

	while(head!=NULL)
	{
		head = head->next;
		delete temp;
		temp = head;
	}
}