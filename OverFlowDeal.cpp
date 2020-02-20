// 反转后整数溢出那么就返回 0
class Solution {
public:
    int reverse(int x) {
        long inv=0; //记录反转的结果
        while(x!=0)
        {
            inv =10*inv+x%10;
            x=x/10;            
        }       
        return (inv>=INT_MIN&&inv<=INT_MAX)?inv:0;
    }
};