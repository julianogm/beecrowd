#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > adj ;          // lista de adjacencias
vector<int> aux ;
//int adj[10005][10005];
const int NVISITADO = 0;
const int VISITADO = 1;
const int CONCLUIDO = 2;
int ciclo;



void profundidade(int n){                           //busca em profundidade
    if(ciclo==1) return;
	aux[n] = VISITADO;                                  //marca o vertice atual como visitado
	for (int i=0; i<adj[n].size(); i++){
            if (aux[adj[n][i]] == VISITADO){        // usando a lista pra buscar os vizinhos, verifica se o vizinho ja foi visitado
                ciclo=1;                                // e caso sim, entao existe um ciclo
                return;
			}
            else if (aux[adj[n][i]] == NVISITADO)       // caso nao tenha sido visitado, chama busca em profundidade pra esse mesmo vizinho
                profundidade(adj[n][i]);
	}
	aux[n] = CONCLUIDO;                             // depois de visitar todos os vizinhos de n, marca o mesmo como concluido
}

int main(){
    int t,n,m,a,b,i;

    //adj.assign(10005,vector<int> ());
    //aux.assign(10005,0);

    cin>>t;
    while(t--){

        cin>>n>>m;
        adj.assign(n,vector<int> ());       // ajusta os tamanhos dos vetores de acordo com o numero de documentos
        aux.assign(n,0);
        //adj.resize(n+10);
        //aux.resize(n+10);
        //cout << adj.size();

        for(i=0;i<m;i++){
            cin>>a>>b;
            //adj[a][i]=b;
            adj[a-1].push_back(b-1);
        }
        ciclo = 0;
        //cin >> a;
        for(i=0;i<n;i++){
            if(aux[i]==0) profundidade(i);        // se o vertice ainda nao foi marcado, entao chama a busca a partir dele
            if(ciclo==1)   break;
        }
        if(ciclo==1)   cout << "SIM\n";
        else    cout << "NAO\n";

        adj.clear();
        aux.clear();
    }
}
