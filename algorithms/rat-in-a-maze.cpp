#include <iostream>
#include <vector>

using namespace std;

/**
 * @author Elviro Dominguez Soriano A01424591
 * @brief A rat in maze problem program in c++
 * @date Aug 19, 2022
 * @note complexity: O(n^2)
 */

bool solveMazeUtil(vector<vector<int>>, int, int, vector<vector<int>>&, int);
int inputValidation(int);

int inputValidation(int value) {
    while (!(cin >> value) || value < 0) {
        if (!cin) {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Please enter a positive number: ";
    }
    return value;
}

/** @note print Maze matrix solution */
void printSolution(vector<vector<int>> sol, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

/** @note check if row and column are valid indices */
bool isSafe(vector<vector<int>> maze, int row, int col, int n){

    /** @note if (x, y outside maze) return false */
    if (row >= 0 && row < n && col >= 0 && col < n && maze[row][col] == 1) {
        return true;
    } 
    return false;
}

/** @note check if the maze is solved using Backtracking with SolveMazeUtil and then check if its possible and print solution, otherwise return false */
bool solveMaze(vector<vector<int>> maze, int n) {
    vector<vector<int>> sol(n);

    for(int i = 0; i < n; i++) {   
        sol[i] = vector<int>(n);
        for(int j = 0; j < n; j++) {
            sol[i][j] = 0;
        }
    }
    
    if (solveMazeUtil(maze, 0, 0, sol, n) == false) {
        cout<<"Solution doesn't exist";
        return false;
    }

    cout << endl;
    printSolution(sol, n);
    return true;
}

bool solveMazeUtil(vector<vector<int>> maze, int row, int col, vector<vector<int>> &sol, int n) {
    /** @note if (row and col is goal return true) */
    if (row == n - 1 && col == n - 1 && maze[row][col] == 1) {
        sol[row][col] = 1;
        return true;
    }

    /** @note check if maze row and col is valid */
    if (isSafe(maze, row, col, n) == true) {

        /** @note check if the current cell is already part of solution path */
        if (sol[row][col] == 1) {
            return false; 
        }
        
        /** @note mark row and col as part of solution path */
        sol[row][col] = 1;

        if (solveMazeUtil(maze, row + 1, col, sol, n) == true) {
            return true;
        }

        /** @note if move in x doesn't work move down bellos in y direction */
        if (solveMazeUtil(maze, row, col +1, sol, n) == true) {
            return true;
        }

        /** @note if move in x and y doesn't work unmark row and col with BACKTRACK*/
        sol[row][col] = 0;
        return false;
    } 
    return false;
}

int main() {
    int m, n, cells = 0;

    cout << "Enter the number of rows: \n >";
    m = inputValidation(m);
    cout << "Enter the number of columns: \n >";
    n = inputValidation(n);

    vector<vector<int>> maze (n);

    for(int i = 0; i < n; i++) {   
        maze[i] = vector<int>(m);
        for(int j = 0; j < m; j++) {
            cin >> maze[i][j];
        }
    }

    solveMaze(maze, n);

    return 0;
}
