#include <bits/stdc++.h>            // utilizar um grafo auxiliar para fazer os caminhos pares
// exemplo se existe um caminho entre a e b, e um entre b e c no grafo original, no grafo auxiliar
// teria apenas um caminho entre a e c
// e depois disso aplicar o djikstra

using namespace std;
# define INF 0x3f3f3f3f

// iPair ==>  Integer Pair
typedef pair<int, int> iPair;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V;    // No. of vertices

    // In a weighted graph, we need to store vertex
    // and weight pair for every edge


public:
    Graph(int V);  // Constructor
    list< pair<int, int> > *adj;
    // function to add an edge to graph
    void addEdge(int u, int v, int w);

    // prints shortest path from s
    void shortestPath(int s,int d);
};

// Allocates memory for adjacency list
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

// Prints shortest paths from src to all other vertices
void Graph::shortestPath(int src,int dest)
{
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // https://www.geeksforgeeks.org/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);

    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;

    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();

        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;

            //  If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    // Print shortest distances stored in dist[]
    //printf("Vertex   Distance from Source\n");
    //for (int i = 0; i < V; ++i)
      //  printf("%d \t\t %d\n", i, dist[i]);
    if(dist[dest]!=INF) cout<<dist[dest]<<endl;
    else cout <<"-1" <<endl;
}//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/

int main()
{
    int V,E,v1,v2,c,custo;;
    cin >> V >> E;
    //int graph[V][V];
    //memset(graph,0,sizeof(graph[0][0])*2*V);
    //aux.resize(V);
    Graph pais(V);
    //for(int i=0;i<V;i++) aux[i].resize(V);
    while(E--){
        cin >> v1 >> v2 >> c;
        pais.addEdge(v1-1,v2-1,c);
    }
    Graph aux(V);
    for(int i=0;i<V;i++){
        list<pair<int, int> >::iterator itP;
		for(itP = pais.adj[i].begin(); itP!=pais.adj[i].end(); itP++){
			int adj = itP->first;
			int custoAB = itP->second;
			list<pair<int, int> >::iterator itS;
			if(pais.adj[adj].size()){
				for(itS = pais.adj[adj].begin(); itS !=pais.adj[adj].end(); itS++){
					int adj2 = itS->first;
					int custoBC = itS->second;
					aux.addEdge(i, adj2, custoAB + custoBC);
				}
			}
		}
    }
    //graph.resize(V);
    //for(int i=0;i<V;i++) graph[i].resize(V);

    /*for(int i=0;i<V;i++){                     /// criação do grafo auxiliar -> tentei antes com a matriz de adj mas n consegui manipular os dados corretamente
        for(int j=0;i<V;i++){                   /// tive que criar com lista de pares (acima);
            if(aux[i][j]>0 && i!=j){
                custo = aux[i][j];
                aux[i][j]=0;
                for(int k=0;k<V;k++){

                    if(aux[j][k]>0){
                        graph[i][k]=aux[i][k]+custo;
                        graph[k][i]=aux[k][i]+custo;
                        //graph[i][j]=0;
                        //graph[j][i]=0;
                    }

                    /*graph[i][j]=0;
                    graph[j][i]=0;
                    if(aux[j][k]==0){
                    graph[j][k]=aux[j][k]+custo;
                    graph[j][i]=aux[k][j]+custo;
                    }
                }
            }
        }
    }*/
    //for(int i=0;i<V;i++)
     //   for(int j=0;j<V;j++)    cout << << " " ;
    aux.shortestPath(0,V-1);

    return 0;
}
