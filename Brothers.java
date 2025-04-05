import java.util.*;

public class Brothers {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        if(a.split(" ")[1].equals(b.split(" ")[1]))
            System.out.println("ARE Brothers");
        else
            System.out.println("NOT");
    }
}