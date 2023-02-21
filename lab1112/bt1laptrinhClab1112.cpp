#include<stdio.h>

int main(){
	int one[5] = {2, 5, 3, 6, 3};
	int two[5];
	int i;
	for(i = 0; i < 5; i++)
	{
	two[i] = one[i] + 3;
	}
	printf("\n");
	for(int j = 0; j < 5; j++){
	printf("%d\t", two[j]);	
	}
	return 0;
}
