import java.util.*;

class SolutionQ1 {
  private static  boolean[][] found;

  public static  char lookAround(char[][] grid, int i, int j) {
    // if we have reached a boundry or have already visited this node return 0
    if (
      i < 0 ||
      j < 0 ||
      i > grid.length - 1 ||
      j > grid[i].length - 1 ||
      found[i][j] == true
    ) {
      return '0';
    }
    // not at a boundry and have not visited this node
    else {
      if (grid[i][j] == '1') {
        // mark the node as visted and check the look around in all directions
        found[i][j] = true;
        // perform DFS with recusion
        //top
        lookAround(grid, i - 1, j);
        //bottom
        lookAround(grid, i + 1, j);
        //left
        lookAround(grid, i, j - 1);
        //right
        lookAround(grid, i, j + 1);

        return '1';
      }
    }

    // We are somewhere not at the boundry and this current node is not an island
    return '0';
  }

  public static  int numIslands(char[][] grid) {
    // boolean 2d array to flag visited areas
    found = new boolean[grid.length][grid[0].length];
    // number of total islands
    int counter = 0;

    // look through every index in this array
    for (int i = 0; i < grid.length; i++) {
      for (int j = 0; j < grid[i].length; j++) {
        // look at the current index and get the entire island stucture from it.
        // if its 1 it will return 1 and mark all adjacent 1s (the entire island) as visited
        // if its 0 (or water) do nothing
        char current = lookAround(grid, i, j);

        //have seen an island structure and explored it, increase the counter
        if (current == '1') {
          counter++;
        }
      }
    }
    // Return total number of islands
    return counter;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int rows, cols;
    rows = sc.nextInt();
    cols = sc.nextInt();
    sc.nextLine();
    char[][] values = new char[rows][cols];
    String[] temp = sc.nextLine().split(" ");
    int index = 0;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        values[i][j] = temp[index++].charAt(0);
      }
    }
    System.out.println(numIslands(values));
  }
}
