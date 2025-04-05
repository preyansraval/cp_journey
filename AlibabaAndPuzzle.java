import java.util.*;

public class AlibabaAndPuzzle {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] str = sc.nextLine().split(" ");
        long a = Long.parseLong(str[0]);
        long b = Long.parseLong(str[1]);
        long c = Long.parseLong(str[2]);
        long d = Long.parseLong(str[3]);

        if((a + b - c == d) || (a - b + c == d) || (a+b*c == d) || (a * b + c == d) || (a - b * c == d) || (a * b - c == d))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}