import java.util.*;

class Pair implements Comparable<Pair> {
  public int first;
  public int second;

  public Pair(int f, int s) {
    this.first = f;
    this.second = s;
  }

  public Pair() {
    this.first = -1;
    this.second = -1;
  }

  public static boolean compare(Pair p1, Pair p2) {
    if (p1.first == p2.second) return p1.second < p2.second;
    return p1.first < p2.first;
  }

  public int compareTo(Pair sd) {
    if (this.first == sd.first) return this.second - sd.second;
    return this.first - sd.first;
  }
}

class SolutionQ2 {

  public static void main(String[] args) {
    Scanner src = new Scanner(System.in);
    int tests = src.nextInt();
    while (tests > 0) {
      tests--;
      int n = src.nextInt();
      ArrayList<Pair> l = new ArrayList<Pair>();
      for (int i = 0; i < n; i++) {
        Pair temp = new Pair();
        temp.first = src.nextInt();
        temp.second = i;
        l.add(temp);
      }
      Collections.sort(l);
      if (l.get(0).first == l.get(n - 1).first) {
        System.out.println("All good");
      } else if (
        ((l.get(0).first + l.get(n - 1).first) % 2 == 1) ||
        (
          n > 2 &&
          (l.get(1).first != l.get(n - 2).first) ||
          (l.get(1).first != (l.get(0).first + l.get(n - 1).first) / 2)
        )
      ) {
        System.out.println("You are dead.");
      } else {
        System.out.println(
          "You shifted " +
          (l.get(n - 1).first - l.get(0).first) /
          2 +
          " amount from glass #" +
          l.get(0).second +
          1 +
          " to glass #" +
          l.get(n - 1).second +
          1 +
          "."
        );
      }
    }
  }
}
