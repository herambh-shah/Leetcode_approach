class Solution { 
public: 
int wordsTyping(vector<string>& sentence, int rows, int cols) {
    int sz = sentence.size();

    unordered_map<int, pair<int,int> >dp;
    int ind=0, rowInd=0, ans=0;
    while( rowInd < rows){
        if( dp.find(ind) != dp.end() ){
            // cout<<rowInd<<" "<<dp[ind].first<<"\n";
            ans += dp[ind].first;
            ind = dp[ind].second;
            // cout<<ans<<"\n";
            rowInd++;
            continue;
        }
        int len = 0;
        int startInd = ind;
        int dpcnt = 0;
        while( len + sentence[ind].size() <= cols ){
                len += sentence[ind].size()+1;
                ind++;
                if( ind == sz ) ind=0 , ans++, dpcnt++;
        }
        dp[ startInd ] = { dpcnt, ind };
        // cout<<ans<<"\n";
        rowInd++;
    }

    return ans;
}	
};



