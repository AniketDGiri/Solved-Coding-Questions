#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void zigZagMatrix(int a[][3],int n,int m){

bool flag=true;
vector<int> v;
for(int row=0;row<n;row++){

    int i=row;
    int j=0;
    v.clear();
    while(i>=0 and j<=m-1){
        //cout<<a[i][j]<<" ";
        v.push_back(a[i][j]);
        i--;
        j++;
    }
    if(flag==true){
        for(int k=0;k<v.size();k++){
            cout<<v[k];
        }
        cout<<"\n";
        flag=false;
    }else{
        reverse(v.begin(),v.end());
        for(int k=0;k<v.size();k++){
            cout<<v[k];
        }
        cout<<"\n";
        flag=true;
    }


}//for


for(int col=1;col<n;col++){

    int i=n-1;
    int j=col;
    v.clear();
    while(i>=0 and j<=m-1){
        //cout<<a[i][j]<<" ";
        v.push_back(a[i][j]);
        i--;
        j++;
    }
    if(flag==true){
        for(int k=0;k<v.size();k++){
            cout<<v[k];
        }
        cout<<"\n";
        flag=false;
    }else{
        reverse(v.begin(),v.end());
        for(int k=0;k<v.size();k++){
            cout<<v[k];
        }
        cout<<"\n";
        flag=true;
    }


}//for

}//zigZagMatrix

int main(){


int matrix[][3] = { { 1, 2, 3 },
                        { 4, 5, 6 },
                        { 7, 8, 9 } };
zigZagMatrix(matrix, 3, 3);
return 0;
}
