

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	double valores[10] = {5, 6, 0, 2, 8, 1, 3, 9.7, 4.2, 7.3};
	double coordenadas_1[2] = {4, 5};
	double coordenadas_2[2] = {7, 8};
	
	int i;
	void ordem_crecente(double vetor[], int k);
	double med_elementos(double vetor[],int k );
	double distancia(double coordenada_1[], double coordenada_2[]);
	
	ordem_crecente(valores, 10);
	double med = med_elementos(valores, 10);
	double dist = distancia(coordenadas_1,coordenadas_2);

    printf("Os valores em ordem crescente são : ");
	for(i = 0; i < 10; ++i){
		printf("%1.f ", valores[i]);
	}
	printf("\nA média dos valores vale: %.2f",med);
	printf("\nA distância entre o pontos A e B é: %.2f",dist);
	
	return 0;
}
void ordem_crecente(double vetor[], int k){
	int i, j, aux;
	
	for(i = 0; i < k; ++i){
		for(j = i + 1; j < k; ++j){
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
			
		}
	}
	return 0;
}

double med_elementos(double vetor[],int k ){

int i;
double soma, med; 
    for (i=0;i < k; ++i){
        
        soma += vetor[i];
        med = soma / k;
    }
    return med; 
}

double distancia(double coordenada_1[], double coordenada_2[]){
    double dist;
    dist = sqrt(pow(coordenada_1[0] - coordenada_2[0], 2) + pow(coordenada_1[1] - coordenada_2[1], 2));
    return ;
}
