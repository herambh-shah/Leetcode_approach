#include <bits/stdc++.h>
class Solution{
public:
vector<vector<int>>fourSum(vector<int>&nums,int target){
int n = nums.size();
vector< vector<int> >ans;
sort(nums.begin(),nums.end());
for(int i=0;i<n;i++){
if( i!=0 and nums[i]==nums[i-1] )  continue;
	for(int j=i+1;j<n;j++){
		if(j!=i+1 and nums[j]==nums[j-1])  continue;
	 	unordered_map<int,int>vis,seen;
		for(int k=j+1;k<n;k++){
			long long int rem=target-nums[i]-nums[j]-nums[k];
			if(rem>1e9 or rem<-1e9){
				vis[nums[k]]=1;
				continue;
			}
			if(vis.find(rem)!=vis.end() and seen.find(rem)==seen.end()){
				ans.push_back({nums[i],nums[j],nums[k],(int)rem});
				seen[rem]=1;

}
vis[nums[k]]=1;
}
}
}
return ans;	
}
};

int main(){
	vector<int>nums;
	int target;
	Solution.fourSum(nums,target);
}
