#week04-2.py �O���Ѫ�leetcode �D���Deasy (�G�X�@)
#leetcode 2529.maximum count of positive integer and negative integer
#��X���X�ӥ��ơA���X�ӭt�ơA�j�����ӼƦ^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:

        pos=0
        neg=0#�j��e���A�ǳƦn�A���O0
        for i in range(len(nums)):#�j��̡A��s�L
            if nums[i]>0: pos+=1
            if nums[i]<0: neg+=1
        #�j��᭱�A�⵪�׮��X�ӥ�
        return max(pos,neg)
