#include<stdio.h>
//PROGRAM OF REVERS THREE DIGIT NUMBER WITHOUT LOOP
	void main()
	{
		int num, reverse;
		printf("ENTER THE THREE DIGIT NUMBER:- ");
		scanf("%d",&num);
		
		printf("AFTER REVERSE RESULT IS:- ");
		reverse = num%10;
		printf("%d",reverse);
		reverse = num/10;
		reverse = reverse%10;
		printf("%d",reverse);
		reverse = num/10;
		reverse/10;
		printf("%d",reverse);

		
	}
	