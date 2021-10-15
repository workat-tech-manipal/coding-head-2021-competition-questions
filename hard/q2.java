import java.util.*;

class SolutionQ2 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int tests = sc.nextInt();
    while (tests > 0) {
      ArrayList<Long> partitions = new ArrayList<>();
      partitions.add(1l);
      long modulo = 1000000007;
      tests--;
      int limit = sc.nextInt();
      for (int n = partitions.size(); n <= limit; n++) {
        long sum = 0;

        for (int i = 0;; i++) { // abort inside loop
          int alternate = 1 + (i / 2);
          if (i % 2 == 1) alternate = -alternate;
          int offset = alternate * (3 * alternate - 1) / 2;
          if (n < offset) break;
          if (i % 4 < 2) sum += partitions.get(n - offset); else sum -=
            partitions.get(n - offset);
          sum %= modulo;
        }
        if (sum < 0) sum += modulo;

        partitions.add(sum);
      }

      System.out.println(partitions.get(limit));
    }
  }
}
