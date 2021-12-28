#include<iostream>
#include<climits>
using namespace std;

int distance(int dist[], bool a[]) // finding minimum distance
{
    int minimum = INT_MAX, index;

    for(int i = 0; i < 5; i++)
    {
        if(a[i]==false && dist[i] <= minimum)
        {
            minimum = dist[i];
            index = i;
        }
    }
    return index;
}

void Dijkstra(int graph[5][5],int src)
{
    int dist[5];
    bool a[5];
    int i,j;


    for(i = 0; i < 5; i++)
    {
        dist[i] = INT_MAX;
        a[i] = false;
    }

    dist[src] = 0;

    for(i = 0; i<5; i++)
    {
        int m = distance(dist,a);
        a[m]=true;
        for(j = 0; j<5; j++){
            if(!a[j] && graph[m][j] != 0 && dist[m]+graph[m][j]<dist[j])
                dist[j]=dist[m]+graph[m][j];
        }
    }
    cout<<"Vertex\t\tDistance from source vertex"<<endl;
    for(int k = 0; k<5; k++)
    {
        char str=65+k;
        cout<<str<<"\t\t\t"<<dist[k]<<endl;
    }
}

int main()
{
    int graph[5][5]={
        {0, 10, 3, 0, 0},
        {0, 0, 1, 2, 0},
        {0, 4, 0, 0, 0},
        {0, 0, 0, 0, 7},
        {0, 0, 0, 9, 0}};
    Dijkstra(graph,0);
    return 0;
}
