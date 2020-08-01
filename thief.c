/*There are n houses build in a line, each of which contains some value in it.

 A thief is going to steal the maximal value of these houses, but he can’t steal in two adjacent houses because the owner of the stolen houses will tell his two neighbours left and right side.

What is the maximum stolen value?

Sample Output:

Input: val[] = {6, 7, 1, 3, 8, 2, 5}

Output: 20
*/
#include<stdio.h>
void main()
{
int h,i,sum=0,max,j;	
printf("Enter no of houses");
scanf("%d",&h);
int a[h];
for(i=0;i<h;i++)
  { scanf("%d",&a[i]);
   }

for(j=0;j<h;j++)
{
max=a[0];	
for(i=0;i<h;i++)
 {
  if(max<a[i])
   max=a[i];
 }
for(i=0;i<h;i++)
 {
    if(a[i]==max)
	{
		sum=sum+a[i];
		a[i]=0;
		a[i-1]=0;
		a[i+1]=0;
	}	

 } }
printf("%d",sum);	
}
