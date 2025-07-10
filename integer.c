#include<conio.h>
#include<stdio.h>
void main()
{
	int n,reversed =0,remender,original;
	printf("enter an integer;");
	scanf("%d",&n);
	original = n;
	
	while (n!=0)
	{
	remender = n % 10;
	reversed = reversed * 10 + remender;
	n/=10;
    }
    if (original == reversed)
    printf("%d is a palindrome.",original);
    else
    printf("%d is not a palindrome.",original);
    getch();
}