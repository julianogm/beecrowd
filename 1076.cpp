#include <bits/stdc++.h>            //contar o numero de arestas ate todos os vertices alcancaveis e multiplicar o
                                    // resultado por 2, pois como nao tem ciclo, entao sempre passara por uma aresta 2x (ida e volta)

using namespace std;

int V, E, a, b, s;
//vector<vector<int> > AdjMatrix;
//vector <int> visi;
int cont;
int AdjMatrix[105][105];
int visi[105];


void profundidade(int ini){
    //cout << cont << endl;
    //cont++;
	int i;
	visi[ini]=1;
	for(int i=0; i<V; i++){
		if(AdjMatrix[ini][i]==1 && visi[i]==0){
			cont++;
			profundidade(i);
		}
	}
}


int main() {
    int T;
    cin >> T;
    while(T--){
        cin >> s;
        cin >> V >> E;
        cont = 0;
        memset(AdjMatrix,0,sizeof(AdjMatrix));
        memset(visi,0,sizeof(visi));
        //AdjMatrix.assign(V,vector<int> ());                         //nao consegui usar o vector pq nao consegui inicializar
        //for(int i=0;i<100;i++)  AdjMatrix[i].assign(V,0);
        //visi.assign(V,0);
        for (int i = 0; i < E; i++) {
                cin >> a >> b;
                //AdjMatrix[a-1].push_back(b-1);
                //AdjMatrix[b-1].push_back(a-1);
                AdjMatrix[a][b]=1;
                AdjMatrix[b][a]=1;
        }
        profundidade(s);
        cout << cont*2 << endl;
    }
  return 0;
}

