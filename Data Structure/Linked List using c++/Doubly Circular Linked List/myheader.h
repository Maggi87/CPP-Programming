#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next,*prev;
}NODE, *PNODE;

class Doubly_Circular
{
	private:
		PNODE head, tail;
		int iSize;

	public:
		Doubly_Circular();
		~Doubly_Circular();

		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);

		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);

		void Displayf();
		void Displayb();

		int Count();
};