import java.util.*;

public class B_Minimize_Ordering {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        int[] freq = new int[26];
        for(int i = 0;i < s.length();i++) {
            freq[s.charAt(i) - 'a']++;
        }

        StringBuilder sb = new StringBuilder();
        for(int i = 0;i < 26;i++) {
            while(freq[i]-- > 0) {
                sb.append((char)(i + 'a'));
            }
        }
        System.out.println(sb.toString());
        sc.close();
    }
}