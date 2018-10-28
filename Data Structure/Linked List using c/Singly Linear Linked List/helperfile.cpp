#include"myheader.h"

void Display(PNODE head)
{
	printf("\n\n Singly Linear Linked List\n");
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("NULL \n\n");
}

int Count(PNODE head)
{	
	int iCnt = 0;
	while(head!=NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
}

void InsertFirst(PPNODE head,int iValue)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = iValue;
	newn->next = NULL;

	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next = *head;
		*head = newn;
	}
}

void InsertLast(PPNODE head,int iValue)
{
	PNODE newn = NULL;
	PNODE temp = *head;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = iValue;
	newn->next = NULL;

	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}

		temp->next = newn;
	}
}

void InsertAtPos(PPNODE head,int iValue,int iPos)
{ 
	PNODE newn = NULL;
	PNODE temp = *head;

	int iSize = Count(*head);
	int i = 0;

	if((iPos<1)&&(iPos>iSize+1))
	{
		return;
	}

	if(iPos == 1)
	{
		InsertFirst(head,iValue);
	}
	else if(iPos == iSize+1)
	{
		InsertLast(head,iValue);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = iValue;
		newn->next = NULL;

		for(i=1;i<=iPos-2;i++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next = newn;
	}
}

void DeleteFirst(PPNODE head)
{
	PNODE temp = *head;
	if(*head == NULL)
	{
		return;
	}
	else 
	{
		*head = (*head)->next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp = *head;

	if(*head == NULL)
	{
		return;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp = temp -> next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void DeleteAtPos(PPNODE head, int iPos)
{
	PNODE temp1 = *head;
	PNODE temp2 = NULL;

	int i = 0;
	int iSize = Count(*head);

	if((iPos<1)&&(iPos>iSize))
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst(head);
	}
	else if(iPos == iSize)
	{
		DeleteLast(head);
	}
	else
	{
		for(i=1;i<=iPos-2;i++)
		{
			temp1 = temp1->next;
		}

		temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
	}
}