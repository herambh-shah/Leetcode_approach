
class Solution{
public:
	int max_rectangle(vector<int>&height){
		stack<int>s;
		int n=height.size();
		int ans=0;
	s.push(0);
		for(int i=1 ; i<n ; i++){
		 	while(s.top() and height[i] <= height[s.top()]){
				int top=height[s.top()];
s.pop();
				ans=max(ans,top*(i-s.top()-1) );		
}	
s.push(i);
}
while(s.top()){
			int top=height[s.top()];
s.pop();
			ans=max(ans,top*(n-s.top()-1));		
}
return ans;
}

int maximalRectangle(vector< vector<char> >&matrix){
	int n = matrix.size();
	int m = matrix[0].size();
	vector< vector<int> >dp(n+1,vector<int>(m+1) );

int ans=0;
	for( int i=1; i<=n ;i++){
		for( int j=1 ;j<=m ;j++){
			if(matrix[i-1][j-1] == '1' ) dp[i][j] = dp[i-1][j] + 1;	
}
ans=max(ans,max_rectangle(dp[i]) );
	}
	return ans;
}
};

