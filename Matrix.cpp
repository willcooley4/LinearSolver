#include "Matrix.h"

int Matrix::convert_to_rref() {
	// From top to bottom
	for(int i = 0; i < mat.size(); ++i) {
		// Find pivot (first coeff in row != 0)
		auto it = std::find_if_not(mat[i].begin(), mat[mat.size() - 1], [](int i){return i!=0};);
		int index = it - mat[i].begin(); // column to be used later
		pivot = mat[0][index];

		// Divide ith row by leading entry to get leading 1
		for(int j = 0; j < mat[i].size(); ++i) {
			mat[0][j] /= pivot;
		}

		// Eliminate non-zero coeffs in column
		for(int j = 0; j < mat.size(); ++j) {

		}
	}
}

vector<double> Matrix::solve() {

}