import java.util.*;

public class A_Constructive_Problem {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            long[] a = new long[n];
            String[] str = sc.nextLine().split(" ");
            for(int i = 0;i < n;i++) {
                a[i] = Long.parseLong(str[i]);
            }

            long[] arrCopy = Arrays.copyOf(a, n);
            Arrays.sort(arrCopy);
            long currMex = 0;
            for(int i = 0;i < n;i++) {
                if(arrCopy[i] == currMex)
                    currMex++;
            }
            long targetMex = currMex + 1;
            int l = -1, r = -1;
            for(int i = 0;i < n;i++) {
                if(a[i] == targetMex) {
                    if(l == -1)
                        l = i;
                    r = i;
                }
            }

            if(l != -1) {
                for(int i = l;i <= r;i++) {
                    a[i] = currMex;
                }

                arrCopy = Arrays.copyOf(a, n);
                Arrays.sort(arrCopy);
                long newMex = 0;
                for(int i = 0;i < n;i++) {
                    if(arrCopy[i] == newMex) {
                        newMex++;
                    }
                }

                if(newMex == targetMex)
                    System.out.println("Yes");
                else
                    System.out.println("No");
            }
            else {
                int flag = 0;
                HashMap<Long, Integer> map = new HashMap<>();
                for(int i = 0;i < n;i++)
                    map.put(a[i], map.getOrDefault(a[i], 0) + 1);
                
                for(long key : map.keySet()) {
                    if(key < currMex && map.get(key) > 1)
                        flag = 1;
                    
                    if(key > targetMex)
                        flag = 1;
                }

                if(flag == 1)
                    System.out.println("Yes");
                else
                    System.out.println("No");
            }
        }
        sc.close();
    }
}