#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    int cal(vector<vector<char>> a,int i,int j,int n,int m, string word, int size,char dir,int idx){

        int found=0;
        if(i>=0 and i<n and j>=0 and j<m and a[i][j]==word[idx]){
            idx+=1;
            char temp=a[i][j];
            a[i][j]=0;
            if(idx==size){
                found= 1;
                //return 1;
            }
            else{
                if(dir=='1'){
                    found= cal(a,i,j-1,n,m,word,size,'1',idx);
                }
                if(dir=='2'){
                   //found=cal(a,i,j+1,n,m,word,size-1,'2');
                    found= cal(a,i,j+1,n,m,word,size,'2',idx);
                }
                if(dir=='3'){
                   // found=cal(a,i-1,j,n,m,word,size-1,'3');
                    found= cal(a,i-1,j,n,m,word,size,'3',idx);
                }
                if(dir=='4'){
                    //found= cal(a,i+1,j,n,m,word,size-1,'4');
                    found= cal(a,i+1,j,n,m,word,size,'4',idx);
                }
                if(dir=='5'){
                    //found=cal(a,i-1,j-1,n,m,word,size-1,'5');
                    found= cal(a,i-1,j-1,n,m,word,size,'5',idx);
                }
                if(dir=='6'){
                    //found=cal(a,i+1,j-1,n,m,word,size-1,'6');
                    found= cal(a,i+1,j-1,n,m,word,size,'6',idx);
                }
                if(dir=='7'){
                    //found=cal(a,i-1,j+1,n,m,word,size-1,'7');
                    found= cal(a,i-1,j+1,n,m,word,size,'7',idx);
                }
                if(dir=='8'){
                    //found=cal(a,i+1,j+1,n,m,word,size-1,'8');
                    found= cal(a,i+1,j+1,n,m,word,size,'8',idx);
                }
            }
            a[i][j]=temp;

        }
        return found;

    }

	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int ans=0;
	    int size=word.length();
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> v;

	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==word[0]){
	                //1 left
	                //2 right
	                //3 down
	                //4 up
	                //5 right d
	                //6 left d
	                //7 up d
	                //8 down d
	               /* if(cal(grid,i,j,n,m,word,size,'1',0)){
	                    v.push_back({i,j});
	                }
	                if(cal(grid,i,j,n,m,word,size,'2',0)){
	                    v.push_back({i,j});
	                }
	                if(cal(grid,i,j,n,m,word,size,'3',0)){
	                    v.push_back({i,j});
	                }
	                if(cal(grid,i,j,n,m,word,size,'4',0)){
	                    v.push_back({i,j});
	                }
	                if(cal(grid,i,j,n,m,word,size,'5',0)){
	                    v.push_back({i,j});
	                }
	                if(cal(grid,i,j,n,m,word,size,'6',0)){
	                    v.push_back({i,j});
	                }
	                if(cal(grid,i,j,n,m,word,size,'7',0)){
	                    v.push_back({i,j});
	                }
	                if(cal(grid,i,j,n,m,word,size,'8',0)){
	                    v.push_back({i,j});
	                }*/

	                int a=cal(grid,i,j,n,m,word,size,'1',0);
	                int b=cal(grid,i,j,n,m,word,size,'2',0);
	                int c=cal(grid,i,j,n,m,word,size,'3',0);
	                int d=cal(grid,i,j,n,m,word,size,'4',0);
	                int e=cal(grid,i,j,n,m,word,size,'5',0);
	                int f=cal(grid,i,j,n,m,word,size,'6',0);
	                int g=cal(grid,i,j,n,m,word,size,'7',0);
	                int h=cal(grid,i,j,n,m,word,size,'8',0);

	                if(a||b||c||d||e||f||g||h){
	                    v.push_back({i,j});
	                }


	            }
	        }
	    }
	    /*cout<<v.size();
	    for(int i=0;i<v.size();i++){
	        for(int j=0;j<v[0].size();j++){
	            cout<<v[i][j];
	            cout<<"h";
	        }
	    }*/
	    return v;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
	}
	return 0;
}  // } Driver Code Ends
