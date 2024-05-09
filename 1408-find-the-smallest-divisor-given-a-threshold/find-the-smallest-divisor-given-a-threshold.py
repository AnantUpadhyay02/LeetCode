class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:
        n = len(nums)

        maxi = max(nums)
        

        if n>threshold:
            return -1
        l = 1
        h = maxi
        res = maxi
        while l<=h:
            mid = (l+h)//2

            if divisor(nums,mid,threshold)<=threshold:
                res = min(res,mid)
                h = mid-1
            else:
                l = mid+1
        return res

def divisor(nums,div,threshold):
    n = len(nums)
    div_sum = 0
    for i in range(n):
        div_sum += math.ceil(nums[i]/div)
    return div_sum