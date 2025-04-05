import java.util.*;

public class B_Farmer_John_s_Card_Game {
    static class Pair implements Comparable<Pair> {
        int idx;
        int val;

        public Pair(int idx, int val) {
            this.idx = idx;
            this.val = val;
        }

        public int compareTo(Pair o) {
            return this.val - o.val;
        }
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            String[] s = sc.nextLine().split(" ");
            int n = Integer.parseInt(s[0]);
            int m = Integer.parseInt(s[1]);
            int[][] mat = new int[n][m];
            String[] s1 = new String[n];

            for(int i = 0;i< n;i++) {
                s1[i] = sc.nextLine();
            }

            for(int i = 0;i < n;i++) {
                String[] temp = s1[i].split(" ");
                for(int j = 0;j < m;j++) {
                    mat[i][j] = Integer.parseInt(temp[j]);
                }
            }

            solve(n, m, mat);
        }
        sc.close();
    }

    private static void solve(int n, int m, int[][] mat) {
        for(int[] a : mat) {
            Arrays.sort(a);
        }

        Pair[] pairs = new Pair[n];
        for(int i = 0;i < n;i++) {
            Pair p = new Pair(i+1, mat[i][0]);
            pairs[i] = p;
        }

        Arrays.sort(pairs);

        boolean flag = true;
        int topVal = -1;
        for(int j = 0;j < m;j++) {
            for(int t = 0;t < n;t++) {
                int idx = pairs[t].idx - 1;
                int currVal = mat[idx][j];
                if(currVal <= topVal) {
                    flag = false;
                    break;
                }
                topVal = currVal;
            }
        }

        if(flag) {
            for(int i = 0;i < n;i++) {
                System.out.print(pairs[i].idx + " ");
            }
        }
        else {
            System.out.print(-1);
        }

        System.out.println();
    }
}