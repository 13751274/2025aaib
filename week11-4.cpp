//week11-4.cpp
//leetcode 1295.find numbers with even number of digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;//�j��e��ans=0
        for(int i=0;i<nums.size();i++){
            int now=nums[i];//�{�b�n�B�znums[i]
            //Q:�p�󪾹Dnums[i]�O�X���
            int digits=0;//���X���
            while(now>0){
                digits++;//�@��ƴX�@�U���F�X��
                now=now/10;//�Ʀr�V�ӶV�p
            }
            if(digits%2==0)ans++;//�j��� ���ƪ���Ʈ� ++
        }
        return ans;//�j��᭱ans���ӥ�
    }
};
