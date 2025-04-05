import java.util.*;

public class B_Pasta {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(" ");
        String[] s1 = sc.nextLine().split(" ");
        String[] s2 = sc.nextLine().split(" ");

        int n = Integer.parseInt(s[0]);
        int m = Integer.parseInt(s[1]);
        int[] a = new int[n];
        int[] b = new int[m];

        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i = 0;i < n;i++) {
            a[i] = Integer.parseInt(s1[i]);
            map.put(a[i], map.getOrDefault(a[i], 0) + 1);
        }
            
        boolean flag = true;    
        for(int i = 0;i < m;i++) {
            b[i] = Integer.parseInt(s2[i]);
            if(!map.containsKey(b[i]) || map.get(b[i]) == 0) {
                flag = false;
                break;
            }
            else {
                map.put(b[i], map.get(b[i]) - 1);
            }
        }

        if(flag)
            System.out.println("Yes");
        else   
            System.out.println("No");
        sc.close();
    }
}