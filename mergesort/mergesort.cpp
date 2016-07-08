#include<cstdio>

int a[] = {3, 5, 1, 6, 4, 2, 9};
int c=0, meio;

void merge(int p, int meio, int r){
    int aux[7];
    int i =p, j=meio+1, k=0;

    for(;i<meio && j<r;)
        if (a[i] < a[j])
            aux[k++] = a[i++];
        else
            aux[k++] = a[j++];

    while(i < meio) aux[k++] = a[i++];
    while(j < r) aux[k++] = a[j++];

    //for(int l =p; l<r; l++)
        //a[l] = aux[l];

    printf("p %d meio %d r %d\n", p, meio, r);
    printf("%d c: [", c);
    for(int l =p; l<r; l++)
        printf("%d ", a[l]);
    printf("]\n");
}

void merge_sort(int p, int r){
    if (p<r){
        meio = r/2;
        ++c;
        //printf("%d\n", c);
        merge_sort(p, meio);
        merge_sort(meio+1, r);
        merge(p, meio, r); 
    }
}

int main(){

    merge_sort(0, 6);

    printf("Depois do sort: [ ");
    for(int i =0; i<=6; ++i)
        printf("%d ", a[i]);
    printf("]");


    return 0;
}
