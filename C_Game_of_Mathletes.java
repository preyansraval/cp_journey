import java.util.*;

public class C_Game_of_Mathletes {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            String[] str1 = sc.nextLine().split(" ");
            int n = Integer.parseInt(str1[0]);
            int k = Integer.parseInt(str1[1]);
            int[] arr = new int[n];
            String[] str2 = sc.nextLine().split(" ");
            for(int i = 0;i < n;i++) {
                arr[i] = Integer.parseInt(str2[i]);
            }

            solve(n, k, arr);
        }
        sc.close();
    }

    private static void solve(int n, int k, int[] arr) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int a : arr) {
            map.put(a, map.getOrDefault(a, 0) + 1);
        }

        int score = 0;
        for(int i = 0;i < n;i++) {
            int a = arr[i];
            int b = k - arr[i];
            if(a == b) {
                if(map.containsKey(a)) {
                    score += map.get(a)/2;
                    map.remove(a);
                }
            }
            else {
                if(map != null && map.containsKey(a)) {
                    if(map.containsKey(b)) {
                        score += Math.min(map.get(a), map.get(b));
                        map.remove(a);
                        map.remove(b);
                    }
                    else {
                        map.remove(a);
                    }
                }
            }
        }
        System.out.println(score);
    }
} 