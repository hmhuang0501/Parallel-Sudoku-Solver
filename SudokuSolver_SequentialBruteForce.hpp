#ifndef SUDOKUSOLVER_SEQUENTIALBRUTEFORCE_HPP
#define SUDOKUSOLVER_SEQUENTIALBRUTEFORCE_HPP


#include "SudokuBoard.hpp"
#include "SudokuSolver.hpp"


class SudokuSolver_SequentialBruteForce : public SudokuSolver
{
public:
	SudokuSolver_SequentialBruteForce(bool print_message=true);

	// Solves the given Sudoku board using sequential brute force algorithm
	void solve(SudokuBoard& board, bool print_progress=true, int row=0, int col=0);
};


#endif   // SUDOKUSOLVER_SEQUENTIALBRUTEFORCE_HPP