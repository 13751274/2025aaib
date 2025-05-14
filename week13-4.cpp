//week13-4.cpp 寫昨天的挑戰題 用c++來寫
//leetcode 3335 total characters in string after transformation i
//'a'會變'b' 'b'會變'c'... 'z'會變2個字母 'a' 'b'
class Solution {
public:
    int a[200000]={};//很大的陣列 裡面都是 會放算出來的答案
    int helper(int t){//用函式呼叫函式
        if(a[t]>0)return a[t];//有放答案 就把答案直接拿出來用
        if(t<26)return 1;//還是1個字母
        a[t]=(helper(t-26)+helper(t-26+1))%1000000007;//8個0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans=0;
        for(char c:s){//c++的語法 可以把每個字母取出來
            ans=(ans+helper(t+c-'a'))%1000000007;//裡面有8個0
        }
        return ans;
    }
};
