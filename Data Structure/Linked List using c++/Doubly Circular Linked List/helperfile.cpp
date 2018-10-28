#include"myheader.h"

Doubly_Circular :: Doubly_Circular()
{
	head = NULL;
	tail = NULL;
	iSize = 0;
}
Doubly_Circular :: ~Doubly_Circular()
{
	PNODE temp = head;

	for(int i=1;i<=iSize;i++)
	{
		head = head->next;
		delete temp;
		temp = head;
	}
}
int Doubly_Circular ::Count()
{
	return iSize;
}
void Doubly_Circular::Displayf()
{
	PNODE temp = head;

	if((head == NULL)&&(tail == NULL)&&(iSize == 0))
	{
		return;
	}
	else
	{
		do
		{
			cout<<temp->data<<"\t";
			temp = temp->next;
		}while(temp!=tail->next);
	}
}
void Doubly_Circular::Displayb()
{
	
	if((head == NULL)&&(tail == NULL)&&(iSize == 0))
	{
		return;
	}
	else
	{
		do
		{
			cout<<tail->data<<"\t";
			tail = tail->prev;
		}while(tail!=head->prev);
	}
}
void Doubly_Circular :: InsertFirst(int iValue)
{
	PNODE newn = NULL;
	newn = new NODE;

	newn->data = iValue;
	newn->next = NULL;
	newn->prev = NULL;

	if((head == NULL)&&(tail == NULL)&&(iSize == 0))
	{
		head = newn;
		tail = newn;
	}
	else
	{
		newn->next = head;
		head->prev = newn;
		head = newn;
	}
	tail->next = head;
	head->prev = tail;
	iSize++;
}

void Doubly_Circular :: InsertLast(int iValue)
{
	PNODE newn = NULL;
	newn = new NODE;

	newn->data = iValue;
	newn->next = NULL;
	newn->prev = NULL;

	if((head == NULL)&&(tail == NULL)&&(iSize == 0))
	{
		head = newn;
		tail = newn;
	}
	else
	{
		tail->next = newn;
		newn->prev = tail;
		tail = newn;
	}
	tail->next = head;
	head->prev = tail;
	iSize++;
}

void Doubly_Circular :: InsertAtPos(int iValue,int iPos)
{
	if((iPos<1)||(iPos>iSize+1))
	{
		return;
	}

	if(iPos == 1)
	{
		InsertFirst(iValue);
	}
	else if(iPos == iSize+1)
	{
		InsertLast(iValue);
	}
	else
	{
		PNODE temp = head;
		PNODE newn = NULL;
		newn = new NODE;

		newn->data = iValue;
		newn->next = NULL;
		newn->prev = NULL;

		for(int i=1;i<=iPos-2;i++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
		iSize++;
	}
}

void Doubly_Circular::DeleteFirst()
{
	if((head == NULL)&&(tail==NULL)&&(iSize == 0))
	{
		return;
	}
	else if(head == tail)
	{
		delete head;
		head = NULL;
		tail = NULL;
	}
	else
	{
		head = head->next;
		delete tail->next;
		tail->next = head;
		head->prev = tail;
	}
	iSize--;
}

void Doubly_Circular::DeleteLast()
{
	if((head == NULL)&&(tail==NULL)&&(iSize == 0))
	{
		return;
	}
	else if(head == tail)
	{
		delete head;
		head = NULL;
		tail = NULL;
	}
	else
	{
		tail = tail->prev;
		delete head->prev;
		tail->next = head;
		head->prev = tail;
	}
	iSize--;
}

void Doubly_Circular::DeleteAtPos(int iPos)
{
	if((iPos<1)||(iPos>iSize))
	{
		return;
	}
	else if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == iSize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = head;
		for(int i=1;i<=iPos-2;i++)
		{
			temp = temp->next;
		}

		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
		iSize--;
	}
}