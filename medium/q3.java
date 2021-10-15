import java.util.*;

class SolutionQ3 {

  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int tests = sc.nextInt();
    for (int i=0;i<tests;i++){
      int n = sc.nextInt();
      int k = sc.nextInt();
      String s = sc.next();
      System.out.println(Math.max(getAns(s, 'x', k), getAns(s, 'y', k)));
    }

  }

  static int getAns(String s, char c, int k) {
    int i = 0, j = 0, k1 = 0, ans = 0;
    int n = s.length();
    while (i < n) {
      while (j < n && (s.charAt(j) == c || k1 < k)) {
        if (s.charAt(j) != c) k1++;
        j++;
      }
      ans = Math.max(j - i, ans);
      if (s.charAt(i) != c) {
        k1--;
      }
      i++;
    }
    return ans;
  }
}
