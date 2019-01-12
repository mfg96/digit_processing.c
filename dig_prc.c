//mfarazsohail

#include<stdio.h>
#include<stdlib.h>
int Fact(int);
int FactI(int);
int Fib(int);
int FibI(int);
int gcd(int, int);
int gcdI(int, int);
int power(int, int);
int powerI(int, int);
int digProd(int);
int digProdI(int);

int main()
{ 
  int sel;
  int a,n,b,c,x,y;
  int d,e,f,g,h,i,j;
  int k,l,m,o;
  while(1)
{  
  printf("\n1 - int Factorial(int n);\n2 - int Fibonacci(int n);\n3 - int gcd(int x, int y);\n4 - int power(int b, int c);\n5 - int digProd(int x);\n0 - Quit");
  printf(" \nPlease enter a selection: ");
  scanf("%d", &sel);
  if (sel==0)
  break;
  else
 {
   printf("Recursive(1) or Iterative(2): ");
   scanf("%d", &a);
   if(a<1||a>2)
   {
    printf("Invalid input");
	}
	if(sel==1)
	{
	         if(a==1)
	         {
	          printf("please enter the input");
	          scanf("%d",&n);
			  if(n==0)
			  printf("Error!");
			  e=Fact(n);
			  printf("%d",e);
	          }
	          else if(a==2)
	          { printf("please enter the input");
	          scanf("%d",&n);
			  if(n==0)
			  printf("Error!");
	              f=FactI(n);
			  printf("%d",f);
	              
	  }        }
	
	if(sel==2)
	{       if(a==1)
	     {
	         printf("Please enter the input: ");
	         scanf("%d",&n);
			 if(n<0)
			 printf("Error!");
	         g=Fib(n);
			 printf("%d",g);
			 }
			 else if(a==2)
			 { printf("Please enter the input: ");
	         scanf("%d",&n);
			 if(n<0)
			 printf("Error!");
			     j=FibI(n);
			 printf("%d",j);
			 }
	}
	  if(sel==3)
	  {  
	          if(a==1)
	          {
	           printf("Please enter two numbers: ");
	           scanf("%d %d",&x,&y);
			   if(x<0||y<0)
		       printf("Error!");
			   h=gcd(x,y);
			   printf("%d",h);
		     }
		     else if(a==2)
		    {  printf("Please enter two numbers: ");
	           scanf("%d %d",&x,&y);
			   if(x<0||y<0)
		       printf("Error!");
		      k=gcdI(x,y);
			 printf("%d",k);
		        
		    }
	  }
	  
	  if(sel==4)
	  {  
	       if(a==1)
	       {
	         printf("Please enter two numbers: ");
	         scanf("%d %d",&b,&c);
			 if(b<0||c<0)
		     printf("Error!");
		     i=power(b,c);
		     printf("%d",i);
		     }
		     else if(a==2)
		     {  printf("Please enter two numbers: ");
	         scanf("%d %d",&b,&c);
			 if(b<0||c<0)
		     printf("Error!");
		       l=powerI(b,c);
		     printf("%d",l); 
		     }
	  }
	  
	 if(sel==5)
		{
	         printf("Please enter input: ");
	         scanf("%d",&d);
			 if(d<0)
		     printf("Error!");
		     m=digProd(d);
		     printf("%d",m);
		     }
		     else if(a==2)
		     {  printf("Please enter input: ");
	         scanf("%d",&d);
			 if(d<0)
		     printf("Error!");
		       o=digProdI(d);
		     printf("%d",o); 
		     } 
 }	  
 }
	  }
	  
	  
	
     int Fact(int n)
	 {
	  if(n==1)
	  return 1;
	  else 
	  return n*Fact(n-1);
	  }
	  
	  int FactI(int n)
	  {  
	    int res=1;
		for(int i=1;i<=n;i++)
		{
		 res=res*i;
		}
		 return res;
		 }
		 
		 int Fib(int n)
		 {
		  if(n==0||n==1)
		  return n;
		  else 
		  return Fib(n-1)+Fib(n-2);
		 }
		  
		  int FibI(int n)
		  {
		   int num1=0,num2=1,num3;
		   if(n==0||n==1)
		   num3=n;
		   for(int i=1;i<n;i++)
		   {
		    num3=num2+num1;
			num1=num2;
			num2=num3;
			}
			return num3;
			}
			
			int gcd(int x, int y)                         
         {
            if(y==0)                                 
            return x;
            else
             {
               return gcd(y,x%y);                
             }
         }
          int gcdI(int m, int n)            
        {
          int temp;
          while(n!=0)
         {
           temp=n;
            n=m%n;
           m=temp;
	     }
	      return m;
	
        }
	   
	   int powerI(int b, int c)
	   {
		   int result=1;
		   while(c-->0)
		   {
			   result=result*b;
		   }
		   return result;
	   }
	   int power(int b, int c)
	   {
		   if(c)
		   {
			   return(b*power(b,c-1));
		   }
		   return 1;
	   }
	   
	int digProdI(int d)
	{  int right_dig,prod; 
	   if(d>=1&&d<=9)
		   return d;
	   else{
	   while(d!=0)
	   {
		   right_dig=d%10;
		   prod=prod*right_dig;
		   d=d/10;
	   }
	   return prod;
	   }
	}
	int digProd(int d)
	{
		if(d>=1&&d<=9)
		   return d;
	    else 
			return (d%10)*digProd(d/10);
	}
	
	  
		
			 
		  
		 
	  
	   
	  
	  
	
	
	
	
  
	
	
   