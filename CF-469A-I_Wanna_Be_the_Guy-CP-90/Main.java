import java.util.HashSet;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // Scanner Setup
        Scanner sc = new Scanner(System.in);
        //
        HashSet<Integer> levels = new HashSet<>();

        int n = sc.nextInt();

        int p1 = sc.nextInt();
        for (int i = 0; i < p1; i++) {
            int ai = sc.nextInt();
            levels.add(ai);
        }

        int p2 = sc.nextInt();
        for (int i = 0; i < p2; i++) {
            int ai = sc.nextInt();
            levels.add(ai);
        }

        if (levels.size() == n) {
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }

        sc.close();
    }
}