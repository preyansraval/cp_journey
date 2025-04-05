import java.util.*;

public class DigitsSummation {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        long a = Long.parseLong(s.split(" ")[0]);
        long b = Long.parseLong(s.split(" ")[1]);

        System.out.println((a % 10) + (b % 10));
    }
}