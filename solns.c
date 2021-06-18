/* Enter your solutions in this file */
#include <stdio.h>
/*max function*/
int max(int a[],int n)
{
	int max=0;
	for (int i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
		else
			continue;
	}
	return max;
}
/*min function*/
int min(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		else
			continue;
	}
	return min;
}
float average(int a[],int n)
{
	int sum=0;
	float avg=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	return avg;
}
/*mode function*/
int mode(int a[],int n)
{
	int lmax=max(a,n);
	int lmin=min(a,n);
	int counts[100],b=-1;
	for(int i =lmin;i<=lmax;i++)
		{
		int cnt=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]==i)
				cnt++;
		}
		counts[++b]=cnt;
		}
	int cmax=0,flag=0;
	for (int i=0;i<=b;i++)
	{
		if (counts[i]>cmax)
		{	cmax=counts[i];
			flag=i-(0-lmin);
		}
		else
			continue;
	}
	return flag;
}
    int isprime(int i)
    {
	int flag=0;
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			    return 1;
			else
			    return 0;
    }
int factors(int n,int a[])
{
	int count=0;
    	int i=2;
    	while(i<n)
    	{
        	if(n%i==0)
			if(isprime(i)==1)
			{	a[count]=i;
				count++;
                		n=n/i;
                		if(isprime(n)==1)
                		{
                			a[count++]=n;
                			break;
                		}
                		i=2;
			}
		else continue;
		else
		i++;
	}
	return count;
}
