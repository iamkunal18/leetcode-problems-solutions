class Solution {
public:
    vector<int> parent, size;
    
    //finding parent node of a connected component
    int findPar(int node) {
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findPar(parent[node]);
    }
    
    //making a parent node for all nodes of a connected component
    void unionBySize(int u, int v) {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);
        if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
    
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        // DisjointSet ds(n);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
        int cntExtras = 0;
        for(auto it : connections) {
            int u = it[0];
            int v = it[1];
            if(findPar(u) == findPar(v)) {
                cntExtras++;
            } else {
                unionBySize(u, v);
            }
        }
        int cntC = 0;
        for(int i = 0; i < n; i++) {
            if(parent[i] == i) cntC++;
        }
        int ans = cntC - 1; 
        if(cntExtras >= ans) return ans;
        else return -1;
     }
};