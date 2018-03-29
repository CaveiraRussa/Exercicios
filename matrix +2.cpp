#include <stdio.h>
#include <stdlib.h>
#define max 3
int main(){
int mat[max][max];
int mat2[max][max];
int lin,col;


	for (lin=0;lin<max;lin++){
		for (col=0;col<max;col++){
		printf("Digite um numero:");
    	scanf("%d",&mat[lin][col]);      
    	}
	}
	for (lin=0;lin<max;lin++){
		for (col=0;col<max;col++){
		printf("Digite um numero:");
    	scanf("%d",&mat2[lin][col]); 
		}	
	}
	for (lin=0;lin<=max-1;lin++){
		printf("|");
		for (col=0;col<=max-1;col++){
		printf("\t%d\t",mat[lin][col]+ mat2[lin][col]);
		}
	printf("|\n"); 
	}	

return 0;
}
