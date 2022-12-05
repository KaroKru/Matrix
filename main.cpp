#include <iostream>


void aboutCode()
{
	std::cout << "Code for the calculation the determinant of the square matrix size of 1x1, 2x2, or 3x3" << std::endl;
	std::cout << "The size of matrix: 1 - 1x1, 2 - 2x2, 3 - 3x3" << std::endl;
}

double matrix1x1()
{
	std::cout << "provide the element of matrix" << std::endl;
	double a11{};
	std::cin >> a11;

	std::cout << "the det of matrix 1x1: " << a11 << std::endl;

	return a11;
}

double matrix2x2()
{
	std::cout << "provide the 4 elements of matrix row by row" << std::endl;
	double a11{};
	double a12{};
	double a21{};
	double a22{};
	std::cout << "first row (2 elements)" << std::endl;
	std::cin >> a11 >> a12;
	std::cout << "first row (2 elements)" << std::endl;
	std::cin >> a21 >> a22;

	
	double det2x2 = (a11 * a22) - (a12 * a21);

	std::cout << "the det of matrix 2x2: " << det2x2 << std::endl;

	return det2x2;
}

double matrix3x3()
{
	std::cout << "provide the 4 elements of matrix row by row" << std::endl;
	double a11{};
	double a12{};
	double a13{};
	double a21{};
	double a22{};
	double a23{};
	double a31{};
	double a32{};
	double a33{};

	std::cout << "first row (3 elements)" << std::endl;
	std::cin >> a11 >> a12 >> a13;
	std::cout << "second row (3 elements)" << std::endl;
	std::cin >> a21 >> a22 >> a23;
	std::cout << "third row (3 elements)" << std::endl;
	std::cin >> a31 >> a32 >> a33;

	double det3x3= (a11 * a22 * a33) + (a12 * a23 * a31) + (a13 * a21 * a32) - (a11 * a23 * a32) - (a12 * a21 * a33) - (a13 * a22 * a31);

	std::cout << "the det of matrix 3x3: " << det3x3 << std::endl;

	return det3x3;
}


void matrixSize(int& sizeOfMatrix)
{
	switch (sizeOfMatrix)
	{
		case 1:
			std::cout << "1x1" << std::endl;
			matrix1x1();
			break;

		case 2:
			std::cout << "2x2" << std::endl;
			matrix2x2();
			break;

		case 3:
			std::cout << "3x3" << std::endl;
			matrix3x3();
			break;

		default:
			std::cout << "for 4x4 or bigger use the laplace method" << std::endl;
			std::cout << "exit" << std::endl;
			break;
	}
}


int main()
{
	aboutCode();

	int size{};
	std::cout << "Provide value ";
	std::cin >> size;

	matrixSize(size);

	return 0;
}