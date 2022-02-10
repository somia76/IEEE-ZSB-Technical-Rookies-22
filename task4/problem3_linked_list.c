#include <stdio.h>

 struct Node
{
	int data;
	Node * Next ;
};

static Node * head =NULL;
static Node * current = NULL;


void InsertAtFirst (int value)
{
	//create a node
	Node * temp = (Node *)malloc(sizeof(Node));
	//Update data with input parameter
	temp->data = value;
	//make the next pointer of the allocated node point to the next node
	temp->Next = head ;
	//head = allocated node
	head = temp ;
}

void InsertAtLast (int value)
{
		//create a node
	Node * temp = (Node *)malloc(sizeof(Node));
	//Update data with input parameter
	temp->data = value;
	//make the next pointer of the allocated node point to the next node
	temp->Next = NULL;

	if(head->Next == NULL )
	{
		head = temp ;
	}
	else
	{
		current = head ;
		while(current->Next != NULL)
		{
			current = current->Next ;
		}
	//make the last node point to allocated node
	current->Next = temp ;

	}

}


void DeleteValue (int value )
{
	node * prev = NULL;
	// if the list is empty
   if (head == NULL)
   {
	   printf("the list is empty ");
	}

    //if it is the first node
     else if (head->data == value )
    {
	   current = head ;
	   current = current->Next;
       head = current->Next;
       free(current);
    }
	else
	{
		current = head->Next ;
		prev = head ;

		while(current != NULL)
		{
			if (current->data == value)
			{
				prev->Next = current->Next;
				free(current);
				break;

			}
			prev = current ;
			current=current->next;
		}
	}


}


int main (void)
{
  int n ;
  printf("enter the number of operation : ");
  scanf("%d",&n);

  if (n==1)
  {
      int value ;
    scanf("%d",&value);
    InsertAtFirst (value);
  }

  else if (n==2)
  {
    int value ;
    scanf("%d",&value);
    InsertAtLast (value);
  }

  else if (n==3)
  {
    int value ;
    scanf("%d",&value);
    DeleteValue (value );
  }
  else
  {
    printf("invalid num");
  }
}



