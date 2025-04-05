import java.util.*;

public class Comparison {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int a = Integer.parseInt(s.split(" ")[0]);
        int b = Integer.parseInt(s.split(" ")[2]);
        char S = s.split(" ")[1].charAt(0);
        if((S == '>' && a > b) || (S == '<' && a < b) || (S == '=' && a == b))
            System.out.println("Right");
        else
            System.out.println("Wrong");
    }
}