#week02-3.py �gleetcode
#leetcode 1.two sum
#���@��Ʀr nums�̭� ����Ӭۥ[�A�O target
#nums[i]+nums[j]==target ���i�Mj�ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#���@�ӽc�l�A�̭���X�{�L���Ʀr
        #�ڭ̷Q�n��Xtarget �o�ӥ[�`
        for i,num in enumerate(nums):
            other=target-num #�t�~�@�ӻݭn���ƥi�H��Xtarget��(target-num)
            if other in box: #�b�c�l�̡A���t�@�ӻݭn����
                return[ box[other],i] #��쵪��
            else: #�p�G�S���X�A���Ʀr���
                box[num]=i #�N��{�b���Ʀrnum�A���box�̭�
