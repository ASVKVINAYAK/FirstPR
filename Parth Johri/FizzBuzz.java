import java.util.*;

class Solution {
    public String[] solve(int n) {
        String arr[]=new String[n];
        int i;
        for(i=1;i<=n;i++)
        {   
            if(i%15==0)
            {
                arr[i-1]="FizzBuzz";
            }
            else if(i%3==0)
            {
                arr[i-1]="Fizz";
            }
            else if(i%5==0)
            {
                arr[i-1]="Buzz";
            }
            else 
            arr[i-1]=Integer.toString(i);
        }
    return arr;

    }
}
