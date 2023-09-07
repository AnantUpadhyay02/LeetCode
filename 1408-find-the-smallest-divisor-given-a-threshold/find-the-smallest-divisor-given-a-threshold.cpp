class Solution {
public:
int Sum(vector<int> &arr, int d){
	int sum=0;
	int n = arr.size();
	for(int i = 0;i<n;i++){
		sum = sum + ceil((double)arr[i]/ (double)d);

	}
	return sum;
}
    int smallestDivisor(vector<int>& arr, int limit) {
    int low = 1;
	int high = *max_element(arr.begin(), arr.end());
	while(low<=high){
		int mid = low + (high-low)/2;
		if(Sum(arr, mid)<=limit){
			high = mid-1;
		}else
			low =mid+1;
	}
	return low;
    }
};