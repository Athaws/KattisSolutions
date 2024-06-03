import java.util.*;

public class server {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int tests = sc.nextInt();
        int minutes = sc.nextInt();

        int totaltimetaken = 0, completedTests = 0;
        
        while (tests-- > 0){
            int currentTest = sc.nextInt();
            totaltimetaken += currentTest;
            completedTests++;
            if (totaltimetaken > minutes){
                minutes -= currentTest;
                completedTests--;
                break;
            }
            
        }
        System.out.print(completedTests);

        sc.close();
    }
}