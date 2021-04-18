#include<stdio.h>
int lcm(int a,int b)
{
	static int m=0;
	m=m+b;
	if((m%a==0)&&(m%b==0))
	return m;
	else
	return lcm(a,b);
}
int main()
{
	int x,y,res;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	if(x>y)
	res=lcm(y,x);
	else
	res=lcm(x,y);
	printf("Lcm of the numbers is %d",res);
	return 0;
}
