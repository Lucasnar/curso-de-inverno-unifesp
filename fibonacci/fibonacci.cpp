#include<cstdio>

int fb_tabela(int n){
    int array[n+1];

    array[1] = array[2] = 1;

    for(int i = 3; i<=n; ++i)
        array[i] = array[i-1] + array[i-2];

    return array[n];
}

int fb(int n){

    int atual = 1;
    int anterior = 1;
    int proximo;

    for(int i = 3; i<=n; ++i){
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main(){
    int n;

    //scanf(" %d", &n);
    n=10;

    printf("Sequencia de %d fb: ", n);
    for(int i = 1; i<=n; ++i)
        printf("%d ", fb(i));
    printf("\n");

    return 0;
}
