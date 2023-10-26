#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int goodNodes(int N, int K, vector<pair<int, int>>& edges) {
    // Create a hashmap to store the number of connections for each node
    unordered_map<int, int> connections;

    // Count the connections for each node
    for (auto edge : edges) {
        int node1 = edge.first;
        int node2 = edge.second;
        connections[node1]++;
        connections[node2]++;
    }

    // Count the upright nodes (nodes with at least K connections)
    int uprightNodes = 0;
    for (auto it : connections) {
        if (it.second >= K) {
            uprightNodes++;
        }
    }

    return uprightNodes;
}

int main() {
    int N, K;
    cout << "Enter the number of edges and the value of K: ";
    cin >> N >> K;

    vector<pair<int, int>> edges(N);
    cout << "Enter the edges (pairs of nodes connected by an edge):" << endl;
    for (int i = 0; i < N; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        edges[i] = make_pair(node1, node2);
    }

    int uprightNodes = goodNodes(N, K, edges);
    cout << "Number of upright nodes in the given graph: " << uprightNodes << endl;

    return 0;
}



