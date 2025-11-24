#include <iostream>
using namespace std;
#define MAX 20
int main(){
int n, start;
int adj[MAX][MAX];
int visited[MAX];
int q[MAX];
int front=-1,rear=-1;
cout<<"Enter no of nodes";
cin>>n;
cout<<"Enter adjacency matrix";
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
        {
        cin>>adj[i][j];
        }
}
cout<<"Enter starting node";
char s;
cin>>s;
start=s-'A';
for(int i=0; i<n; i++)
visited[i]=0;
int stack[10];

int top=-1;
stack[++top]=start;

cout<<"DFS Traversal";
while(top!=-1){
int node=stack[top--];
if(!visited[node]){
cout<<char(node+'A')<<" ";
visited[node]=1;
}
for(int i=n-1; i>=0; i--)
{
if(adj[node][i]==1&&!visited[i])
{
stack[++top]=i;
}
}
}
return 0;
}
