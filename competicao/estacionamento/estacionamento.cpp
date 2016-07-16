#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int placas[9999+15];

int main(){
    int c, n, t, p, v;
    char ch;

    while(scanf(" %d %d ", &c, &n) == 2){
        t = 0;

        for(int i = 0; i<n; ++i){
            //scanf(" %c ", &ch);
            cin >> ch;
            //printf(" %c\n", ch);
            if (ch == 'C'){
                //scanf(" %d %d ", &p, &v);
                cin >> p;
                cin >> v;
                //printf(" p %d v %d\n", p, v);
                if(v <= c){
                    placas[p] = v;
                    c -= v;
                    t += 10;
                }
            }
            else{
                //scanf(" %d ", &p);
                cin >> p;
                c += placas[p];
            }
        }
        printf("%d\n", t);

    }

    return 0;
}
