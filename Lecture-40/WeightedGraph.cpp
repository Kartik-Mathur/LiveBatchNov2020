// WeightedGraph
#include <iostream>
#include <unordered_map>
#include <list>
#include <set>
using namespace std;

#define pb push_back
#define mp make_pair

template <typename T>
class Graph {
	unordered_map<T, list<pair<T, int> > > h;
public:

	void addEdge(T src, T des, int dist, bool bidir = true) {
		h[src].pb(make_pair(des, dist));
		if (bidir) {
			h[des].pb(make_pair(src, dist));
		}
	}

	void print() {
		for (auto node : h) {
			cout << node.first << ": ";
			for (auto neighbour : node.second) {
				cout << "(" << neighbour.first << ", " << neighbour.second << ") ";
			}
			cout << endl;
		}
	}

	void dijkstra(T src) {

		unordered_map<T, int> distance;
		for (auto node : h) {
			distance[node.first] = INT_MAX;
		}

		distance[src] = 0;

		set<pair<int, T> > s;
		s.insert(mp(0, src));

		while (!s.empty()) {
			auto node = *(s.begin());
			s.erase(s.begin());

			int parentDist = node.first;
			T parent = node.second;

			for (auto children : h[parent]) {
				int edgeDist = children.second;
				if (distance[children.first] > parentDist + edgeDist) {

					auto f = s.find(mp(distance[children.first], children.first)); // returns the address
					if (f != s.end()) {
						s.erase(f);
					}

					distance[children.first] = parentDist + edgeDist;
					s.insert(mp(distance[children.first], children.first));
				}
			}

		}

		for (auto node : distance) {
			cout << "Distance of " << node.first << " from " << src << " is " << node.second << endl;
		}

	}

};

int main() {

	// Graph<string> g;
	Graph<string> g;

	// g.addEdge(1, 2, 1);
	// g.addEdge(1, 3, 4);
	// g.addEdge(1, 4, 8);
	// g.addEdge(3, 2, 2);
	// g.addEdge(3, 4, 3);




	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Bhopal", "Agra", 2);
	g.addEdge("Bhopal", "Mumbai", 3);
	g.addEdge("Jaipur", "Mumbai", 8);

	// g.print();
	g.dijkstra("Amritsar");


	return 0;
}