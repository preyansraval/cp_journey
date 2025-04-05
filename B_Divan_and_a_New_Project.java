import java.util.*;

public class B_Divan_and_a_New_Project {
    static class MyPair implements Comparable<MyPair> {
        long val;
        long idx;

        public MyPair(long val, long idx) {
            this.val = val;
            this.idx = idx;
        }

        public int compareTo(MyPair o) {
            return (int) (this.val - o.val);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            long n = Long.parseLong(sc.nextLine());
            long[] nums = new long[(int) n];
            String[] s = sc.nextLine().split(" ");
            for(int i = 0;i < n;i++)
                nums[i] = Long.parseLong(s[i]);
            
            solve(n, nums);
        }
        sc.close();
    }

    public static void solve(long n, long[] nums) {
        MyPair[] arr = new MyPair[(int)n];
        for(int i = 0;i < n;i++) {
            arr[i] = new MyPair(nums[i], i);
        }
        Arrays.sort(arr);
        long pos = 1;
        long neg = -1;
        long[] ans = new long[(int)(n+1)];
        for(int i = (int) n-1;i >= 0;i--) {
            if((i & 1) == 0) {
                ans[(int) (arr[i].idx + 1)] = pos++;
            }
            else {
                ans[(int) (arr[i].idx + 1)] = neg--;
            }
        }

        long val = 0;
        for(int i = 1;i <= n;i++) {
            val += (2 * Math.abs(ans[(int) i]) * nums[i-1]);
        }
        System.out.println(val);
        for(long a : ans)
            System.out.print(a + " ");
        System.out.println();
    }
}