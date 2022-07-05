#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
map<ll,ll> nice;
ll ok; 
class Graph
{
    int V;    // No. of vertices
    
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
public:
    Graph(int V);  // Constructor

    vector<ll> a,s;
 
    // function to add an edge to graph
    void addEdge(int v, int w);
 
    // prints BFS traversal from a given source s
    void BFS(int s); 
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
    a.resize(V);
    s.resize(V);
    

}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
    adj[w].push_back(v); // Add w to v’s list.
}

 
void Graph::BFS(int v)
{
    // Mark all the vertices as not visited
    vector<bool> visited;
    visited.resize(V,false);
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[v] = true;
    queue.push_back(v);
    //a[0] = s[0];
    nice[0]=0;
 
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        v = queue.front();
        ok = 1e10;
        if(s[v]==-1){
            bool isleaf = 1;
            for (auto adjecent: adj[v])
            {
                if (!visited[adjecent])
                {
                    ok = min(ok,s[adjecent]);
                    isleaf = 0;
                }
            }
            if(!isleaf)
                a[v] = ok-nice[v];
            else
                a[v] = 0;
            for (auto adjecent: adj[v])
            {
                if (!visited[adjecent])
                {
                    nice[adjecent] = a[v]+nice[v];
                }
            }

        }
        else{
            a[v] = s[v]-nice[v];
            for (auto adjecent: adj[v])
            {
                if (!visited[adjecent])
                {
                    nice[adjecent] = s[v];
                }
            }
        }
        //cout << s << " ";
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjecent: adj[v])
        {
            if (!visited[adjecent])
            {
                visited[adjecent] = true;
                queue.push_back(adjecent);
            }
        }
    }
}
 

int main()
{
    //Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d,backs;
    //cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        nice.clear();
        
        Graph g(n);
        for(i=1;i<n;++i){
            cin>>z;
            g.addEdge(z-1,i);
        }
        for( i=0;i<n;++i){
            cin>>g.s[i];
        }
        //cout<<"hi";
        g.BFS(0);
        /*for(i=0;i<n;++i){
            cout<<g.a[i]<<" ";

        }*/
        ans = 0;
        for(i=0;i<n;++i){
            if(g.a[i]<0)
                break;
            ans+=g.a[i];
        }
        if(i<n){
            cout<<"-1\n";
        }
        else
            cout<<ans<<"\n";
        cout<<"\n";
        


        
        
    }
}
