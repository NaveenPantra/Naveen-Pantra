//HEADER FILES
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
//FUNCTION DECLARATIONS
void even();
void odd();
//GLOBAL DECLARATIONS
int d[20],c[10],e,n,m,j,i,k;
//int ;
char p[20];
//FUNCTIONS DEFENITIONS
void main()
{
    clrscr();
    printf("ENTER NUMBER OF BITS:");
    scanf("%d",&n);
    printf("\nENTER BITS IN BINARY FORMAT:");
    for(i=1,j=0,k=1;i<=n;i++)
    {
	if((pow(2,j)<=n)&&(pow(2,j)==i))
	{
	    p[k]='p';
	    n++;
	    j++;
	    k++;
	}
	else
	{
	    p[k]='d';
	    d[i]=getche()-48;
	    k++;
	}
    }
    printf("\nENTER EVEN/ODD PARITY (1/0):");
    i=getche()-48;
    if(i==1)
	even();
    else
	odd();
    printf("\nPARITY POSITINS OF THE CODE:");
    for(i=1;i<=n;i++)
    {
	if(p[i]=='p')
		printf("%c",p[i]);
	else
		printf("%d",d[i]);
    }
    printf("\nENCRYPTED CODE AFTER PARITY GENERATION:");
    for(i=1;i<=n;i++)
	printf("%d",d[i]);
    printf("\nPARITY    AND    DATA     COMBINATIONS:");
    for(i=1;i<=n;i++)
	printf("%c",p[i]);
    getch();
}
void even()
{
    for(i=1;i<=n;i++)
    {
	if(p[i]=='p')
	{
	    for(k=0,m=1,j=i;j<=n;)
	    {
		if(m>i)
		{
		    m=1;
		    j+=i;
		}
		if(p[j]=='p')
		{
		    j++;
		    m++;
		    //continue;
		}
		else
		{
		    c[k]=d[j];
		    k++;
		    m++;
		    j++;
		}
	    }
	    for(j=0,e=0;j<k;j++)
	    {
		if(c[j]==1)
		    e++;
	    }
	    if((e%2)==1)
	    {
		d[i]=1;
	    }
	}
    }
}
void odd()
{
    for(i=1;i<=n;i++)
    {
	if(p[i]=='p')
	{
	    for(k=0,m=0,j=i;j<=n;m++)
	    {
		if(m==i)
		{
		    m=0;
		    j+=i;
		}
		if(p[j]=='p')
		{
		    j++;
		    m++;
		    continue;
		}
		else
		{
		    c[k]=d[j];
		    k++;
		    j++;
		    m++;
		}
	    }
	    for(j=0,e=0;j<k;j++)
	    {
		if(c[j]==1)
		    e++;
	    }
	    if((e%2)==1)
	    {
		d[i]=0;
	    }
	}
    }
}
