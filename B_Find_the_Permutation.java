import java.util.*;

public class B_Find_the_Permutation {
    static class Pair implements Comparable<Pair> {
        int a;
        int b;

        public Pair(int a, int b) {
            this.a = a;
            this.b = b;
        }

        public int compareTo(Pair o) {
            if(this.b - o.b == 0)
                return o.a - this.a;
            
            return this.b - o.b;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            int[][] mat = new int[n][n];
            String[] str = new String[n];
            for(int i = 0;i < n;i++)
                str[i] = sc.nextLine();
            
            for(int i = 0;i < n;i++) {
                for(int j = 0;j < n;j++) {
                    mat[i][j] = str[i].charAt(j) - '0';
                }
            }

            solve(n, mat);
        }
        sc.close();
    }

    private static void solve(int n, int[][] mat) {
        Pair[] pairs = new Pair[n];
        for(int i = 0;i < n;i++) {
            int cnt = 0;
            for(int j = 0;j < n;j++) {
                cnt += (mat[i][j]);
            }
            Pair p = new Pair(i+1, cnt);
            pairs[i] = p;
        }

        Arrays.sort(pairs);

        for(int i = 0;i < n;i++) {
            System.out.print(pairs[i].a + " ");
        }
        System.out.println();
    }
}