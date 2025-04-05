import java.io.*;

public class IsItACat {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine().toString());
        while(n > 0) { 
            int size = Integer.parseInt(br.readLine().toString());
            String s = br.readLine().toString().toLowerCase();
            if(isCat(s.toCharArray(), size))
                System.out.println("YES");
            else
                System.out.println("NO");
            n--;
        }
    }

    private static boolean isCat(char[] s, int size) {
        if(s[0] != 'm')  return false;
        for(int i = 0;i < size-1;i++) {
            if(s[i] != s[i+1]) {
                if((s[i] == 'm' && s[i+1] != 'e') || (s[i] == 'e' && s[i+1] != 'o') || (s[i] == 'o' && s[i+1] != 'w') || (s[i] == 'w' && s[i+1] != 'w'))
                    return false;
            }
        }
        if(s[size-1] != 'w')    return false;
        return true;
    }
}