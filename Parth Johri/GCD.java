import java.util.*;

class Solution {
    public int solve(int[] nums) {
        int i,sm=nums[0];
        for(i=1;i<nums.length;i++)
        {  
            sm=GCD(sm,nums[i]);
        }
        return sm;
        }
    int GCD(int a,int b)
    {
        if(b==0)
        return a;
        else
        return GCD(b,a%b);
    }
}
