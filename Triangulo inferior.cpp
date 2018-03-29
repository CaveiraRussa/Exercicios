#include <stdio.h>
#include <stdlib.h>
#define max 4
int main(){
int mat[max][max];
int lin,col;

	for (lin=0;lin<max;lin++){
		for (col=0;col<max;col++){
		printf("Digite um numero:");
    	scanf("%d",&mat[lin][col]);      
    	}
	}
		for (lin=0;lin<=max-1;lin++){
		printf("|");
			for (col=0;col<=max-1;col++){		
			printf("\t%d\t",mat[lin][col]);			
			}
		printf("|\n"); 
		}	
		for (lin=0;lin<max;lin++){
			for (col=0;col<max;col++){
		if (lin>col){
			printf(" %d ",mat[lin][col]);}    
    	}
	}
	return 0;
}
