import java.util.*;

public class E_Graph_Composition {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            String[] s = sc.nextLine().split(" ");
            int n = Integer.parseInt(s[0]);
            int m1 = Integer.parseInt(s[1]);
            int m2 = Integer.parseInt(s[2]);

            HashMap<Integer, List<Integer>> f = new HashMap<>();
            HashMap<Integer, List<Integer>> g = new HashMap<>();

            String[] sf = new String[m1];
            String[] sg = new String[m2];
            for(int i = 0;i < m1;i++) {
                sf[i] = sc.nextLine();
            }

            for(int i = 0;i < m2;i++) {
                sg[i] = sc.nextLine();
            }

            for(int i = 0;i < m1;i++) {
                int u = Integer.parseInt(sf[i].split(" ")[0]);
                int v = Integer.parseInt(sf[i].split(" ")[1]);
                if(f.containsKey(u)) {
                    List<Integer> temp = f.get(u);
                    temp.add(v);
                    f.put(u, temp);
                }
                else {
                    List<Integer> temp = new ArrayList<>();
                    temp.add(v);
                    f.put(u, temp);
                }

                if(f.containsKey(v)) {
                    List<Integer> temp = f.get(v);
                    temp.add(u);
                    f.put(v, temp);
                }
                else {
                    List<Integer> temp = new ArrayList<>();
                    temp.add(u);
                    f.put(v, temp);
                }
            }

            for(int i = 0;i < m2;i++) {
                int u = Integer.parseInt(sg[i].split(" ")[0]);
                int v = Integer.parseInt(sg[i].split(" ")[1]);
                if(g.containsKey(u)) {
                    List<Integer> temp = g.get(u);
                    temp.add(v);
                    g.put(u, temp);
                }
                else {
                    List<Integer> temp = new ArrayList<>();
                    temp.add(v);
                    g.put(u, temp);
                }

                if(f.containsKey(v)) {
                    List<Integer> temp = g.get(v);
                    temp.add(u);
                    g.put(v, temp);
                }
                else {
                    List<Integer> temp = new ArrayList<>();
                    temp.add(u);
                    g.put(v, temp);
                }
            }

            solve(n, f, m1, g, m2);
        }
        sc.close();
    }

    private static void solve(int n, HashMap<Integer, List<Integer>> f, int m1, HashMap<Integer, List<Integer>> g, int m2) {
        
    }
}