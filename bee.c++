#include <stdio.h>

int factorial(int x){
	if (x <= 1){
		return 1;
	}	
	return x + factorial(x - 1);
}

int main()
{
	int x=1;
	int y;
	int cave=1;

	scanf("%d", &y);
	while(cave < y){
		cave = 1 + 6 * ( factorial(x) );
		x += 1;		
	}
	printf("%d", x);
}
