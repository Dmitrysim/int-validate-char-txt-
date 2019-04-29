
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];

// function prototypes
void push(char);
void pop();
void find_top();

void main()
{
	char *text[100];

	printf("enter expression\n");
	scanf("%s", &text);
	validate (text);
	find_top();

	return 0;
}

int validate (char *txt)
{
    int i = 0;

    for (i = 0; txt[i] != '\0';i++)
	{
		if (txt[i] == '(')
		{
			push(txt[i]);
		}
		else if (txt[i] == ')')
		{
			pop();
		}
	}

	return txt;
}

// to push elements in stack
void push(char a)
{
	stack[top] = a;
	top++;
}

// to pop elements from stack
void pop()
{
	if (top == -1)
	{
		printf("expression is incorrect\n");
		exit(0);
	}
	else
	{
		top--;
	}
}

// to find top element of stack
void find_top()
{
	if (top == -1)
		printf("\nexpression is correct\n");
	else
		printf("\nexpression is incorrect\n");
}

