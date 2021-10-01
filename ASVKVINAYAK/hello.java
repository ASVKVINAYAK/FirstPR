import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner vanshika=new Scanner(System.in);
        System.out.println("tell whether you have registered for hacktoberfest(yes/no)?");
        String s=vanshika.nextLine();
        if(s.equals("yes")){
            System.out.println("Hello Hacktoberfest-2021");
        }
        else
        {
            System.out.println("kindly register for hackoberfest here is the link-https://hacktoberfest.digitalocean.com/");
        }
    }

}
