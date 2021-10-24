import java.util.*;

class Solution {
    public int solve(int a) {
        int i;
        for(i=1;i<=a;i++)
        {
            if((fact(i)==a))
            return i;
        }
    
        return -1;
    }
    public int fact(int n)
    {
        int i,p=1;
        for(i=1;i<=n-1;i++)
        {
            p*=i;
        }
        return p*n;
    }   
}
