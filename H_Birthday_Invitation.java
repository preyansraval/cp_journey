import java.util.*;

public class H_Birthday_Invitation {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();

        HashMap<Character, Integer> map = new HashMap<>();
        char[] c1 = s1.toCharArray();
        char[] c2 = s2.toCharArray();
        for(int i = 0;i < c1.length;i++) {
            if(c1[i] == ' ')
                continue;
            map.put(c1[i], map.getOrDefault(c1[i], 0) + 1);
        }
        
        boolean flag = true;
        for(int i = 0;i < c2.length;i++) {
            if(c2[i] == ' ')    continue;

            if(!map.containsKey(c2[i])) {
                flag = false;
                break;
            }
            else {
                map.put(c2[i], map.get(c2[i])-1);
                if(map.get(c2[i]) == 0)
                    map.remove(c2[i]);
            }
        }

        if(flag)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}