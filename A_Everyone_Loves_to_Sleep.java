import java.util.*;

public class A_Everyone_Loves_to_Sleep {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int H = sc.nextInt();
            int M = sc.nextInt();
            int[][] times = new int[n][2];
            boolean flag = true;
            for(int i = 0;i < n;i++) {
                times[i][0] = sc.nextInt();
                times[i][1] = sc.nextInt();
                if(times[i][0] == H && times[i][1] == M) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                Arrays.sort(times, (a, b) -> (a[0] - b[0]));
                solve(times[0][0], times[0][1], H, M);
            }
            else {
                System.out.println("0 0");
            }
        }
    }

    public static void solve(int h, int m, int H, int M) {
        int ansH = 0;
        int ansM = 0;
        if(h > H) {
            if(m > M) {
                ansH = h - H;
                ansM = m - M;
            }
            else {
                m += 60;
                h -= 1;
                ansH = h - H;
                ansM = m - M;
            }
        }
        else {
            int tempH = 23 - H;
            int tempM = 60 - M;
            m += tempM;
            h += tempH;
            int c = m / 60;
            m %= 60;
            h += c;
            ansH = h;
            ansM = m;
        }
        System.out.println(ansH + " " + ansM);
    }
}