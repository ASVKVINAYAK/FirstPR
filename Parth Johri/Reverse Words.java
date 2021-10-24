import java.util.*;

class Solution {
    public String solve(String sentence) {
        int i,count=0;
        char c;
        sentence=sentence.trim();
        sentence=" "+sentence;
        StringTokenizer st=new StringTokenizer(sentence);
        count=st.countTokens();
        String str[]=new String[count];
        String word="";
        while(st.hasMoreTokens())
        {
            str[--count]=st.nextToken();
        }
        for(i=0;i<str.length;i++)
        {
            System.out.print(str[i]+" ");
            word+=str[i]+" ";
        }
        word=word.trim();
        return word;
    }
}
