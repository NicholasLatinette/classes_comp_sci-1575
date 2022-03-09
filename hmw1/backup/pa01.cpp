/**
Implement the main here to match input and output. 
**/

#include "matrix_search.h"

int main()
{
    // Write your main here.
    int rows, cols;
    string word;
    cout << "How many rows?" << endl;
    cin >> rows;
    cout << "How many cols" << endl;
    cin >> cols;
    char ** matrix = (build_matrix(rows, cols));
    fill_matrix(rows,cols,matrix);
    print_matrix(rows,cols,matrix);
    int sol[4]; //create this and stuff
    cout << "Check array for what word?" << endl;
    cin >> word;
    matrix_search(sol, word, rows, cols, matrix);
    delete_matrix(rows,matrix);

    return 0;
}

