// GenericGraph.cpp
#include <iostream>
#include <list>
#include <unordered_map>
#include <map>
#include <cstring>
#include <queue>
using namespace std;

#define pb push_back

template <typename T>
class Graph {
	unordered_map<T, list<T> > h;

	void dfsHelper(T start, unordered_map<T, bool> &visited) {
		visited[start] = true;
		cout << start << " ";

		for (auto children : h[start]) {
			if (!visited[children]) {
				dfsHelper(children, visited);
			}
		}
	}
public:

	void addEdge(T u, T v, bool bidir = true) {
		h[u].pb(v);
		if (bidir) {
			h[v].pb(u);
		}
	}

	void printList() {
		for (auto node : h) {
			cout << node.first << ": ";
			for (auto neighbour : node.second) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}

	void dfs(T start) {
		int component = 1;
		unordered_map<T, bool> visited;
		dfsHelper(start, visited);

		for (auto node : h) {
			if (!visited[node.first]) {
				dfsHelper(node.first, visited);
				component++;
			}
		}

		cout << endl << "No of components: " << component << endl;
	}

};

// 5 6
// 0 1
// 1 2
// 2 3
// 1 3
// 4 3
// 0 4
int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	Graph<int> g;

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(3, 4);
	g.addEdge(3, 2);
	g.addEdge(3, 5);

	g.addEdge(11, 12);
	g.addEdge(13, 12);
	g.addEdge(14, 12);

	g.addEdge(114, 115);
	g.addEdge(114, 116);
	g.addEdge(114, 117);
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");


	g.dfs(0);



	return 0;
}



















