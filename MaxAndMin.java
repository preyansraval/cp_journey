import java.util.*;

public class MaxAndMin {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] arr = s.split(" ");
        int a = Integer.parseInt(arr[0]);
        int b = Integer.parseInt(arr[1]);
        int c = Integer.parseInt(arr[2]);
        int min = Math.min(a, Math.min(b, c));;
        int max = Math.max(a, Math.max(b, c));;
        System.out.print(min + " " + max);
    }
}