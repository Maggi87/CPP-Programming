#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class Stack
{
	private:
		PNODE head;
	public:
		Stack();
		~Stack();

		void push(int);
		int pop();
		void display();
		int peep();
};