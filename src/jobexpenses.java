import java.util.Scanner;

public class jobexpenses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers = sc.nextInt();
        sc.nextLine();
        
        int totalsum = 0;
        for (int i = 0; i < numbers; i++){
            int tmp = sc.nextInt();
            if (tmp < 0)
                totalsum += tmp;
        }
        sc.close();

        System.out.println(Math.abs(totalsum));
    }
}