#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	    int m,n,s,x;
	    cin>>n>>m>>s>>x;
	    vector<vector<int>> vk;
	    for(int i=0;i<n;i++){
	        vector<int> temp;
	        for(int j=0;j<m;j++){
	            int x;
	            cin>>x;
	            temp.push_back(x);
	        }
	        vk.push_back(temp);
	    }
  
        // maupulate with step
	    while(s--){
	        int p=vk[0][0];
	        for(int i=1;i<m;i++){
	            int temp=vk[0][i];
	            vk[0][i]=p;
	            p=temp;
	        }
	        for(int i=1;i<n;i++){
	            int temp=vk[i][m-1];
	            vk[i][m-1]=p;
	            p=temp;
	        }
	        for(int i=m-2;i>=0;i--){
	            int temp=vk[n-1][i];
	            vk[n-1][i]=p;
	            p=temp;
	        }
	        for(int i=n-2;i>=0;i--){
	            int temp=vk[i][0];
	            vk[i][0]=p;
	            p=temp;
	        }
	    }
       // division operation for output
  
	    for(int i=0;i<m;i++){
	        if((i+x)%x==0){
	            cout<<vk[0][i]<<" ";
	        }
	    }
	    for(int i=1;i<n;i++){
	        if((i+(m-1)+x)%x==0){
	            cout<<vk[i][m-1]<<" ";
	        }
	    }
	    for(int i=m-2;i>=0;i--){
	        if(((n-1)+i+x)%x==0){
	            cout<<vk[n-1][i]<<" ";
	        }
	    }
	    for(int i=n-2;i>0;i--){
	        if((i+x)%x==0){
	            cout<<vk[i][0]<<" ";
	        }
	    }
  
}




