#include <stdio.h>

int main(){
    int n;
    
    do{
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if(n <= 0){
      printf("Erro! o vetor tem que ser maior que 0!\n");
    }

    }while(n <= 0);

    float r[n];
    
    for(int i = 0; i < n; i++){
        printf("Valor: ");
        scanf("%f", &r[i]);
    }
    
    float valores[n];
    int cont[n];
    int totalU = 0;
    
    for(int i = 0; i < n; i++){
        int contado = 0;
        for(int j = 0; j < totalU; j++){
            if (r[i] == valores[j]){
                cont[j]++;
                contado = 1;
                break;
            }
        }
        
        if(!contado){
            valores[totalU] = r[i];
            cont[totalU] = 1;
            totalU++;
        }
    }
    
    int mais = 0, menos = 0;
    
    for(int i = 1; i < totalU; i++){ 
        if(cont[i] > cont[mais]) {
            mais = i;
        }
        if(cont[i] < cont[menos]) {
            menos = i;
        }
    }
    
    for(int i = 0; i < totalU; i++){
        printf("%.2f: %d vez(es)", valores[i], cont[i]);
        
        if(i == mais){
            printf(" +"); 
        } else if (i == menos) {
            printf(" -");  
        }
        printf("\n");
    }
}