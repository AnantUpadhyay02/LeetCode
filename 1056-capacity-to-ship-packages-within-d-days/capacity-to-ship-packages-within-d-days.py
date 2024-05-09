class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l = max(weights)
        h = sum(weights)

        while l<=h:
            mid = (l+h)//2

            if capacity(weights,mid)<=days:
                h = mid-1
            else:
                l = mid+1
        return l

def capacity(arr,capacity):
    n = len(arr)
    days = 1
    load = 0
    for i in range(n):
        if (arr[i] + load >capacity):
            days+=1
            load = arr[i]
        else:
            load +=arr[i]
    return days