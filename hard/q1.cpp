#include <iostream>
#include <vector>

using namespace std;

bool check(int row, int col, int rows, int cols, vector<vector<bool>> &visited, vector<vector<char>> &grid)
{
    return row >= 0 && col >= 0 && col < cols && row < rows && !visited[row][col] && grid[row][col] != '0';
}

void helper(int row, int col, vector<vector<char>> &grid, vector<vector<bool>> &visited, int rows, int cols)
{

    visited[row][col] = 1;
    //UP
    if (check(row - 1, col, rows, cols, visited, grid))
    {
        helper(row - 1, col, grid, visited, rows, cols);
    }
    //DOWN

    if (check(row + 1, col, rows, cols, visited, grid))
    {
        helper(row + 1, col, grid, visited, rows, cols);
    }
    //LEFT

    if (check(row, col - 1, rows, cols, visited, grid))
    {
        helper(row, col - 1, grid, visited, rows, cols);
    }

    //RIGHT

    if (check(row, col + 1, rows, cols, visited, grid))
    {
        helper(row, col + 1, grid, visited, rows, cols);
    }

    return;
}

int numIslands(vector<vector<char>> &grid)
{
    const int rows = static_cast<int>(grid.size());
    const int cols = static_cast<int>(grid[0].size());
    vector<vector<bool>> visited(rows, vector<bool>(cols, 0));
    int counter{};

    for (int i{}; i < rows; i++)
    {
        for (int j{}; j < cols; j++)
        {
            if (!visited[i][j] && grid[i][j] != '0')
            {
                visited[i][j] = true;
                helper(i, j, grid, visited, rows, cols);

                ++counter;
            }
        }
    }

    return counter;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<char>> values(rows, vector<char>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cin >> values[i][j];
    }
    cout << numIslands(values) << '\n';
    return 0;
}