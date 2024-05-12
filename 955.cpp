/*
Key points -
when we found out string was already sorted s[i] < s[i+1], we need to maintain one hash for 'ans' below so that
we wont compare those strings again.
same character needs to be checked at next indices but not sor sorted visited strings
*/
class Solution{
public:
int minDeletionSize(vector<string>& strs) {
	int sz = strs[0].size();
	int N = strs.size();
    vector< int >pass(N);
    unordered_set<int>ans;
    for(int ind = 0; ind < sz; ind++){
        unordered_set<int> tmpPass;
        int str;
        for(str = 1; str < N; str++ ){
            if( pass[str] ) continue;

            if(strs[str][ind] > strs[str-1][ind]){
                tmpPass.insert(str);
            }
            else if( strs[str][ind] < strs[str-1][ind] ){
                ans.insert(ind);
                break;
            }
        }

        if(str == N){
            for(int p : tmpPass) pass[p] = 1;
        }
    }

    return ans.size();
	
}
};
