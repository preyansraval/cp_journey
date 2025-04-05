import java.util.*;

public class B_TMT_Document {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            long n = Long.parseLong(sc.nextLine());
            String s = sc.nextLine();

            if(isValidDoc(n, s))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        sc.close();
    }

    private static boolean isValidDoc(long n, String s) {
        long size = 1 << n;
        Set<String> set = new HashSet<>();
        for(long i = 0;i < size;i++) {
            StringBuilder sb = new StringBuilder();
            for(int j = 0;j < n;j++) {
                if((i & (1 << j)) != 0) {
                    sb.append(s.charAt(j));
                }
            }
            if(sb.length() == 3)
                set.add(sb.toString());
        }
        
    }
}