import java.util.*;

class Solution {
    public boolean solve(int num) {
        int nn = num, d, sum = 0, n = num, count = 0;
        while (n != 0) {
            ++count;
            n /= 10;
        }
        while (nn != 0) {
            d = nn % 10;
            sum += (int) (d * Math.pow(10, --count));
            nn /= 10;
        }
        if (sum == num)
            return true;
        else
            return false;
    }
}
