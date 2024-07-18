
/// Welcome program

#include<stdio.h>
int main() // Starting point of the program
{
	printf("welcome to c programming");
	return 0;
}

//=============================================================================================================================================

///program with escape sequence

#include<stdio.h>
int main()
{
    printf("\n ****** Personal Information ******\a\a\a");
    printf("\n Name: Ajay Amit Pol");
    printf("\n Age: 21 \t Gender: \'M\' ");
    printf("\n Address: \"shiv plaza\", Near AB Chowk,G\\6, Pune-2");
    printf("\n Marks- SSC: 90.45%% \t HSC: 98.43%%");
    printf("\n Amitraj is my good friend \r ABHI");
    printf("\n What about\f you\?");
    printf("\n ABC\bDEFGH\b\bIJKLMNOP");
    return 0;
}

//=======================================================================================================================================================


/// WAP to init and display the values

int main()
{
    int x=340;
    char ch='A';
    float ft=4.5;
    double db=54.754545;

    printf("\n value of x is: %d",x);
    printf("\n ch=%c \t ft=%0.3f \n Val of db is %lf",ch,ft,db);
// WAP to input and display the values.

int main()
{
    int x;
    char ch;
    float ft;
    double db;

    printf("\n Enter one character,integer and two fractional values: ");
    scanf("%c %d %f %lf",&ch,&x,&ft,&db);

    printf("\n value of x is: %d",x);
    printf("\n ch=%c \t ft=%0.3f \n Val of db is %lf",ch,ft,db);

    return 0;
}


//==================================================================================================================
/// input output instruction


    // When i write the above program as (character is entered at last or in between)

        // Using fflush(stdin) to clear Keyboard buffer
*/

#include<stdio.h>
int main()
{
    int x;
    char ch;
    float ft;
    double db;

    printf("\n Enter one integer and two fractional values: ");
    scanf("%d %f %lf",&x,&ft,&db);

    printf("\n Enter the character: ");
    fflush(stdin); // Try to run with and without this instruction
    scanf("%c",&ch);

    printf("\n value of x is: %d",x);
    printf("\n ch=%c \t ft=%0.2f \n Val of db is %lf",ch,ft,db);

    return 0;
}

//=========================================================================================================================
  ///ARITHMETIC INSTRUCTION
  /// assignment operator

// Write a program to interchange the value of two variables

int main()
{
	int x,y,tmp;

	printf("\n Enter two nos: ");
	scanf("%d %d",&x,&y);

	printf("\n Entered values: x=%d \t y=%d",x,y);

	tmp=x;
	x=y;
	y=tmp;

	printf("\n values after interchange: x=%d \t y=%d",x,y);
	return 0;
}


//=========================================================================================================================

// WAP to interchange the vaues of two variables without using tmp

#include <stdio.h>
int main()
{
	int x,y;

	printf("\n Enter two nos: ");
	scanf("%d %d",&x,&y);

	printf("\n Entered values: x=%d \t y=%d",x,y);

    	x=x+y;
    	y=x-y;
    	x=x-y;

	printf("\n values after interchange: x=%d \t y=%d",x,y);
	return 0;
}

//====================================================================================================================================
///TYPEOF AND SIZE PROGRAMS

#include <stdio.h>
int main()
{
    int x=17, y=5;
    float z;

    z = x/y;
    printf("\n Z is %f",z);

    z = (float)x/y;
    printf("\n Z is %f",z);

    z = x/(float)y;
    printf("\n Z is %f",z);

    z = (float)x/(float)y;
    printf("\n Z is %f",z);


    return 0;
}
//====================================================================================================================================================
///sizeof


#include <stdio.h>
int main()
{
    int x=17;
    float z;
    char ch;
    double db=5.4;

    int ans;

    ans = sizeof(x);
    printf("\n ans(int): %d",ans);

    ans = sizeof(z);
    printf("\n ans(float): %d",ans);

    ans = sizeof(ch);
    printf("\n ans(char): %d",ans);

    ans = sizeof(db);
    printf("\n ans(double): %d",ans);

    printf("\n ----------------------------------- \n");

    ans = sizeof(int);
    printf("\n ans(int): %d",ans);

    ans = sizeof(float);
    printf("\n ans(float): %d",ans);

    ans = sizeof(char);
    printf("\n ans(char): %d",ans);

    ans = sizeof(double);
    printf("\n ans(double): %d",ans);

    return 0;
}

//=======================================================================================================================================================

///ARITHMETIC OPERATOR

// WAP to calc the simple interst

formula: 	si = ( p * r * n ) / 100 ;

*/


int main()
{
    int p,n;
    float si,r;

    printf("\n Enter the values of p r and n: ");
    scanf("%d %f %d",&p,&r,&n);

    si=(p*r*n)/100;

    printf("\n Si is: %f",si);
    return 0;
}

//=======================================================================================================================

    // WAP to convert the temp from F to Deg.

    formula: (0°C × 9/5) + 32 = 32°F

            (°F − 32) / 1.8 = °C
*/

int main()
{
    float cesius, fehrenhite;

    printf("Enter the temp in fehrenhite: ");
    scanf("%f",&fehrenhite);

    celsius = (fehrenhite - 32) / 1.8 ;
    printf("temp in cesius is: %f",cesius);

    return 0;
}

//=======================================================================================================================
/// use of mod(%) and divison(/)
int main()
{
	int no,rem,sum=0;

	printf("\n Enter the number: ");
	scanf("%d",&no);

	rem = no%10;	//8
	sum = sum+rem;	//8
	no = no/10;	//14

	rem = no%10;	// 4
	sum = sum+rem;	// 12
	no = no/10;	// 1

	rem = no%10;	// 1
	sum = sum+rem;  // 13
	no = no/10;	// 0

	printf("\n Sum of all digits: %d", sum);
	return 0;
}

//=============================================================================================================================================
/// use of relational operator

int main()
{
	int x=4,y=12;
	int ans;

	ans=(x>y);
	printf("\n Ans of (x>y) is %d",ans) ;

	ans=(x!=y);
	printf("\n Ans of (x!=y) is %d",ans) ;

	printf("\n (x%%2==0) is %d",(x%2==0));

	printf("\n y>x is %d",(y>x) );

	printf("\n (x==y) is %d ",(x==y) );

	return 0;
}

//=======================================================================================================================================
/// use of logical operator

int main()
{
    int x=4,y=12;

    printf("\n (x>y)&&(y<100) is %d",(x>y)&&(y<100)); //0

    printf("\n (x!=y)&&(y<100) is %d",(x!=y)&&(y<100)); //1

    printf("\n\n (x>y)||(y<100) is %d",(x>y)||(y<100)); //1

    printf("\n (x>y)||(y<10) is %d",(x>y)||(y<10)); //0

    printf("\n\n !(x%%2==0) is %d",!(x%2==0)); //0

    printf("\n !(y%%5==0) is %d",!(y%5==0)); //1

    return 0;
}
//============================================================================================================================================
/// USE OF CONDITIONAL OPERATOR

// WAP to find the max from two nos

int main()
{
	int n1, n2;

	printf("\n Enter any two nos: ");
	scanf("%d %d",&n1, &n2);

	(n1>n2) ? printf("\n n1 = %d is max",n1)  :  printf("\n n2 = %d is max",n2) ;

	return 0;
}

///Alternatiive code

int main()
{
	int n1, n2, max;

	printf("\n Enter any two nos: ");
	scanf("%d %d",&n1, &n2);

	max = (n1>n2) ? n1 : n2  ;
	printf("\n %d is max",max);

	return 0;
}
//==================================================================================================================================================================
	// Enter the price of 4 items and find the total bill. also calculate the discount
	// with 5% when amount is greater than 500 otherwise discount is 2%. and finally
	// display the payable amount.

#include <stdio.h>
int main()
{
	int p1,p2,p3,p4, tot=0;
	float dis;

	printf("\n Enter the price of 4 items: ");
	scanf("%d %d %d %d", &p1, &p2, &p3,&p4);

	tot=p1+p2+p3+p4;
	printf("\n Tota Bill: %d",tot);

	dis = (tot>500)? (tot*0.05) : (tot*0.02) ;
	printf("\n Discount: %f",dis);

	printf("\n Pay Bill Rs: %f", (tot-dis));

	return 0;
}

//=================================================================================================================================================

// Write a program to find max from 3 nos

Option 1: ///USING AN EXTRA VARIABLE

#include <stdio.h>
int main()
{
	int n1, n2, n3, tmp, max;

	printf("\n Enter any 3 nos: ");
	scanf("%d %d %d",&n1, &n2, &n3);

	tmp = (n1>n2)? n1 : n2;
	max = (tmp>n3) ? tmp : n3;

	printf("\n Max from 3 nos: %d",max);

	return 0;
}

option 2: /// NESTING OF CONDITIONAL OPERTOR

#include <stdio.h>
int main()
{
	int n1, n2, n3, tmp, max;

	printf("\n Enter any 3 nos: ");
	scanf("%d %d %d",&n1, &n2, &n3);

	max = (n1>n2) ? (n1>n3?n1:n2)  :  (n2>n3?n2:n3);

	printf("\n Max from 3 nos: %d",max);

	return 0;
}

//========================================================================================================================================
 ///USING OF BITWISE OPERATOR

 int main()
 {
     int x=24,y=10,z;
	//24-->0001 1000
	//10-->0000 1010

     z=(x&y);
     printf("\n (x&y) is %d", z);
     printf("\n (x|y) is %d", (x|y));
     printf("\n (x^y) is %d", (x^y));

     printf("\n (x<<2) is %d", (x<<2)); ///moves bit position by 2 towards left
     printf("\n (y>>2) is %d", (y>>2)); ///moves bit position by 2 towards right


     return 0;
 }
