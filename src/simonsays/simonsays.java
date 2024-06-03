import java.util.*;

public class simonsays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cases = sc.nextInt();
        sc.nextLine();
        
        for (int i = 0; i < cases; i++) {
            String input = sc.nextLine();
            if(input.startsWith("Simon says"))
                System.out.println(input.substring(10));
            else
                continue;
        }
        sc.close();
    }
}