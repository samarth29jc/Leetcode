class Solution:
   
    def totaldays(self,weights,cap):
        day=1
        load=0
        n=len(weights)
        for i in range(n):
            if load+weights[i]>cap:
                day+=1
                load=weights[i]
            else:
                load+=weights[i]
        return day




    def shipWithinDays(self, weights: List[int], days: int) -> int:
        low=max(weights)
        high=sum(weights)
        while (low<=high):
            mid=low+(high-low)//2
            numofday=self.totaldays(weights,mid)
            if numofday<=days:
                high=mid-1
            
            else:
                low=mid+1
        return low
        