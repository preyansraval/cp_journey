import java.util.*;

public class A_Qingshan_Loves_Strings_2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            String s = sc.nextLine();

            solve(s, n);
        }
        sc.close();
    }

    private static void solve(String s, int n) {
        int cz = 0, co = 0;
        for(char c : s.toCharArray()) {
            cz += (c == '0' ? 1 : 0);
            co += (c == '1' ? 1 : 0);
        }

        if(co != cz) {
            System.out.println(-1);
            return;
        }

        List<Integer> res = new ArrayList<>();
        Deque<Character> q = new ArrayDeque<>();
        for(char c : s.toCharArray()) {
            q.addLast(c);
        }

        int d = 0;
        while(!q.isEmpty()) {
            if(q.getFirst() == q.getLast()) {
                if(q.getFirst() == '0') {
                    q.addLast('0');
                    q.addLast('1');
                    res.add(n - d);
                }
                else {
                    q.addFirst('1');
                    q.addFirst('0');
                    res.add(d);
                }
                n += 2;
            }

            while(!q.isEmpty() && q.getFirst() != q.getLast()) {
                q.removeFirst();
                q.removeLast();
                d++;
            }
        }

        System.out.println(res.size());
        if(res.size() == 0)
            System.out.print(" ");
        for(int a : res)
            System.out.print(a + " ");
        System.out.println();
    }
}