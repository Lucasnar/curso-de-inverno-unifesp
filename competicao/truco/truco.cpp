#include<cstdio>
//#include<bits/stdc++>

int jogo1[6];
int jogo2[6];
int j1=0, j2=0;

//1, 2, 3, 4, 5, 6, 7, 11, 12, 13
int converte(int n){
    if (n == 1)
        n = 8;
    else if( n== 2)
        n = 9;
    else if( n== 3)
        n = 10;
    else if( n== 4)
        n = 1;
    else if( n== 5)
        n = 2;
    else if( n== 6)
        n = 3;
    else if( n== 7)
        n = 4;
    else if( n== 11)
        n = 6;
    else if( n== 12)
        n = 5;
    else if( n== 13)
        n = 7;
    return n;
}


void comp(int n1, int n2){
    n1 = converte(n1);
    n2 = converte(n2);
    n1 > n2 ? j1++ : j2++;
}



int main(){
    int n, r1=0, r2=0;


    scanf(" %d", &n);
    //cin >> n;

    while(n--){
        j1 = j2 =0;
        for (int i =0; i<3; ++i)
            scanf(" %d", &jogo1[i]);

        for (int i =0; i<3; ++i)
            scanf(" %d", &jogo2[i]);

        for (int i =0; i<3; ++i){
            if (jogo1[i] == jogo2[i])
                j1++;
            else
                comp(jogo1[i], jogo2[i]);
        }
        j1 >= j2 ? r1++ : r2++;
    }
    printf("%d %d \n", r1, r2);

    return 0;
}
