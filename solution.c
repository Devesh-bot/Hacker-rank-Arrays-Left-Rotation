#include<stdio.h>
#include<stdlib.h>
void rotation(int arr[],int k,int n);
int gcd(int a,int b);
int main()
{
int n,k,i;
scanf("%d",&n);
scanf("%d",&k);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
rotation(arr,k,n);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
void rotation(int arr[],int k,int n)
{
int i,j,s,temp;
int key=gcd(k,n);
for(i=0;i<key;i++)
{
temp=arr[i];
j=i;
while(1)
{
s=j+k;
if(s>=n)
s=s-n;
if(s==i)
break;
arr[j]=arr[s];
j=s;
}
arr[j]=temp;
}
}
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
