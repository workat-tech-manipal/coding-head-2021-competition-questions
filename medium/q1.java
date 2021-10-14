import java.util.*;

class SolutionQ1 {

  public static void main(String[] args) {
    Scanner src = new Scanner(System.in);
    int tests = src.nextInt();
    while (tests > 0) {
      tests--;
      long a, b, c;
      a = src.nextInt();
      if (a % 2 != 0) {
        b = ((a * a) + 1) / 2;
        c = b - 1;
        if (b > 0 && c > 0) {
          System.out.println(b + " " + c);
        } else System.out.println("-1");
      } else if (a > 2 && a % 2 == 0) {
        b = a * a;
        b = b / 4;
        c = b + 1;
        b = b - 1;
        System.out.println(b + " " + c);
      } else if (a == 2) System.out.println("-1");
    }
  }
}
