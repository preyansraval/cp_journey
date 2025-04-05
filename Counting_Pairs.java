import java.util.*;

public class Counting_Pairs {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            long n = sc.nextInt();
            long x = sc.nextInt();
            long y = sc.nextInt();
            long[] arr = new long[(int) n];
            for(int i = 0;i < n;i++) {
                arr[i] = sc.nextInt();
            }

            long count = getPairs(arr, n, x, y);
            System.out.println(count);
        }
    }

    private static long getPairs(long[] arr, long n, long x, long y) {
        HashMap<Long, Long> map = new HashMap<>();
        long total = 0;
        long count = 0;
        for(long a : arr) {
            map.put(a, map.getOrDefault(a, 0l) + 1);
            total += a;
        }

        for(long a : arr) {
            long i = total - a - x;
            long j = total - a - y;
            if(map.containsKey(a)) {
                for(long k = j;k <= i;k++) {
                    if(map.containsKey(k) && a != k)
                        count += map.get(a) * map.get(k);
                    else if(map.containsKey(k) && a == k) {
                        long p = map.get(a);
                        count += ((p * (p-1))/2);
                    }
                }
                map.remove(a);
            }
        }
        return count;
    }
}