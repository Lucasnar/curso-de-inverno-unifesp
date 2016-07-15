#include<cstdio>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

// A funcao estava incorreta e nao mudei 
// nada (so coloquei o print) e escrevi outra.
//int gcd(){
//    while(a % b){
//        if (a <b )
//            swap(a, b);
//        a = a/b;
//    }
//    printf("%d\n", b);
//    return b;
//}

int gcd(unsigned int a, unsigned int b){
    return b == 0 ? a: gcd(b, a%b);
}


// Nao precisa do mmc.
//int mmc(int a, int b, int x){
   //return a*b / x;
//}

// Essa tava certinha.
int apow(int n, int m){
    int r = 1;
    //printf(" %d %d\n", a, b);
    //printf(" %d %d\n", n, m);
    while(m){
        if (m & 1)
            r *= n;
        m >>=1;
        //printf("che\n");
        n *= n;
    }
    return r;
}

// O 'i-size_s-i' tava errado.
unsigned int to_bin(string s){

    int size_s = s.size();
    unsigned int c = 0;
    for(int i = size_s-1; i>=0; --i){
        if (s[i] == '1'){
            //printf("s[%d] = %d\n", i, s[i]);
            c += apow(2, (size_s-1)-i);

        }
    }
    return c;
}

int main(){
    int t, c=0;
    string s1;
    string s2;

    scanf(" %d", &t);

    while(t--){

        //scanf(" %d %d", s1, s2);
        cin >> s1 >> s2;

        unsigned int a = to_bin(s1);
        int b = to_bin(s2);
        //printf("%d %d\n", a, b);

        //printf("gcd(%d, %d) = %d\nmmc(%d, %d) = %d\n",a, b, gcd(a, b), a, b, mmc(a, b,gcd(a, b)));
        //if (mmc(a, b, gcd(a, b)) == 1)
        if (gcd(a, b) == 1)
            printf("Pair #%d: Love is not all you need!\n", ++c);
        else
            printf("Pair #%d: All you need is love!\n", ++c);

    }

    return 0;
}
