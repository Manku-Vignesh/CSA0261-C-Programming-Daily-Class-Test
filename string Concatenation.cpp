//concatenation of given two strings

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[1000];
	char s2[1000];
printf("Enter the first string = \n",s1);
scanf("%s",s1);
printf("Enter the second String = \n",s2);
scanf("%s",s2);
	strcat(s1,s2);
	printf("After String Concatenation %s\n",s1);
	return 0;
	
}
