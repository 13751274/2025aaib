//week11-4.cpp
//leetcode 1295.find numbers with even number of digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;//癹伴玡ans=0
        for(int i=0;i<nums.size();i++){
            int now=nums[i];//瞷璶矪瞶nums[i]
            //Q:笵nums[i]琌碭计
            int digits=0;//Τ碭计
            while(now>0){
                digits++;//娩计碭挤碭Ω
                now=now/10;//计禫ㄓ禫
            }
            if(digits%2==0)ans++;//癹伴柑 案计计 ++
        }
        return ans;//癹伴ansㄓノ
    }
};
