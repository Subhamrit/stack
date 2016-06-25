#define MAXITEMS 5
#include <stdio.h>
#include<conio.h>
typedef struct{
int top;
int items[MAXITEMS];
}stack;
void  push(stack*,int);
int pop(stack*);
main()
{
	stack s;
	s.top=-1;
	push(&s,5);
	push(&s,8);
	push(&s,7);
	push(&s,99);
	push(&s,54);
	push(&s,54);
	push(&s,54);
	

	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
}
void push(stack*s,int x)
{
	if((s->top)>(MAXITEMS-1))
	{
	printf("Stack Overflow");
	exit(1);
	}
	else{
		s->items[++(s->top)]=x;
	}
}
int pop(stack*s)
{
	if((s->top)<0)
	{
	printf("Stack Underflow");
	exit(1);
}
else
{
	return (s->items[(s->top)--]);
}
}

