#include<stdio.h>
int Triangle(int num,int num1,int num3)
{
if(num<1)
{
int a=num*(num+1)/2;
int i=num;
Pentagonal(num1,a,i,num3);
}
}
int Pentagonal(int num1,int num,int i,int num3)
{
        int b=num1*((3*num1)-1)/2;
		if(b==num)
		{
		    Hexagonal(num3,b,i,num1);
		}
		else
		{
		 Triangle(i+1,num1+1,num3+1);
		}
		num3++;
}
int Hexagonal(int num3,int num,int i,int num1)
{

		int c=num3*(2*num3-1);

		if(c==num)
		{
		    return i;
		}
		else
		{
		 Triangle(i+1,num1+1,num3+1);
		}
}
//int check(int c)
//{
 //if(c==num)
 //{
 //  printf("%d",c);
 //}
//}
int main()
{
    int num=285;
    int num1=165;
    int num3=143;
  Triangle(num,num1,num3);
  int i;
  printf("%d",i);

}
