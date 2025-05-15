#include <stdio.h>

void imprime(){
	printf("teste\n");
}

float soma(float A, float B){
	float res;
	res = A + B;
	return res;}

float subtracao(float A, float B){
	float res1;
	res1 = A - B;
	return res1;}

float  multiplicacao(float  A, float  B){
	float res2;
	res2 = A * B;
	return res2;}
	
float divisao(float A, float B){
	float res3;
	res3 = A / B;
	return res3;}
	
float  media(float A, float B){
	float res4;
	res4 = (A + B) /2;
	return res4;}

float  porcentagem(float A, float B){
	float res5;
	res5 = ((A*B)/100);
	return res5;}

int main(){
	float v1 , v2, res, res1, res2, res3, res4, res5;
	int opcao;
	scanf("%f", &v1);
	scanf("%f", &v2);
	
	
	printf("[1]+\n");
    printf("[2]-\n");
	printf("[3]*\n");
	printf("[4]/\n");
	printf("[5]Media\n");
	printf("[6]Porcentagem\n");
    printf("Escolha uma opcao\n");
	scanf("%d",&opcao);
	
	res = v1 + v2;
	res1 = v1 - v2;
	res2 = v1 * v2;
	res3 = v1 / v2;
	res4 = (v1 + v2) /2;
	res5 = ((v1*v2)/100);
	
	switch (opcao) {
    	case 1: 
            
            printf("Res = %.2f\n", res);
            break;
        case 2:
            printf("Res = %.2f\n", res1);
            break;
        case 3:
            printf("Res = %.2f\n", res2);
            break;
        case 4:
            printf("Res = %.2f\n", res3);
            break;
        case 5:
            printf("Res = %.2f\n", res4);
            break;
        case 6:
            printf("Res = %.2f\n", res5);
            break;
        default:
			printf("Opcao Invalida! Tente Novamente\n");
			return 1;
		}
	

}

