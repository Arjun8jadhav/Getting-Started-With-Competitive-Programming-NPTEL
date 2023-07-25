#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	 ll int n,m;
      cin>>n>>m;
      vector<ll int> vk,lm;
      for(int i=0;i<n;i++){
          ll int x;
          cin>>x;
          vk.push_back(x);
      }
      for(int i=0;i<m;i++){
          ll int x;
          cin>>x;
          lm.push_back(x);
      }
      ll int i=0,j=0;
      while(i<n && j<m){
          if(vk[i]==lm[j]){
              vk[i]=0;
              lm[j]=0;
              i++;
              j++;
          }
          else if(vk[i]>lm[j]){
              vk[i]-=lm[j];
              j++;
          }
          else if(vk[i]<lm[j]){
              lm[j]-=vk[i];
              i++;
          }
      }
      if(i==n && j==m){
          cout<<"Draw"<<endl;
      }
      else if(i==n){
          ll int cost=0;
          for(int k=j;k<m;k++){
              cost+=lm[k];
              if(cost>0){
                  break;
              }
          }
          if(cost>0){
              cout<<"Duryodhana"<<endl;
          }
          else{
              cout<<"Draw"<<endl;
          }
      }
      else{
          ll int cost=0;
          for(int k=i;k<n;k++){
              cost+=vk[k];
              if(cost>0){
                  break;
              }
          }
          if(cost>0){
          cout<<"Yudhisthira"<<endl;
          }
          else{
              cout<<"Draw"<<endl;
          }
      }

	    
	}
	return 0;
}
