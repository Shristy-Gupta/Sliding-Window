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
4) Count occurance of Anagram
5) Maximum of all sub-array of size k
6) Max and min of every window size

# Variable ✔
1) Largest/ Smallest subarray of sum k
2) Largest sub string  of , k distinct character
3) Length of largest substring of, No repeating character
4) Pick toy
5) Minimum Window substring
