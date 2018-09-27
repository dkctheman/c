#include <stdio.h>

int main(){
	
	char foo;
	printf("Hello World\n");
	scanf("%c",&foo);
	printf("%c",foo);
	
	while (foo != '4'){
		
		printf("\nlooping..\n");
		scanf("%c",&foo);
	
		
	}
	
	return 0;
	
}