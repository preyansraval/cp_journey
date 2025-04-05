import java.util.*;

public class A_You_Are_Given_Two_Binary_Strings {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(String.valueOf(sc.nextLine()));
        while(t-- > 0) {
            StringBuilder x = new StringBuilder(sc.nextLine().toString());
            StringBuilder y = new StringBuilder(sc.nextLine().toString());

            int pos_y = findLSBFromGivenIdx(y.reverse().toString(), 0);
            int pos_x  = findLSBFromGivenIdx(x.reverse().toString(), pos_y);

            int k = (pos_x - pos_y);
            System.out.println(k);
        }
    }

    private static int findLSBFromGivenIdx(String num, int idx) {
        for(int i = idx;i < num.length();i++) {
            if(num.charAt(i) == '1')
                return i;
        }
        return -1;
    }
}