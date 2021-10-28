
bool isvalid(int i,int j,int n, int m,vector<vector<char>> &g){
        if(i>=0 and i<n and j>=0 and j<m and g[i][j]=='1'){
            return true;
        }
        return false;

    }//isvalid

    void calculate(int i,int j,int n, int m, vector<vector<char>> &g){

        if(isvalid(i,j,n,m,g)){

            g[i][j]='0';

            //all eight directions
            calculate( i, j+1,n,m,g);
            calculate( i, j-1,n,m,g);
            calculate( i-1, j,n,m,g);
            calculate( i+1, j,n,m,g);
            calculate(i+1, j+1,n,m,g);
            calculate( i+1, j-1,n,m,g);
            calculate( i-1, j-1,n,m,g);
            calculate( i-1, j+1,n,m,g);

        }
    }//calculate

    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();

        if(grid.empty()){
            return 0;
        }
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    calculate(i,j,n,m,grid);
                }
            }
        }
        return count;
    }
