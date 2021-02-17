// GenericGraph.cpp
#include <iostream>
#include <list>
#include <unordered_map>
#include <map>
#include <cstring>
using namespace std;

#define pb push_back

template <typename T>
class Graph {
	unordered_map<T, list<T> > h;
public:

	void addEdge(T u, T v, bool bidir = false) {
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
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph<string> g;

	g.addEdge("Putin", "Trump");
	g.addEdge("Putin", "Modi");
	g.addEdge("Putin", "Pope");
	g.addEdge("Modi", "Trump", true);
	g.addEdge("Modi", "Yogi", true);
	g.addEdge("Yogi", "Prabhu");
	g.addEdge("Prabhu", "Modi");


	g.printList();




	return 0;
}



















