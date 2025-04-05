import java.util.*;

public class B_Sort_the_Subarray {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            int[] a1 = new int[n];
            int[] a2 = new int[n];
            String[] s1 = sc.nextLine().split(" ");
            String[] s2 = sc.nextLine().split(" ");
            for(int i = 0;i < n;i++)
                a1[i] = Integer.parseInt(s1[i]);
            
            for(int i = 0;i < n;i++)
                a2[i] = Integer.parseInt(s2[i]);
            
            solve(n, a1, a2);
        }
    }

    private static void solve(int n, int[] a1, int[] a2) {
        int l = 0, r = n-1;
        while(l < n && a1[l] == a2[l])
            l++;
        
        while(r >= 0 && a1[r] == a2[r])
            r--;

        while(l > 0 && a2[l-1] <= a2[l])
            l--;
        
        while(r < n-1 && a2[r] <= a2[r+1])
            r++;
        
        System.out.println((l+1) + " " + (r+1));
    }
}