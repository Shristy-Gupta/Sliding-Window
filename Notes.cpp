# Sliding Window Variants ✔

# Fixed ✔
1) Maximum and minimum subarray of size k https://www.youtube.com/watch?v=KtpqeN0Goro&list=PL_z_8CaSLPWeM8BDJmIYDaoQ5zuwyxnfj&index=3
int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int j=0,max_sum=INT_MIN;
        int local_sum=0;
        for(int i=0;i<K;i++){
            local_sum+=Arr[i];
        }
        max_sum=max(max_sum,local_sum);
        for(int i=K;i<N;i++){
            local_sum+=Arr[i]-Arr[j];
            j++;
            max_sum=max(max_sum,local_sum);
        }
        return max_sum;
    }
3) First negative in every min size of k
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
            vector<long long> ans;
            queue<long long> q;
            long long int i;
            for(i=0;i<K;i++){
                if(A[i]<0){
                    //Adding only the index of the negative element
                    q.push(i);
                }
            }
            for(;i<N;i++){
                if(!q.empty()){
                    ans.push_back(A[q.front()]);
                }
                else{
                    ans.push_back(0);
                }
                while(!q.empty() && q.front()<i-K+1){
                    q.pop();
                }
                if(A[i]<0){
                    q.push(i);
                }
            }
            if(!q.empty()){
                ans.push_back(A[q.front()]);
            }
            else{
                ans.push_back(0);
            }
            return ans;                                     
 }
4) Count occurance of Anagram: https://www.youtube.com/watch?v=MW4lJ8Y0xXk&list=PL_z_8CaSLPWeM8BDJmIYDaoQ5zuwyxnfj&index=5

// Generate a map of all character occurances of the 2nd string, i.e char and its count.
// The window size becomes the length of 2nd string, as the anangrams wil also be of this length, amd another variable count denotes the distinct characters left in a sliding window.
// In a window if the current character is present in map, then decrease its count, and if the count becomes 0, decrease the 'count' variable.
// If the window size is lesser than k just move forward the window
// When the window is hit ->
// If the count is 0, it means all the characters needed for its anagram is here in it, therefore increase your answer
// To remove the last part (arr[i] part) so that the window can be shifted ->
// If the s[i] is present in map then increase its count and if it changes from 0->1 then increase the 'count' variable

int solve(string s, string ana){

    unordered_map<char, int> m;
    for(auto it : ana) m[it]++;

    int window_Size=ana.length();
    int count=m.size();
    
    int start=0, end=0;
    int ans=0;
    
    while(end<s.length()){
    
        if(m.find(s[end])!=m.end()){
            m[s[end]]--;
            if(m[s[end]]==0) count--;
        }
        //only for growing phase
        if((end-start+1)<window_Size) end++;
        else if((end-start+1)==window_Size){
            if(count==0) ans++;
            if(m.find(s[start])!=m.end()){
                m[s[start]]++;
                if(m[s[start]]==1) count++;
            }
            start++;
            end++;
        }
    }
    return ans;
}

// TC : O(n)
// SC : O(distinctChars(ana))

5) Maximum of all sub-array of size k //https://www.youtube.com/watch?v=xFJXtB5vSmM&list=PL_z_8CaSLPWeM8BDJmIYDaoQ5zuwyxnfj&index=6
        //Will code soon!
6) Max and min of every window size

# Variable ✔
1) Largest/ Smallest subarray of sum k
2) Largest sub string  of , k distinct character
3) Length of largest substring of, No repeating character
4) Pick toy
5) Minimum Window substring
