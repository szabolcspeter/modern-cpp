int main() {
	int *p1 = new int[3];
	int *p2 = new int[3];

	// Allocate memory for array of pointers
	int **pData = new int *[2];

	pData[0] = p1;
	pData[1] = p2;

	// Access the elements
	pData[0][1] = 2; // 1st row 2nd element (p1[1])

	// Free memory
	delete []pData[0]; // delete [] p1;
	delete []pData[1]; // delete [] p2;
	delete []pData; // free pointer array

	return 0;
}