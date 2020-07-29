/*
kth largest factor of N


A positive integer d is said to be a factor of another positive integer N if when N is divided by d, the remainder obtained is zero. For example, for number 12, there are 6 factors 1, 2, 3, 4, 6, 12. Every positive integer k has at least two factors, 1 and the number k itself.Given two positive integers N and k, write a program to print the kth largest factor of N.



Input Format: The input is a comma-separated list of positive integer pairs (N, k)



Output Format: The kth highest factor of N. If N does not have k factors, the output should be 1.



Constraints: 1<N<10000000000. 1<k<600.You can assume that N will have no prime factors which are larger than 13.



Example 1

Input: 12,3
Output: 4


Example 2

Input: 30,9
Output: 1

*/

#include<stdio.h>
#include<conio.h>

int main()
{
int i,a,a1[13],r=0,k;
printf("Enter N");
scanf("%d",&a);
printf("Enter k");
scanf("%d",&k);

for(i=1;i<a+1;i++)
 {
  
   if(a%i==0)
     {  printf(" %d ",i);
	 a1[r]=i; r++;}
    
}

if (r>=k)
printf("\nk largest factor: %d",a1[(r)-k]);
else 
 printf("\n1");
    return 0;
}
