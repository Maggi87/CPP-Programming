#include"myheader.h"

int main()
{
	BOOL Running = TRUE;
	int iChoice = 0;
	
	printf("\n-- Singly Linear Linked List --\n");
	while(Running)
	{
        PNODE first = NULL;
		int iRet = 0;
		int iPos = 0; 

        printf("\n1: Insert First\t 2: Insert Last 3: Insert At Pos 4: DeleteFirst 5: DeleteLast 6: Delete At Pos\n");
		
		InsertFirst(&first,11);
        InsertFirst(&first,12);
        InsertFirst(&first,13);
        InsertFirst(&first,14);      
        
        printf("\nEnter the Choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 1:				                
                Displayf(first);
				Displayb(first);
				break;

			 case 2:
                InsertLast(&first,15);
                InsertLast(&first,16);
				Displayf(first);
				Displayb(first);	
				iRet = Count(first);
				printf("Number of Node are %d \t",iRet);		
				break;

			case 3:
				
				printf("Enter the Position");
				scanf("%d",&iPos);

				InsertAtPos(&first,101,iPos);
				Displayf(first);
				Displayb(first);
		 	    break;

			case 4:
				DeleteFirst(&first);
				Displayf(first);
				Displayb(first);
				break;

			case 5:
				DeleteLast(&first);
				Displayf(first);
				Displayb(first);
				break;	

			case 6:
			   
				printf("Enter the Position");
				scanf("%d",&iPos);

				DeleteAtPos(&first,iPos);
				Displayf(first);
				Displayb(first);
				break;
			case 0:
				Running = FALSE;
				break;

			default:
				printf("Wrong choice\n");
				break;
		}
	}
	printf("\nTerminating Pattern prinnting Application....\n");
	return 0;
}