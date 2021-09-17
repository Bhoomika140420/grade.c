#include<stdio.h>
main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	
	
    if(marks<0 || marks>100)\
          {
		  printf("wrong entry");
	      }
	else if(marks>=85 && marks<=100)
	      {
		  printf("A grade");
	      }
	else if(marks>=70 && marks<=84)
	      {
		  printf("B garde");
	      }
	else if(marks>55 && marks<=69)
	      {
		  printf("C grade");
	      }
	else if(marks>=40 && marks<=54)
	      {
		  printf("D grade");
	      }
    else
	      {
		  printf("F grade");
		  }
		  
getch();
return 0;
}


	
