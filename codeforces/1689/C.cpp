#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
// C++ program to print DFS traversal from
// a given vertex in a given graph
//#include <bits/stdc++.h>
using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
class Graph {
public:
    map<int, bool> visited;
    map<int,int> nice;
    map<int, list<int> > adj;

    // function to add an edge to graph
    void addEdge(int v, int w);

    // DFS traversal of the vertices
    // reachable from v
    void DFS(int v,int h);
    //ll BFS(int v);
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v); // Add w to v’s list.
}

void Graph::DFS(int v,int h)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i,h+1);
    
    nice[v] = h;
    return;
}


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,l,r,x,y,ans;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        ans = 0;
        Graph g;
        cin>>n;
        for(i=1;i<n;++i){
            cin>>k>>z;
            g.addEdge(k-1,z-1);
        }
        g.DFS(0,0);
        ans = 0;
        for(auto &it : g.adj){
            if((it.first!=0 && it.second.size()<3 )|| (it.first==0 && it.second.size()<2 )){
                z = g.nice[it.first];
                if((it.first!=0 && it.second.size()==2 ))
                    ans = max(ans,n-(2*(z+1)));
                else if ((it.first!=0 && it.second.size()==1 ))
                    ans = max(ans,n+1-(2*(z+1)));
                else if((it.first==0 && it.second.size()<2 ))
                    ans = n-2;
            }
        }


        cout<<ans<<"\n";

    }
}
