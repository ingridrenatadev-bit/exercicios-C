#include <stdio.h>
int localizador_maior(int lista[], int tamanho){
    int maior = lista[0];
    
    for(int i = 1; i < tamanho; i++){
        
        if(maior < lista[i]){
            maior = lista[i];
        }
    }

    return maior;
}

int main()
{
    int lista[5];
    int tamanho = 5;
    
    for(int i = 0; i < tamanho; i++){
        printf("numero: ");
        scanf("%d", &lista[i]);
    }
    
    int resultado = localizador_maior(lista, tamanho);
    printf("O resultado eh: %d\n", resultado);

    return 0;
}
