#include <bits/stdc++.h>
using namespace std;

typedef long long i6;;
typedef pair<i6, i6> p6;
const int INF = 1e9;

vector<i6> dijkstra(i6 s, const vector<vector<p6>>& graph)
{
    vector<i6> ans(graph.size() + 1, INF);
    ans[s] = 0;
    set<p6> q;
    q.insert({0, s});
    while(!q.empty())
    {
        p6 p = (*q.begin());
        q.erase(q.begin());
        i6 dist = p.first;
        i6 node = p.second;
        if(dist > ans[node])
        {
            continue;
        }
        for(auto& c : graph[node])
        {
            i6 cand = dist + c.second;
            if(cand < ans[c.first])
            {
                ans[c.first] = cand;
                q.insert({cand, c.first});
            }
        }
    }
    return ans;
}

int main()
{
    int n, m, q, s;
    while(true)
    {
        cin >> n >> m >> q >> s;
        if(n == m && m == q && q == s && s == 0)
        {
            break;
        }
        i6 u, v, w;
        vector<vector<p6>> graph(n);
        for(int i = 0; i < m; i++){
            i6 u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
        }
        auto ans = dijkstra(s, graph);
        for(int i = 0; i < q; i++)
        {
            int dest;
            cin >> dest;
            if(ans[dest] < INF)
            {
                cout << ans[dest] << endl;
            }
            else
            {
                cout << "Impossible" << endl;
            }
        }
    }
    return 0;
}