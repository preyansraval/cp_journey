import java.util.*;

public class E_Mirror_Grid {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long t = Long.parseLong(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            char[][] mat = new char[n][n];
            for(int i = 0;i < n;i++) {
                char[] c = sc.nextLine().toCharArray();
                for(int j = 0;j < n;j++) {
                    mat[i][j] = c[j];
                }
            }

            solve(n, mat);
        }
        sc.close();
    }

    private static void solve(int n, char[][] mat) {
        int x = n/2;
        int y = n/2;
        if(n % 2 == 1)
            y++;
        int ans = 0;
        for(int i = 0;i < x;i++) {
            
            for(int j = 0;j < y;j++) {
                int one = 0;
                one += mat[i][j] - '0';
                one += mat[n-j-1][i] - '0';
                one += mat[j][n-i-1] - '0';
                one += mat[n-i-1][n-j-1] - '0';

                if(one == 2)
                    ans += 2;
                else if(one == 1 || one == 3)
                    ans += 1;
            }
        }
        System.out.println(ans);
    }
}