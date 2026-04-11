#include <stdio.h>

void checkcarpower(int hp)
{
	
	if (hp>=300)
	{
		printf("Wow, that's a powerful car! ");
	}
	else
	{
		printf("That's a good daily driver car");
	}
}

int main(void)
{
	printf("please enter your car horsepower");
	scanf("%d" ,&hp);
	checkcarpower(hp);
	
	return 0;
}
