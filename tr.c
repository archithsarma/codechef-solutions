/*
Philaland Coins Question


Problem Description 

The problem solvers have found a new Island for coding and named it as Philaland. These smart people were given a task to make the purchase of items at the Island easier by distributing various coins with different values. 



Manish has come up with a solution that if we make coins category starting from $1 till the maximum price of the item present on Island, then we can purchase any item easily. He added following example to prove his point. Let's suppose the maximum price of an item is 5$ then we can make coins of {$1, $2, $3, $4, $5} to purchase any item ranging from $1 to $5. Now Manisha, being a keen observer suggested that we could actually minimize the number of coins required and gave following distribution {$1, $2, $3}. According to him, any item can be purchased one time ranging from $1 to $5. Everyone was impressed with both of them. Your task is to help Manisha come up with the minimum number of denominations for any arbitrary max price in Philaland. 



Input Format 

First line contains an integer T denoting the number of test cases. Next T lines contains an integer N denoting the maximum price of the item present on Philaland. 



Output Format 

For each test case print a single line denoting the minimum number of denominations of coins required.



Constraints 

1<=T<=100 

1<=N<=5000 



Sample Input 1: 

2 

10 

5



Sample Output 1: 

4 

3



Sample Input2: 

3

1

5

7 



Sample Output2: 

1

3

3 

*/
#include<stdio.h>
#include<conio.h>

int main () 
{ 
int t,j;
printf("Enter the no of test cases:");
scanf("%d",&t);
for(j=0;j<t;j++)

 {	
    
    int k=0,i,n,a[5000],sum=0;
	printf("\nEnter the number");
	scanf ("%d", &n);
	for(i=0;i<n;i++)
	{
		a[i]=i;	
	}
	for(i=0;i<n;i++)
	{

		sum=a[i]+sum;
		if(sum>=n) break;
		a[i]=i;
		k=k+1;
	}
	printf("\n%d",k);
	
} 
return 0;}


