#include "Matrix.h"
#include <iostream>

using std::cout;

// True if test passes, False otherwise
// mat is matrix to test, sol is the correct solution
// Outputs information on test to std::cout
bool test(const vector< vector<double> > &mat, const vector<double> &sol, int test_num) {
	cout << "Test" + test_num + ": ";
	Matrix test_mat = Matrix(mat);
	vector<double> output = test_mat.solve();
	if(output != sol) {
		cout << "FAILED\n{";
		for(int i = 0; i < output.size(); ++i) {
			cout << output.at(i);
			if(i != output.size() - 1)
				cout << ", ";
		}
		cout << "} !=\n{"
		for(int i = 0; i < sol.size(); ++i) {
			cout << sol.at(i);
			if(i != sol.size() - 1)
				cout << ", ";
		}
		cout << "}\n";
		return false;
	}
	else {
		cout << "PASSED\n";
		return true;
	}
}

int main(int argc, char* argv[]) {

	cout << "Beginning Matrix Solver Tests\n";
	cout << "=============================\n";

	// Test 1
	vector< vector<double> > m1 {
		{1, 2, 3, 0},
		{4, 5, 6, 0},
		{7, 8, 9, 0}
	};
	vector<double> s1 {0, 0, 0};
	test(m1, s1, 1);

	// Test 2
	vector< vector<double> > m2 {
		{1, 1, 1},
		{2, -1, 5},
		{3, 4, 2}
	};
	vector<double> s2 {2, -1};
	test(m2, s2, 2);

	// Test 3
	vector< vector<double> > m3 {
		{1, 2, 4, -8},
		{4, 5, 6, -1},
		{7, 8, 9, 2},
		{5, 3, 1, 15},
	};
	vector<double> s3 {2, -1};
	test(m3, s3, 2);	

	// Test 4
	vector< vector<double> > m4 {
		{1, 1}
	};
	vector<double> s4 {1};
	test(m4, s4, 4);

}