#include <vector>

using std::vector;

class Matrix {
public:
	Matrix(vector< vector< double> > mat_in)
		: mat(mat_in) {};

	int convert_to_rref();

	vector<double> solve();

private:
	vector< vector<double> > mat;
}