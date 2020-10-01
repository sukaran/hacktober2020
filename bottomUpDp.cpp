#include<bits/stdc++.h>
using namespace std;
int calc(int n,int coins[],int t,int dp[]){
	int ans = INT_MAX;
	for(int i=1;i<=n;i++){
		ans = INT_MAX;
		for(int j=0;j<t;j++){
			if(i-coins[j]>=0){
				ans=min(ans,dp[i-coins[j]]+1);	
			}	
		}
		dp[i] = ans;
	}	
	return dp[n];
}

int main(){
	int n;
	cin>>n;
	int dp[100] = {0};
	int coins[]={1,7,10};
	int t=3;
	cout<<calc(n,coins,t,dp);
}
