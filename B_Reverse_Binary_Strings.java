import java.util.*;

public class B_Reverse_Binary_Strings {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            String s = sc.nextLine();
            char[] c = s.toCharArray();
            int l = 0, r = 0;
            int count = 0;
            while (l < n-1 && r < n-1) { 
                while(c[l] != c[l+1] && l < n-1) {
                    l++;
                }
                l++;
                r = l+1;
                while(r < n-1 && c[r] != c[r+1])
                    r++;
                count++;

                l = r;
            }
            System.out.println(count);
        }
    }
}