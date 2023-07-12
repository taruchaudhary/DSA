void printChildren (int Root,Vector<vector<int>&adj)
int vector;
{
queue<int>q;
q.push(Root);
int vis[adj.size()]={0};
while(!q.empty()){
int node=q.front();
q.pop();
vis[node]=1;
cout<<node<<"->";
for(auto cur: adj[node])
if(vis[cur]==0){
    cout<<cur<<"";
    q.push(cur);
}
cout<<endl;
}
}
