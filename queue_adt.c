#include<stdio.h>
int rear = -1, front = -1, max = 5;
int queue[5];
void enQueue(int ele)
{
	if(rear == max - 1)
	{
		printf("Queue is full\n");
	}
	else
	{
		rear++;
		queue[rear] = ele;
	}
}
void deQueue()
{
	if(rear == front)
	{
		printf("Queue is empty\n");
	}
	else
	{
		front++;
		printf("Element %d is deleted\n",queue[front]);
	}
}
void display()
{
	for(int i= front+1 ; i<=rear; i++)
	{
		printf("%d\t",queue[i]);
	}
	printf("\n");
}
int main()
{
	int choice, x, add;
	printf("Queue\n");
	do{
	printf("1.enQueue\n2.deQueue\n3.Display\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: 
		printf("Enter element:");
		scanf("%d",&add);
		enQueue(add);
		break;
	case 2:
		deQueue();
		break;
	case 3:
		display();
		break;
	default :
		printf("Wrong choice");
		break;
	}
	printf("Enter 1 to continue :");
	scanf("%d",&x);
	}while(x==1);
return 0;
}
		











