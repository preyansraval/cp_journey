import java.util.*;

public class E_WUB {
    public static void main(String arrgs[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        s = s.replace("WUB", " ");
        s = s.trim();
        String[] arr = s.split(" ");
        for(int i = 0;i < arr.length;i++) {
            if(!arr[i].equals(" ") && !arr[i].equals(""))
            System.out.print(i == arr.length - 1 ? arr[i] : arr[i] + " ");
        }
    }
}