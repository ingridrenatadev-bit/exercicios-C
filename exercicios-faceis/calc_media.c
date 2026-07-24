#include <stdio.h>

float calc_media(float notas[], int tamanho){
    float media;
    float soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma = soma + notas[i];
    }
    media = soma / 4;
    
    return media;
}  

int main()
{
    float notas[4];
    int tamanho = 4;
    
    for(int i = 0; i < tamanho; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }
    
    float resultado_media = calc_media(notas, tamanho);
    printf("A media eh: %.2f\n", resultado_media);
    
    return 0;
}