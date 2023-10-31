//Question:- https://practice.geeksforgeeks.org/problems/sum-of-xor-of-all-pairs0723/1

//Amazing bit manipulation Question.

//Solution:

class Solution{
    public:
    long long int sumXOR(int arr[], int n)
    {
    	long long ans = 0;
    	
    	for(int i = 0 ; i < 32 ; i++){
    	    long long cntz = 0;
    	    long long cnto = 0;
    	    for(int j = 0 ; j < n  ; j++){
    	        if(arr[j] & (1 << i)){
    	            cnto++;
    	        }
    	        else cntz++;
    	    }
    	    long long pairsHavingithBitSet = cnto*cntz;
    	    ans += pairsHavingithBitSet*(1l<<i);
    	}
    	return ans;
    }
};
