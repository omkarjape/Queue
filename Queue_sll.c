#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *rear = NULL,*front=NULL,  *newnode;
struct node *temp;
int max = 5, count = 0;

void enQueue()
{
	if(count == max){
		printf("Queue is full");
	}
	else{
	newnode = malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&newnode->data);
	if(rear == NULL)
	{
		front = newnode;
		rear = newnode;
		newnode->next = NULL;
	}else
	{
		temp = front;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		rear = newnode;
		newnode->next = NULL;
	}
	count++;
	}
}

void deQueue()
{
	if(front == NULL)
	{
		printf("Queue is Empty\n");
	}else
	{
		temp = front;
		front = front->next;
		temp->next = NULL;
		free(temp);
	}
}

void display()
{
	if(front == NULL){
		printf("Queue is Empty\n");
	}
	else{
	printf("|start position|\t");
	temp = front;
	while(temp!=rear)
	{
		printf("%d\t",temp->data);
		temp = temp->next;
	}
	printf("%d\n",rear->data);
	}
}

int main()
{
	int choice;
	printf("Queue\n");
	do{
	printf("1.enQueue\n2.deQueue\n3.Display\n4.Exit\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		enQueue();
		break;
	case 2:
		deQueue();
		break;
	case 3:
		display();
		break;
	case 4:
		printf("Thank you\n");
		break;
	default :
		printf("Wrong choice\n");
		break;
	}
	}while(choice!=4);
return 0;
}
