#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter number of nodes and edges : " << endl;
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        cout << "Enter nodes between whom there is edge:" << endl;
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i <= n; ++i) {
        cout << "adj[" << i << "]: ";
        for (int j = 0; j < adj[i].size(); ++j) {
            cout << adj[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}