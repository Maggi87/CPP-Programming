#include"myheader.h"

void Displayf(PNODE head)
{
	printf("\n\n Forword Direction\n");
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("NULL \n\n");
}

void Displayb(PNODE head)
{

	printf("\n\nBackword Direction \n");
	while(head->next!=NULL)
	{
		head = head->next;
	}

	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head = head->prev;
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
	newn->prev = NULL;

	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next = *head;
		(*head)->prev = newn;
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
	newn->prev = NULL;

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
		newn->prev = temp;
	}
}

void InsertAtPos(PPNODE head,int iValue,int iPos)
{ 
	PNODE newn = NULL;
	PNODE temp = *head;

	int i = 0;
	int iSize = Count(*head);

	if((iPos<1)&&(iPos+1))
	{
		return;
	}
	else if(iPos == 1)
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
		newn->prev = NULL;

		for(i=1;i<=iPos-2;i++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next = newn;
		newn->next->prev = newn;
		newn->prev = temp;
	}
}

void DeleteFirst(PPNODE head)
{
	if(*head == NULL)
	{
		return;
	}
	else if((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
	}	
}

void DeleteLast(PPNODE head)
{
	PNODE temp = *head;
	if(*head == NULL)
	{
		return;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp = temp->next;
		}

		free(temp->next);
		temp->next = NULL;
	}
}

void DeleteAtPos(PPNODE head, int iPos)
{
	PNODE temp = *head;
	int i = 0;
	int iSize = Count(*head);

	if((iPos<1)&&(iPos>iSize))
	{
		return;
	}
	else if(iPos == 1)
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
			temp = temp -> next;
		}

		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}
}