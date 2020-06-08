#include <bits/stdc++.h>

using namespace std;

vector <vector<int> > adj;
vector <int> cor;

/*bool isBipartite(int n){
    cor.assign(n,-1);
    cor[0] = 1; // Mark colour as 1 for first vertex.
    queue <int> q;
    q.push(0);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (int i=0;i<n;i++)
        {
            if (adj[temp][i] && cor[i] == -1) //if there is an edge, and colour is not assigned
            {
                cor[i] = 1 - cor[temp];
                q.push(i);
            }
            else if (adj[temp][i] && cor[i] == cor[temp]) // if there is an edge and both vertices have same colours
                return 0;                                   // graph is not bipartite
        }
    }
    return 1;
}*/
bool isBipartite(int n)
    {
	cor.assign(n, -1);
	queue<int> q;
	q.push(0);
	cor[0] = 0;
	bool ispartite = true;
	while (!q.empty() && ispartite){
		int u = q.front(); q.pop();

		for (int j = 0 ; j < adj[u].size(); ++j){
			if (cor[adj[u][j]] != -1 && cor[adj[u][j]] == cor[u]){
				ispartite = false;
				break;
			}
			else if (cor[adj[u][j]] == -1){
				cor[adj[u][j]] = cor[u] ^ 1;
				q.push(adj[u][j]);
			}
		}
	}
	while (!q.empty()) q.pop();
	cor.clear();
	return ispartite;
}
int main(){
    int n,m,id,idamg;
    string amg;
    stringstream ss;


    while(cin >> n){
        if(n==0) break;
        //adj.assign (n+10,vector<int> ());
        //cor.assign (n,-1);
        //adj.resize(n);
        //cor.resize(n,-1);
        //for(int i=0;i<n;i++)
          //  adj[i].resize(n);
        adj.assign(n,vector<int> ());

        for(int i=0;i<n;i++){
            //cout<<"1"<< endl;
            cin>>id;
            //cout << id << endl;
            getchar();
            getline(cin,amg);
            //cout<<"x"<< endl;
            ss<<amg;                       ////////
            while(ss >> idamg){
                //ss.clear();
                //cout << idamg;
                adj[id-1].push_back(idamg-1);         // lista de adj
                //cout << adj[id-1][0];
                //adj[id-1][idamg-1]=1;                   // matriz de adj
                //adj[idamg-1][id-1]=1;                   // matriz de adj
                //cout << idamg;
            }
            //cout<<"z"<< endl;          ////////
            ss.clear();
        }
        if(isBipartite(n)) cout<<"SIM"<<endl;
        else cout << "NAO" << endl;
        adj.clear();
    }
}
