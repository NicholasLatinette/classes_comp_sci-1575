/**
Implement the main here to match input and output. 
**/

#include "matrix_search.h"

int main()
{
    int times_used;
    cin >> times_used;
    for (int i = 0; i < times_used; i++)
    {
        int rows, cols;
        string word;
        cin >> rows;
        cin >> cols;
        char ** matrix = (build_matrix(rows, cols));
        fill_matrix(rows,cols,matrix);
        print_matrix(rows,cols,matrix);
        int sol[4]; 
        cin >> word;
        cout << "Searhing for \"" << word << "\" in matrix " << i
             << " yields:" << endl;
        matrix_search(sol, word, rows, cols, matrix);
        delete_matrix(rows,matrix);
    }
    return 0;
}

