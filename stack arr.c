int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	//clrscr();
	top=-1;
	printf("\n enter the size of stack[MAX=100]:");
	scanf("%d",&n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t-----------------------------");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY|\n\t 4.EXIT");
	do
	{
		printf("\n enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
				printf("\n\t EXIT POINT");
					break;
				}
			default:
				{
					printf("\n\t please enter a valid choice(1/2/3/4)");
				}
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("\n\t STACK is over flow");
		
	}
else
{
	printf("enter a value to be pushed:");
	scanf("%d",&x);
	top++;
	stack[top]=x;
}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\t the popped elements is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n the elements in STACK \n");
		for(i=top;i>=0;i--)
			printf("\n press next choice");
	}
	else
	{
		printf("\n the stack is empty");
	}
}

