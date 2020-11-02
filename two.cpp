void abc(vector<int> g[],int i,int visited[],vector<int> &a)
{
    visited[i]=1;
    a.push_back(i);
    for(int x: g[i])
    {
    if(visited[x]==-1)
        abc(g,x,visited,a);
    }
}
vector <int> dfs(vector<int> g[], int N)
{
    
   int visited[N];
   for(int i=0;i<N;i++)
   {
       visited[i]=-1;
   }
   
   vector<int> a;
   for(int i=0;i<N;i++)
   {
       if(visited[i]==-1)
        abc(g,i,visited,a);
   }
   
return a;
}