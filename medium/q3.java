import java.util.*;

class SolutionQ3 {

  public static void main(String[] args) {
    Scanner src = new Scanner(System.in);
    int tests = src.nextInt();
    while (tests > 0) {
      tests--;
      int n = src.nextInt();
      src.nextLine();

      int k = src.nextInt();
      src.nextLine();

      String s = src.nextLine();

      HashMap<Character, Integer> m = new HashMap<Character, Integer>();
      m.put('x', 0);
      m.put('y', 0);
      int max_result = -1, left = 0, right = 0;
      while (right < n) {
        if (s.charAt(right) == 'y' && m.get('y') < k) {
          if (m.containsKey(s.charAt(right))) {
            m.replace(s.charAt(right), m.get(s.charAt(right)) + 1);
          } else {
            m.put(s.charAt(right), +1);
          }
          right++;
        } else if (s.charAt(right) == 'x') {
          right++;
        } else {
          if (m.containsKey(s.charAt(left))) {
            m.replace(s.charAt(left), m.get(s.charAt(left)) + 1);
          } else {
            m.put(s.charAt(left), 1);
          }
          left++;
        }

        max_result = Math.max(max_result, right - left);
      }
      right = 0;
      left = 0;
      m.clear();
      m.put('x', 0);
      m.put('y', 0);
      while (right < n) {
        if (s.charAt(right) == 'x' && m.get('x') < k) {
          if (m.containsKey(s.charAt(right))) {
            m.replace(s.charAt(right), m.get(s.charAt(right)) + 1);
          } else {
            m.put(s.charAt(right), +1);
          }
          right++;
        } else if (s.charAt(right) == 'y') {
          right++;
        } else {
          if (m.containsKey(s.charAt(left))) {
            m.replace(s.charAt(left), m.get(s.charAt(left)) + 1);
          } else {
            m.put(s.charAt(left), 1);
          }
          left++;
        }

        max_result = Math.max(max_result, right - left);
      }
      System.out.println(max_result);
    }
  }
}
