import java.util.*;

public class WelcomeForYouWithConditions {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int a = Integer.parseInt(s.split(" ")[0]);
        int b = Integer.parseInt(s.split(" ")[1]);

        if(a >= b)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}