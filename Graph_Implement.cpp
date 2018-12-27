#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int Ver;
    vector<int> *array_list;
    public:
    Graph(int v)
    {
        this->Ver=v;
        array_list=new vector<int>[Ver];
    }
    void addEdge(int u,int v)
    {
        array_list[u].push_back(v);
        array_list[v].push_back(u);
    }
    void printGraph()
    {
        for(int i=0;i<Ver;i++)
        {
            for(auto x:array_list[i])
            cout<<"->"<<x;
            cout<<endl;
        }
    }
    void BFS(int src)
    {
        bool visited[Ver];
        for(int i=0;i<Ver;i++)
        visited[i]=false;
        visited[src]=true;
        list<int> queue;
        queue.push_back(src);
        vector<int>::iterator i;
        while(!queue.empty())
        {
            src=queue.front();
            cout<<src<<" ";
            queue.pop_front();
            for(i=array_list[src].begin();i!=array_list[src].end();i++)
            {
                if(!visited[*i])
                {
                    visited[*i]=true;
                    queue.push_back(*i);
                }
            }
        }
    }
};
int main() {
	Graph g(4);
	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
    g.printGraph();
    cout<<"DFS\n";
    g.BFS(2);
	return 0;
}

/*Example
->1->2->2
->0->2
->0->1->0->3
->2->3->3
DFS
2 0 1 3 */
