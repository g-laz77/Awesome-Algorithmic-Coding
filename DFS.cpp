#include <bits/stdc++.h>
 
#define all(a) (a).begin(),(a).end()
#define gcd __gcd
#define bitcount __builtin_popcount
 
using namespace std;
 
typedef std::vector<int> vi;
typedef std::vector<std::string> vs;
typedef std::pair<int, int> pii;
typedef std::set<int> si;
typedef std::map<std::string, int> msi;

list<int> *adj ;
bool *visited ;

int visit[100005];
int count=0;
void DFS(int sourcenode, int nodes) {
	visited[sourcenode] = true ;
	cout << sourcenode << endl ;
	list<int>::iterator i ;
	for(i = adj[sourcenode].begin(); i!=adj[sourcenode].end(); ++i) {
		if(!visited[*i]) {
			DFS(*i,nodes) ;
		}
	visit[count++]=sourcenode;
	cout<<sourcenode<<" ";
	}
}

int main(int argc, char const *argv[]) {
	int nodes, edges, sourcenode ,u , v;
	cin >> nodes ;
	visited = new bool[nodes] ;
	adj = new list<int>[nodes] ;

	cin >> edges ;
	for(int i=0;i<edges;i++){
		cin >> u >> v ;
		adj[u].push_back(v) ;
	}

	cin >> sourcenode ;
	DFS(sourcenode,nodes) ;
	return 0;
}
