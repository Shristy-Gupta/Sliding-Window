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
4) Count occurance of Anagram
5) Maximum of all sub-array of size k
6) Max and min of every window size

# Variable ✔
1) Largest/ Smallest subarray of sum k
2) Largest sub string  of , k distinct character
3) Length of largest substring of, No repeating character
4) Pick toy
5) Minimum Window substring
