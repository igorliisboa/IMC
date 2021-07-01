#include <stdio.h>
#include <math.h>

int main(){
    float peso, altura;
    printf("Digite o peso: ");
    scanf("%f",&peso);
    printf("Digite a altura: ");
    scanf("%f",&altura);

    float imc;
    float potencia;
    potencia = pow(altura,2);
    imc = peso / potencia;
    printf("\nSeu IMC e de: %.2f",imc);

    if (imc < 18.5){
        printf("\nMagreza!"); 
    }else if (imc > 18.5 && imc < 24.9){
        printf("\nNormal");
    } else if (imc > 25.0 && imc < 29.9){
        printf("\nSobrepeso I");
    } else if (imc > 30.0 && imc < 39.9){
        printf("\nObesidade II");
    } else if (imc > 40.0){
        printf("\nObesidade grave!");
    }
}