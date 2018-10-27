#include"myheader.h"

QUEUE::QUEUE()
{
	head = NULL;
}
void QUEUE::enqueue(int iValue)
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
		PNODE temp = head;

		while(temp->next!=NULL)
		{
			temp = temp->next;
		}

		temp->next = newn;
			
	}
}
int QUEUE::delqueue()
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
void QUEUE::display()
{
	PNODE temp = head;

	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
}

QUEUE::~QUEUE()
{
	PNODE temp = head;

	while(head!=NULL)
	{
		head = head->next;
		delete temp;
		temp = head;
	}
}