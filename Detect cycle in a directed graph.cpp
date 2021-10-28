class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCycle(vector<int> adj[], vector<bool> &vis,vector<bool> &vis1,int node){

        vis[node]=true;
        vis1[node]=true;

        for(auto i: adj[node]){
           if(!vis[i]){
               if(isCycle(adj,vis,vis1,i)) return true;
           }
           else if(vis1[i]){
               return true;
           }

        }
        vis1[node]=false;

        return false;

    }

    bool isCyclic(int V, vector<int> adj[]) {
        // code here
      // we need to take care of connected components.
      vector<bool> vis(V,false);
      vector<bool> vis1(V,false);
      for(int i=0;i<V;i++){
          if(!vis[i]){
              if(isCycle(adj,vis,vis1,i)) return true;
          }
      }
      return false;

    }
};
