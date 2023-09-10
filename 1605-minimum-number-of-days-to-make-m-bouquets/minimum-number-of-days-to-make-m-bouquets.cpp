class Solution {
public:
	bool possible(vector<int> &arr, int day, int m, int k){
		int count = 0;
		int no = 0;
		for(int i =0;i<arr.size();i++){
		if(arr[i]<=day){
			count++;
		}else{
			no += (count/k);
			count = 0; 
		}
	}
	no+= (count/k);
	return no>= m;
};
    int minDays(vector<int>& arr, int r, int b) {
  

	// Write your code here
	long long val = r* 1LL *b *1LL;
	if(val > arr.size())
		return -1;
	int mini = INT_MAX ; int maxi = INT_MIN;
	for(int i= 0; i<arr.size();i++){
		mini = min(mini,arr[i]);
		maxi = max(maxi, arr[i]);
	}
	int low = mini; int high = maxi;
	while(low<=high){
		int mid = low+ (high-low)/2;
		if(possible(arr, mid, r, b)){
			high = mid -1;
		}else
			low = mid+1;
	}
	return low;
}
    
};