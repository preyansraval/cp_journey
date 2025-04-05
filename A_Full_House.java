import java.util.*;

public class A_Full_House {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a, b, c, d, e;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        e = sc.nextInt();
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(a, map.getOrDefault(a, 0) + 1);
        map.put(b, map.getOrDefault(b, 0) + 1);
        map.put(c, map.getOrDefault(c, 0) + 1);
        map.put(d, map.getOrDefault(d, 0) + 1);
        map.put(e, map.getOrDefault(e, 0) + 1);
        boolean flag = true;
        if(map.size() == 2) {
            for(int key : map.keySet()) {
                if(map.get(key) != 2 && map.get(key) != 3) {
                    flag = false;
                    break;
                }
            }

            if(flag)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
        else {
            System.out.println("No");
        }
        sc.close();
    }
}