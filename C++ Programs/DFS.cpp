#include<iostream>
#include<conio.h>
using namespace std;

class Graph
{
    public:
        int v,e,x,y;
        int adjM[100][100];
        Graph()
        {
            for(int i=0;i<100;i++)
            {
                for(int j=0;j<100;j++) adjM[i][j]=0;
            }
            cout<<"\nENTER THE NUMBER OF VERTICES AND EDGES: ";
            cin>>v>>e;
            cout<<"\nENTER THE ADJACENCY MATRIX (containing Os and 1s):\n";
            for(int i=0;i<v;i++)
            {
               for(int j=0;j<v;j++) cin>>adjM[i][j];
            }
            cout<<endl<<"GRAPH IS READY!!\n\n";
        }
};



void dfsTrav(Graph g, int start, int v[])
{
    v[start]=1;
    cout<<start+1<<"\t";
    for(int i=0;i<g.v;i++)
    {
        if(g.adjM[start][i]==1&&v[i]==0)
        dfsTrav(g,i,v);
    }
}

int main()
{
    Graph g;
    cout<<"ENTER THE STARTING VERTEX FOR DFS TRAVERSAL: ";
    int start,visited[g.v]={0},c=0;
    cin>>start;
    dfsTrav(g,start-1,visited);
    cout<<"\nDFS TRAVERSAL COMPLETE.\n...........\nPress any key to exit.";
    getch();
}
