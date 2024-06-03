import java.util.*;

public class quiteaproblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            String input= sc.nextLine();
            if(input.toLowerCase().contains("problem"))
                System.out.println("yes");
            else
                System.out.println("no");
        }
        sc.close();
    }
}