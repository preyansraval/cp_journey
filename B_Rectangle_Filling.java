import java.util.*;

public class B_Rectangle_Filling {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long t = Long.parseLong(sc.nextLine());
        while(t-- > 0) {
            int n, m;
            String[] rowCol = sc.nextLine().split(" ");
            n = Integer.parseInt(rowCol[0]);
            m = Integer.parseInt(rowCol[1]);

            char[][] board = new char[n][m];
            for(int i = 0;i < n;i++) {
                char[] s = sc.nextLine().toCharArray();
                for(int j = 0;j < m;j++) {
                    board[i][j] = (s[j]);
                }
            }

            solve(n, m, board);
        }
    }

    private static void solve(int n, int m, char[][] board) {
        if(board[0][0] == board[n-1][m-1] || board[0][m-1] == board[n-1][0]) {
            System.out.println("YES");
            return;
        }
    
        boolean possible = false;
        //check first and last row
        for(int j=0;j < m-1;j++) {
            if((board[0][j] != board[0][j+1] && board[n-1][0] == board[n-1][m-1]) || (board[n-1][j] != board[n-1][j+1] && board[0][0] == board[0][m-1])) {
                possible = true;
                break;
            }
        }
    
        //check first and last column
        for(int i = 0;i < n-1;i++) {
            if((board[i][0] != board[i+1][0] && board[0][0] == board[n-1][0]) || (board[i][m-1] != board[i+1][m-1] && board[0][m-1] == board[n-1][m-1])) {
                possible = true;
                break;
            }
        }

        if(possible)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}