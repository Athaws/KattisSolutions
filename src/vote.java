import java.util.*;

public class vote {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cases;
        cases = sc.nextInt();
        for (int i = 0; i < cases; i++){
            int candidates = sc.nextInt(), totalvotes = 0, mostvotes = 0, totalwinners = 0, winner = 0;

            ArrayList<Integer> candidateList = new ArrayList<>();
            for (int j = 0; j < candidates; j++){
                int votes = sc.nextInt();
                candidateList.add(votes);
                totalvotes += votes;
            }
            for (int j = 0; j < candidates; j++){
                mostvotes = Integer.max(mostvotes, candidateList.get(j));
            }
            for (int j = 0; j < candidates; j++){
                if (candidateList.get(j) == mostvotes){
                    totalwinners++;
                    winner = j;
                }
            }

            if (totalwinners > 1){
                System.out.println("no winner");
                continue;
            }
            
            if (mostvotes > (totalvotes / 2))
                System.out.println("majority winner " + ++winner);
            else
                System.out.println("minority winner " + ++winner);
        }

        sc.close();
    }
}