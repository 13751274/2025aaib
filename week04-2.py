#week04-2.py 是今天的leetcode 挑戰題easy (二合一)
#leetcode 2529.maximum count of positive integer and negative integer
#找出有幾個正數，有幾個負數，大的那個數回傳
class Solution:
    def maximumCount(self, nums: List[int]) -> int:

        pos=0
        neg=0#迴圈前面，準備好，都是0
        for i in range(len(nums)):#迴圈裡，更新他
            if nums[i]>0: pos+=1
            if nums[i]<0: neg+=1
        #迴圈後面，把答案拿出來用
        return max(pos,neg)
