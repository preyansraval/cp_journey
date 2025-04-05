import java.util.*;

public class B_Rotate {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(String.valueOf(sc.nextLine()));
        int[][] mat = new int[n][n];
        for(int i = 0;i < n;i++) {
            String s = sc.nextLine();
            for(int j = 0;j < s.length();j++) {
                mat[i][j] = Integer.parseInt(String.valueOf(s.charAt(j)));
            }
        }

        rotateOuterShell(mat, n);
        display(mat, n);
    }

    private static void display(int[][] mat, int n) {
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                System.out.print(mat[i][j]);
            }
            System.out.println();
        }
    }

    private static void rotateOuterShell(int[][] mat, int n) {
        int size = 4 * (n-1);
        int[] arr = new int[size];
        int r = 0, c = 0;
        int idx = 0;
        while(idx < size) {
            //upper wall
            while(c < n && idx < size) {
                arr[idx++] = mat[r][c++];
            }
            c--;
            r++;
            //Right wall
            while(r < n && idx < size) {
                arr[idx++] = mat[r][c];
                r++;
            }
            r--;
            c--;
            //Lower Wall
            while(c >= 0 && idx < size) {
                arr[idx++] = mat[r][c--];
            }
            c++;
            r--;
            //Left wall
            while(r > 0 && idx < size) {
                arr[idx++] = mat[r--][c];
            }
        }

        reverse(arr, 0, size - 2);
        reverse(arr, 0, size - 1);
        r = 0;
        c = 0;
        idx = 0;
        while(idx < size) {
            //upper wall
            while(c < n && idx < size) {
                mat[r][c++] = arr[idx++];
            }
            c--;
            r++;
            //Right wall
            while(r < n && idx < size) {
                mat[r++][c] = arr[idx++];
            }
            r--;
            c--;
            //Lower Wall
            while(c >= 0 && idx < size) {
                mat[r][c--] = arr[idx++];
            }
            c++;
            r--;
            //Left wall
            while(r > 0 && idx < size) {
                mat[r--][c] = arr[idx++];
            }
        }
    }

    private static void reverse(int[] arr, int l, int r) {
        while(l <= r) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }
}