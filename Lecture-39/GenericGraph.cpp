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

	void bfs(T start) {

		queue<T> q;
		unordered_map<T, bool> visited;
		q.push(start);
		visited[start] = true;
		unordered_map<T, int> distance;
		distance[start] = 0;

		while (!q.empty()) {
			T node = q.front();
			q.pop();
			cout << node << " ";

			for (auto children : h[node]) {
				if (!visited[children]) {
					q.push(children);
					visited[children] = true;
					distance[children] = distance[node] + 1;
				}
			}
		}
		cout << endl;
	}

	int SSSP(T start, T des) {

		queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;

		q.push(start);
		visited[start] = true;
		unordered_map<T, int> distance;
		distance[start] = 0;
		parent[start] = start;

		while (!q.empty()) {
			T node = q.front();
			q.pop();
			for (auto children : h[node]) {
				if (!visited[children]) {
					q.push(children);
					visited[children] = true;
					distance[children] = distance[node] + 1;
					parent[children] = node;
				}
			}
		}
		cout << "Printing Path: ";
		T temp = des;
		while (temp != parent[temp]) {
			cout << temp << "<--";
			temp = parent[temp];
		}
		cout << temp << endl;
		return distance[des];
		// cout << endl;
		// cout << "Printing all the distances: ";
		// for (auto node : distance) {
		// 	cout << "Distance of " << node.first << " from " << start << " is " << node.second << endl;
		// }
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

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph<int> g;
	int no_of_edges, no_of_nodes;
	cin >> no_of_nodes >> no_of_edges;

	int u, v;
	for (int i = 0 ; i < no_of_edges ; i++) {
		cin >> u >> v;
		g.addEdge(u, v);
	}
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");


	g.printList();
	cout << "BFS :";
	g.bfs(0);
	int ans = g.SSSP(0, 5);
	cout << "Minimum Distance of " << 5 << " from " << 0 << ": " << ans  << endl;

	return 0;
}



















