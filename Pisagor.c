#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int i,j;		//global deðiþkenler

int arasal(int m, int n)
{
	
	int s=0,ks;
    if(m<n)
    {
    	    ks=m;
	}
    else
	{
		ks=n;	
	} 
	for(i=2;i<=ks;i++)
	{
    	if(m%i==0 && n%i==0) 
		{
			s=1;	
		}
	}
	if (s==0) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int tekcift(int m, int n)
{
	if((m%2==0 && n%2==1) || (m%2==1 && n%2==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void ABC(int m, int n)
{
	int A = m*m-n*n;
	int B = 2*m*n;
	int C = m*m+n*n;
	printf("A = %d\tB = %d\tC = %d\n",A,B,C);
}
main()
{
	while(1)
	{
		int input1, count = 1;
	int m=2,n=1;
	printf("Sayi giriniz:\n");
	scanf("%d",&input1);
	for(m=2; m<input1+2; m++)
		{
			for(n=1; n<m; n++)
			{
				if(tekcift(m,n) == 1)
				{
					if(arasal(m,n)== 1)
					{
						if(count==input1)
						{
							printf("m = %d\nn = %d\n",m,n);
							ABC(m,n);
						}
						count++;
					}
				}
			}
		}
	}
	
	getch();	
}
