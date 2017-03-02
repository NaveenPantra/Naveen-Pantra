//HEADER FILES
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
//FUNCTIONS DECLARATIONS
void even();
void odd();
//GLOBAL DECLARATIONS
int a[30],i,d,j,k,n,db,pb;
char;
//FUNCTION DEFINITIONS
void main()
{
        clrscr();
        printf("ENTER DATA IN BITS(0/1):")
        for(i=1;38;i++)
        {
            d=getche()-48;
            if(d==0||d==1)
            {
                a[i]=d;
            }
            else
            {
                break;
            }

        }
        n=i-1;//Assigning total number of bits entered to n
        printf("\nTOTAL BITS ENETRED:",n);
        for(i=1,j=0,k=1;i<=n;i++)
        {
            if((pow(2,j)<=n)&&(pow(2,j)==i))
            {
                p[k]='p';
                j++;
                k++;
                pb++
            }
            else
            {
                p[k]='d';
                k++;
                db++;
            }
        }
        printf("\nTOTAL NUMBER OF PARITY BITS:",pb);
        printf("\nTOTAL NUMBER OF DATA BITS:",db);
        printf("\nPARITY BITS AND DATA BITS POSITION IN ENTERED CODE:");
        for(i=1;i<=n;i++)
            printf("%c",p[i]);
        printf("\nCODE RECEVIED IN EVEN OR ODD PARITY OR NOT KNOWN");
        printf("\nODD (1)\nEVEN (0)\nNOTKNOWN (press any english alphabet)(Pay money)\nENTER OPTION:");
        //printf("\nNOTKNOWN (press any english alphabet)(Pay money $20)");
        bla:d=getche()-48;
        if(d==0||d==1)
        {
            if(d==0)
                even();
            else
                odd();
        }
        else
        {
            printf("\nENTER CORRECT OPTION:");
            goto bla;
        }

        /*else
        {
            printf("\nPAY MONEY($20)");//findtechnique();
            printf("\nWILL YOU PAY(1/0):");
            d=getche-48;
            if(d==1)
            {
                printf("\nCONFIRMATION:");
                gettechnique();
            }
            else
            {
                printf("\nFUCK OFFFFFFF.........................");
            }
        }*/
        if(err>0)
        {
            error();
        }


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
            c[k]=a[j];
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
            if(a[i]==1)
                continue;
            else//storing wrong parity bits only(check)
            {
                ebp[eb]=a[i];
                eb++;
                err++;
            }
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
		    if(a[i]==0)
                continue;
            else//Storing only wrong parity bits (check)
            {
                ebp[eb]=a[i];
                eb++;
                err++;
            }
	    }
	}
    }
}
/*void error()     //ERROR CHECKING FOR ONLY WRONG PARITY BITS
{
    printf("\nERROR OCCURED AT %d POSITIONS:",err);
    //printf("\nWANT TO KNOW ERROR POSITIONS(PAY $10):");
    printf("\nTOTAL CODE AFTER ERROR DETECTION:");
    i=bintodec();//CONVERTING
    a[i]=!(a[i]);
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nTOTAL BITS AFTER ERROR DETECTION:");
    for(i=1;i<=n;i++)
        printf("%d",a[i]);
    printf("\nDATA BITS AFTER ERROR DETECTION:");
    for(i=1;i<=n;i++)
    {
        if(p[i]=='d')
        {
            printf("%d",a[i]);
        }
    }

}
int bintodec()
{
    for(i=0;i<=(eb-1);i--)
    {
        dec=dec+pow(2,i)*ebp[i];
    }
    return dec;
}*/
