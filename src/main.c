#include <stdio.h>

#include <espl_lib.h>

int input;
int more = 1;


int main(){
	printf("hello espl\n");
	while(more == 1){
		printf("enter an integer:\n");
		scanf("%i", &input);
		printf("%s", num_to_words(input));
		printf("\ncontinue? (0/1)");
		scanf("%i", &more);
		}
}
