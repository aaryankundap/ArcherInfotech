/* ///CONTROL STATEMENT

///IF

// Enter the number and display the entered number is even or odd

int main()
{
	int no;

	printf("\n Emter the no: ");
	scanf("%d",&no);

	if(no%2==0)
	{
		printf("\n No: %d is Even",no);
	}

	if(no%2!=0)
	{
		printf("\n No: %d is Odd",no);
	}

	return 0;
}

//================================================================================================================================================
     // WAP to enter price of 3 items and calc the discount. (discount is 7% when amount exceeds 500)

int main()
{
    float p1,p2,p3,tot,dis=0.0;

    printf("\n Enter the price of 3 items: ");
    scanf("%f %f %f",&p1,&p2,&p3);

    tot=p1+p2+p3;
    if(tot>500)
    {
        dis=tot*0.07;
    }
    printf("\n Total Bill: %f",tot);
    printf("\n Discount: %f",dis);
    printf("\n Pay Rs: %0.2f",(tot-dis));

    return 0;
}
//====================================================================================================================================
///IF ELSE

// Enter the number and display the entered number is even or odd (using if() esle)

int main()
{
	int no;

	printf("\n Emter the no: ");
	scanf("%d",&no);

	if(no%2==0)
	{
		printf("\n No: %d is Even",no);
	}
	else
	{
		printf("\n No: %d is Odd",no);
	}

	return 0;
}

//====================================================================================================================================

   // WAP to enter price of 3 items and calc the discount. (discount is 7% when amount exceeds 500 otherwise 3%)

int main()
{
    float p1,p2,p3,tot,dis=0.0;

    printf("\n Enter the price of 3 items: ");
    scanf("%f %f %f",&p1,&p2,&p3);

    tot=p1+p2+p3;
    if(tot>500)
    {
        printf("Discount is 7%%");
        dis=tot*0.07;
    }
    else
    {
        printf("Discount is 3%%");
        dis=tot*0.03;
    }
    printf("\n Total Bill: %f",tot);
    printf("\n Discount: %f",dis);
    printf("\n Pay Rs: %0.2f",(tot-dis));

    return 0;
}


//====================================================================================================================================

// WAP to enter the number thw keyboard and multi. it by 5 when
// it is less than 10 otherwise subtract 100 from it.
int main()
{
	int no,ans;

	printf("\n Enter the number: ");
	scanf("%d",&no);

	if(no<10)
	{
		printf("\n Number is less than 10");
		ans=no*5;
	}
	else
	{
		printf("\n Number is not less than 10");
		ans=no-100;
	}
	printf("\n Result is: %d",ans);
	return 0;
}
//====================================================================================================================================
// Enter the PCM marks of student and calculate the PCM total and percentage
// when he is pass otherwise just display student is fail.

int main()
{
	int p,c,m,tot;
	float per;

	printf("\n Enter the marks obtained in phy, chem and maths: ");
	scanf("%d %d %d",&p,&c,&m);

	if(p>=35 && c>=35 && m>=35)
	{
		tot=p+c+m;
		per=tot/3.0;
		printf("\n Student Result: Pass \n PCM Total: %d \t Percentage: %f",tot,per);
	}
	else
	{
		printf("\n Student Result: Fail");
	}
	return 0;
}

//======================================================================================================================================================
///USING NESTED IF else

	// Enter 3 nos and display the max from it.

int main()
{
	int n1,n2,n3;

	printf("\n Enter any 3 nos: ");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\n N1: %d is max",n1);
		}
		else
		{
			printf("\n N3: %d is max",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("\n N2: %d is max",n2);
		}
		else
		{
			printf("\n N3: %d is Max",n3);
		}
	}

	return 0;
}



//==================================================================================================================================

        // Enter any no and find No is div by 3 or No is div by 5 or No is div by both or not by both


int main()
{
    int no;

    printf("\nEnter the no: ");
    scanf("%d",&no);

    if(no%3==0)
    {
        if(no%5==0)
        {
            printf("\n No is div by Both 3 and 5");
        }
        else
        {
            printf("\n No is div by 3 only");
        }
    }
    else
    {
        if(no%5==0)
        {
            printf("\n No is div by 5 only");
        }
        else
        {
            printf("\n No is not div by both 3 and 5");
        }
    }
    return 0;
}


//===========================================================================================================================
    // Enter any character and find it is ucase, lcase, digit or special symbol

         A to Z --> 65 to 90
         a to z --> 97 to 122
         0 to 9 --> 48 to 57


int main()
{
    char ch;

    printf("\n Enter any character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')  //  if(ch>=65 && ch<=90)
    {
        printf("\n Entered character is: UCASE");
    }
    else
    {
        if(ch>='a' && ch<='z')
        {
            printf("\n Entered character is: LCASE");
        }
        else
        {
            if(ch>='0' && ch<='9')
            {
                printf("\n Entered character is: DIGIT");
            }
            else
            {
                printf("\n Entered character is: SPECIAL SYMBOL");
            }
        }
    }
    return 0;
}

//=============================================================================================================================

// Enter the no thw keyboard and display menu to perform following operations
//	option 1 - to check the number is positive or negative.
//	option 2 - to check number is divisible by 5 or not.

int main()
{
	int no,opt;

	printf("\n Enter any number: ");
	scanf("%d",&no);

	printf("\n --------- Menu --------\n");
	printf("\n 1.To check the number is Even or Odd \n 2.To check the number is divisible by 5 or not");
	printf("\n Select your option: ");
	scanf("%d",&opt);

	if(opt==1)
	{
		if(no==0)
		{
			printf("\n Number is Zero");
		}
		else
		{
			if(no>0)
			{
				printf("\n Number is Positive");
			}
			else
			{
				printf("\n Number is Negative");
			}
		}
	}
	else
	{
		if(opt==2)
		{
			if(no%5==0)
			{
				printf("\n Entered number is div by 5");
			}
			else
			{
				printf("\n Entered number is not div by 5");
			}
		}
		else
		{
			printf("\n Incorrect Option");
		}
	}
	return 0;
}

//=============================================================================================================================================================

///USING LADDER IF else


//================================================================================================================================


//WAP to display hi msg 5 times using loops

#include<stdio.h>
int main ()
{
  int i;
  for (i=0;i<5;i++)
  {
        printf("\n Hi ");
  }
  return 0;
}

//======================================================================================================
//WAP to display 1-10 n0s

#include <stdio.h>
int  main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n %d",i);
    }
    return 0;
}

//======================================================================================================
//WAP to display all even numbers from 1-100

#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if (i%2==0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}

/// OR

#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<=100;i+=2)
    {
        printf("\n %d",i);
    }
    return 0;
}
//==============================================================================================================================
// WAP to display all multiples of 5 from 1-100


#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if (i%5==0)
        {
            printf("\n %d",i);
        }
    }
}
//==========================================================
//wAP to display all multiples of 5 and 3 from 1-100


#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if (i%5==0 && i%3==0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}

//==================================================================
// WAP to display addition of 3 digit number

#include <stdio.h>
int main()
{
    int no,rem,sum;

    printf("\n Enter any number: ");
    scanf("\n %d",&no);
    for(sum;no!=0;no=no/10)
    {
        rem=no%10;
        sum=sum+rem;
    }
    printf{"\n Addition of entered no is %d",sum};
    return 0;
}

//======================================================================================
//WAP to display reverse no.
#include <stdio.h>
int main()
{
    int no,rem,rev;
    printf("\n Enter the number to reverse :");
    scanf("%d",&no);
    for ( ;no!=0; )
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    printf("\n The reverse of no is %d :",rev);
    return 0;
}

//============================================================================================

//WAP to display digital count of entered number
#include <stdio.h>
int main()
{
    int no,rem,dc;
    printf("\n Enter the number :");
    scanf("%d",&no);

    for( ;no!=0; )
    {
        rem=no%10;
        dc=dc+1;
        no=no/10;
    }
 printf("\n The digit count of %d is: ",dc);
 return 0;
}

//==========================================================================================================
//WAP to display even odd count
#include<stdio.h>
int main()
{
 int i,ecnt,ocnt;
 printf("\n The numbers with evecount and odd count are: ");

 for(i=1;i<=100;i++)
 {
     if(i%2==0)
     {
         printf(" %d",ecnt++);
     }
     else{

        printf(" %d",ocnt++);
     }
 }
 return 0;
}
*/

//==========================================================================================================================
//WAP to dsiplay table of 5
#include<stdio.h>
int main()
{
    int no,i,ans;
    printf(" \n Enter any no.")
    scanf("%d",&no);

    for(i=1;i<=0;i++);
    {
        ans=no*i;
        print("\n %d*%d=%d",no,i,ans);

    }
    return 0;
}
///============OR====================
#include<stdio.h>
int main()
{
    int no,i,ans;
    printf("\n Enter any no");
    scanf("%d",&no);
    printf("\n Multiplication of %d",no);
    for(i=1;i<=10;i++)
    {
        printf("\n %d*%d=%d,no,i,no*i")

    }
    return 0
}
