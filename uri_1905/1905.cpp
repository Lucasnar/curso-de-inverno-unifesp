#include<bits/stdc++.h>

#define pii pair<int,int>

using namespace std;

int grafo[8][8];
int visitados[8][8];
int flag, c;

void bfs(pii inicio){
    visitados[inicio.first][inicio.second] = 1;
    queue <pii> q;
    q.push(inicio);
    while(!q.empty()){
        if (!visitados[q.front().first+1][q.front().second] && grafo[q.front().first+1][q.front().second]){
            q.push(pii(q.front().first+1, q.front().second));
            visitados[q.front().first+1][q.front().second] = 1;
            //printf("\n!\n");
        }
        if (!visitados[q.front().first-1][q.front().second] && grafo[q.front().first-1][q.front().second]){
            q.push(pii(q.front().first-1, q.front().second));
            visitados[q.front().first-1][q.front().second] = 1;
            //printf("\n!\n");
        }
        if (!visitados[q.front().first][q.front().second+1] && grafo[q.front().first][q.front().second+1]){
            q.push(pii(q.front().first, q.front().second+1));
            visitados[q.front().first][q.front().second+1] = 1;
            //printf("\n!\n");
        }
        if (!visitados[q.front().first][q.front().second-1] && grafo[q.front().first][q.front().second-1]){
            q.push(pii(q.front().first, q.front().second-1));
            visitados[q.front().first][q.front().second-1] = 1;
            //printf("\n!\n");
        }
        //printf("entrou aqui %d vez(es)!\n", ++c);
        //printf("q.front().first: %d q.front().second: %d\n", q.front().first, q.front().second);
        q.pop();
    }
}


int main(){
    int t, resp;

    scanf(" %d", &t);

    while(t--){
        flag = 0;
        c=0;

        memset(visitados, 0, sizeof visitados);
        memset(grafo, 0, sizeof grafo);

        //for(int i = 0; i<25; ++i)
            //visitado[i]=0;

        for(int i =1; i<=5; ++i)
            for(int j =1; j<=5; ++j){
                scanf(" %d", &grafo[i][j]);
                grafo[i][j] = !grafo[i][j];
            }

        bfs(pii(1,1));

        //printf("visitados: \n");
        //for(int i = 1; i<=5; ++i){
            //for(int j = 1; j<=5; ++j)
                //printf("%d", visitados[i][j]);
            //printf("\n");
        //}
        //printf("\n");

        //printf("grafo: \n");
        //for(int i = 0; i<5; ++i){
            //for(int j = 0; j<5; ++j)
                //printf("%d", grafo[i][j]);
            //printf("\n");
        //}
        //printf("\n");

        printf(visitados[5][5] ? "COPS\n" : "ROBBERS\n");
    }

    return 0;
}
