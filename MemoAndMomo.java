import java.util.*;

public class MemoAndMomo {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] arr = s.split(" ");
        long a = Long.parseLong(arr[0]);
        long b = Long.parseLong(arr[1]);
        long k = Long.parseLong(arr[2]);

        if(a % k == 0 && b % k == 0)
            System.out.println("Both");
        else if(a % k == 0 && b % k != 0)
            System.out.println("Memo");
        else if(a % k != 0 && b % k == 0)
            System.out.println("Momo");
        else
            System.out.println("No One");
    }
}