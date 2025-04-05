import java.util.*;

public class abs_a_b_I {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            long[] arr = new long[n];
            String[] str = sc.nextLine().split(" ");
            for(int i = 0;i < n;i++)
                arr[i] = Long.parseLong(str[i]);
            
            long ans = 0;
            for(int i = 0;i < n;i++) {
                ans += (i * arr[i]);
                ans -= ((n-i-1)*arr[i]);
            }
            System.out.println(ans);
        }
        sc.close();
    }
}