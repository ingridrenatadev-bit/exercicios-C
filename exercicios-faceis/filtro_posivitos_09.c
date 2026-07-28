#include <stdio.h>

int filtro_positivos(int lista[], int lista_nova[], int tamanho){
    int j = 0;
    
    for(int i = 0; i < tamanho; i++ ){
        if(lista[i] > 0){
            lista_nova[j] = lista[i];
            j++;
        }
    }
    
    return j;
}

int main()
{
    int lista[10];
    int tamanho = 10;
    int lista_nova[10];
    
    for(int i = 0; i < tamanho; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &lista[i]);
    }
    
    int resultado = filtro_positivos(lista, lista_nova, tamanho);
    printf("A lista nova eh:\n");
    
    for(int i = 0; i < resultado; i++){
        printf("%d\n", lista_nova[i]);
    }
    
    return 0;
    
}
