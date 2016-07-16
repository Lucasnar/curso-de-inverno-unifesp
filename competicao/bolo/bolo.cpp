#include<cstdio>

int main(){
    int a, b, c, d, count=0;

    scanf(" %d %d %d", &a, &b, &c);

    while(a >= 2 && b >=3 && c >=5){
        a -= 2;
        b -= 3;
        c -= 5;
        count++;
    }
    printf("%d\n", count);


    return 0;
}
