import java.util.*;

public class B_Minimize_Inversions {
    static class Pair implements Comparable<Pair> {
        int a;
        int b;

        public Pair(int a, int b) {
            this.a = a;
            this.b = b;
        }

        public int compareTo(Pair o) {
            return this.a - o.a;
        }
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            int[] a = new int[n];
            int[] b = new int[n];
            String[] s1 = sc.nextLine().split(" ");
            String[] s2 = sc.nextLine().split(" ");
            for(int i = 0;i < n;i++) {
                a[i] = Integer.parseInt(s1[i]);
                b[i] = Integer.parseInt(s2[i]);
            }

            Pair[] pairs = new Pair[n];
            for(int i = 0;i < n;i++) {
                Pair p = new Pair(a[i], b[i]);
                pairs[i] = p;
            }

            Arrays.sort(pairs);

            for(int i = 0;i < n;i++) {
                System.out.print(pairs[i].a + " ");
            }
            System.out.println();
            for(int i = 0;i < n;i++) {
                System.out.print(pairs[i].b + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}