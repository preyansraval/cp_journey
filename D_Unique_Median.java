import java.util.*;

public class D_Unique_Median {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            int[] arr = new int[n];
            String[] str = sc.nextLine().split(" ");
            for(int i = 0;i < n;i++) {
                arr[i] = Integer.parseInt(str[i]);
            }

            int total = (n * (n+1))/2;
            int ans = total/2;
            Arrays.sort(arr);
            for(int s = 0;s < n;s++) {
                for(int e = s+1;e <n;e+=2) {
                    int m = (e+s)/2;
                    if(arr[m] == arr[m + 1])
                        ans++;
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}