import java.util.*;

public class A_When {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int hh = 21;
        int mm = 0;
        int h = k/60;
        int m = k%60;
        hh += h;
        mm += m;
        String strHH = String.valueOf(hh);
        String strMM = (mm > 9 ? String.valueOf(mm) : "0" + mm);
        System.out.println(strHH + ":" + strMM);
        sc.close();
    }
}