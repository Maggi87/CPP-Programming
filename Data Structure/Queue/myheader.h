#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class QUEUE
{
	private:
		PNODE head;
	public:
		QUEUE();
		~QUEUE();

		void enqueue(int);
		int delqueue();
		void display();
	
};