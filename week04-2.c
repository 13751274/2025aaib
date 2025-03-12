
//week04-2.c琌さぱleetcode 珼驹肈easy 肈
//leetcode 2529 maximum count of positive integer and negative integer
int maximumCount(int* nums, int numsSize) {

    int pos=0,neg=0;//癹伴玡常琌0

    for(int i=0;i<numsSize;i++){
        if(nums[i]>0)pos++;//タ计
        if(nums[i]<0)neg++;//璽计
    }//癹伴い丁穝э
    //癹伴рㄓノ
    if(pos>neg)return pos;//タ计耕タ计
    else return neg;//ぃ礛碞璽计

}
