#include <bits/stdc++.h>            //aplicar busca em largura, e contar todos os vertices que sao alcançaveis

using namespace std;

typedef pair<int, int> ii;      // In this chapter, we will frequently use these
typedef vector<ii> vii;      // three data type shortcuts. They may look cryptic
typedef vector<int> vi;   // but shortcuts are useful in competitive programming

int V, E, a, b, s;
vector<vii> AdjList;
vi p;

int main() {

    while(cin >> V >> E){
        AdjList.assign(V, vii()); // assign blank vectors of pair<int, int>s to AdjList
        for (int i = 0; i < E; i++) {
            scanf("%d %d", &a, &b);
            AdjList[a-1].push_back(ii(b-1, 0));
            AdjList[b-1].push_back(ii(a-1, 0));
        }

        cin >> s;
        s--;
        stack<int> tamanho;

        // BFS routine
        // inside int main() -- we do not use recursion, thus we do not need to create separate function!
        vi dist(V, 1000000000); dist[s] = 0;      // distance to source is 0 (default)
        queue<int> q; q.push(s);                                  // start from source
        p.assign(V, -1); // to store parent information (p must be a global variable!)

        while (!q.empty()) {

            int u = q.front();
            tamanho.push(u);
            q.pop();

            for (int j = 0; j < (int)AdjList[u].size(); j++) {
                ii v = AdjList[u][j];                           // for each neighbors of u
                if (dist[v.first] == 1000000000) {
                    dist[v.first] = dist[u] + 1;                  // v unvisited + reachable
                    p[v.first] = u;          // addition: the parent of vertex v->first is u
                    q.push(v.first);                              // enqueue v for next step
                }
            }
        }
        cout << tamanho.size()<< endl;

    }
    return 0;
}
