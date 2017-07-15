
/*	
*	autor: Lucas Rafael Barbosa Lopes
*	Email: lucas7844@gmail.com
*	Data: 14 de Julho de 2017.   (14/07/2017)
*/
#include <stdio.h>
#define VALOR_MINIMO 0.000001

float elevartest(float base, int expo){
	float resultante;
	int contador=1;
		if (base == 0){
			
				return 0;
			
			}else if((expo == 0) && (base != 0)){
				
				return 1;
				
					}else if (expo == 1){
							return base;

					}else if (expo > 0){
						resultante = base;
						do {
							resultante = resultante * base;
							contador ++;
							}while(contador < expo);
							return resultante;
					}else if (expo < 0){
						
					}

					return 0;
}

float elevar(float base, int expo){
	float resultante;
	int contador=1;
		if (base == 0){
			
				return 0;
			
			}else if((expo == 0) && (base != 0)){
				
				return 1;
				
					}else if (expo == 1){
							return base;

					}else if (expo > 0){
						resultante = base;
						do {
							resultante = resultante * base;
							contador ++;
							}while(contador < expo);
							return resultante;
					}else if (expo < 0){
						return 1 / elevartest(base, (expo*(-1)));
					}

					return 0;
}

float raiz(float valor, int quanto){
	float raiz = 0;
	int y= quanto%2;

	if (valor > 0){
		do{
		raiz+= VALOR_MINIMO;
		}while(elevar(raiz, quanto) < valor);
		return raiz;
	} else if(valor < 0 && y==1){
		do{
			raiz+= VALOR_MINIMO;
		}while(elevar(raiz, quanto) < valor);
		return raiz;
	}else {
		printf("\nERRO, nao possui solucao!\n");
	}
		
}
