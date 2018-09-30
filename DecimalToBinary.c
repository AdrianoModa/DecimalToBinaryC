#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int numDecimal, numBinary, numToOutput, i, k = 0;
    int binaries[20];
    int newBinaries[20];

    printf("Entre com um numero inteiro positivo: \n");
    scanf("%d", &numDecimal);
    numToOutput = numDecimal;

    for (i = 0; numDecimal > 0; i++) {
        numBinary = numDecimal % 2;
        numDecimal = numDecimal / 2;
        binaries[i] = numBinary;
	}

    system("cls");    
    printf("%d to Binary --> ", numToOutput);   

    for(int bin = i-1; bin >= 0; bin--){ 
        newBinaries[k] = binaries[bin];
        printf("%d ", newBinaries[k]);
    }

    return EXIT_SUCCESS;
}