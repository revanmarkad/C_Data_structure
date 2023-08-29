
//write a c program to accept an infix expression and convert it into postfix form(Use Static Implementation of Stack);


#include<stdio.h>
#include<conio.h>
#include<ctype.h>


#define SIZE 20

char stack[SIZE];
int top=-1;


int isfull()
{
    if(top==SIZE-1)
        return(1);
    else
        return(0);
}

int isempty()
{
    if(top==-1)
        return(1);
    else
        return(0);


}


void push(char d)
{
    int k;
    k=isfull();
    if (k==0)
    {
        top=top+1;
        stack[top]=d;
    }
    else
        printf("\n Stack is full...");
}

char pop()
{
    char d;
    d=stack[top];
    top=top-1;
    return(d);
}
int priority(char ch)
{
    if(ch=='(')
        return(0);
    else if(ch=='+'||ch=='-')
        return(1);
              else if(ch=='*'||ch=='/'||ch=='%')
                  return(2);
                        else
                            return(3);
}

main()
{
    char s[20],ch;
    int p1,p2,k,i;
    clrscr();

    printf("\n Enter the infix string");
    scanf("%s",s);
    printf("\n Postfix iis");


    for(i=0; s[i]!='\0'; i++)
    {
        if(isalnum(s[i]))
            printf("%c",s[i]);
        else if(s[i]=='(')
            push(s[i]);
        else if(s[i]==')')

            ch=pop();
        while(ch!='(')
        {
            printf("%c",ch);
            ch=pop();
        }
    }
    else
    {
        p1=priority(stack[top]);
        p2=priority(s[i]);
        k=isempty();
        while(p1>=p2&&k!=1)
        {
            ch=pop();
            printf("%c",ch);
            p1=priority (stack[top]);
            k=isempty();
        }
        push(s[i]);
    }//for end

    k=isempty()
      while(k!=1)
    {

        ch=pop
           printf("%c",ch);
        k=isempty();
    }
    getch();
}

