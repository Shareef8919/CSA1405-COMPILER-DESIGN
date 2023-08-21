#include<stdio.h>
#include<string.h>
int main()   
{
	char str[20];
	printf("enter the string: ");
	scanf("%s",&str);
	int len=strlen(str);
	if(str[0]=='/' && str[1]=='/' || (str[0]=='/' && str[1]=='*' && str[len-1]=='/' && str[len-2]=='*'))
	{
		printf("This is a comment");
	}      
	else    
	{
		printf("This is not a comment"); 
	}
	return 0;
} 
