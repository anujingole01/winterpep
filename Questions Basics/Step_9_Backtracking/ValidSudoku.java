package Questions.Step_9_Backtracking;

import java.util.HashSet;
import java.util.Set;

public class ValidSudoku {
    public boolean isValidSudoku(char[][] board) {
        Set<String> seen = new HashSet<>();
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char number = board[i][j];
                if (number != '.') {
                    if (!seen.add(number + " in row " + i) ||
                            !seen.add(number + " in column " + j) ||
                            !seen.add(number + " in block " + i / 3 + "-" + j / 3))
                        return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        // No Main method implementation provided as constructing a 9x9 board is verbose
        // But the solution logic is complete.
        System.out.println("Valid Sudoku implementation complete.");
    }
}
