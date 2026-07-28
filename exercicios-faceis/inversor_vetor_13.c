#include <stdio.h>

void inversor(int lista[], int tamanho){
    int inicio = 0;
    int fim = tamanho - 1;
    int aux;
    
    while(inicio < fim){
        aux = lista[inicio];
        
        lista[inicio] = lista[fim];
        
        lista[fim] = aux;
        
        
        inicio++;
        fim--;
    }
    
}

int main()
{
   int lista[5];
   int tamanho = 5;
   
    for(int i = 0; i < tamanho; i++){
       printf("Digite o numero %d: ", i + 1);
       scanf("%d", &lista[i]);
    }
    
    inversor(lista, tamanho);
    
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", lista[i]);
    }
    return 0;
}
