/**
Here in the .cpp you should define and implement the functions that are declared in the .h file.
It is not recommended to add extra functions on this assignment.
**/

#include "matrix_search.h"


// We're giving you this one the first time, and you should copy it into all future assignments.
// Change the information to your own email handle (S&T username)
void get_identity(string &my_id)
{
    my_id = "nalrnw";
}


char ** build_matrix(int rows, int cols)
{
    // Define your function here
    char ** a = new char * [rows];
    for (int x = 0; x < rows; x++)
        a[x] = new char [cols];
    return a;
}


void fill_matrix(int rows, int cols, char **matrix)
{
    // Define your function here
    for(int i = 0; i < rows; i++)
    {
        char o;
        cin >> o;
        matrix[i][0] = o;
        for(int x = 1; x<cols; x++)
        {
            char p;
            cin >> p; 
            matrix[i][x] = p;
        }
        cout << endl; 
    }
    return;
}


void print_matrix(int rows, int cols, char **matrix)
{
    // Define your function here
      for(int i = 0; i < rows; i++)
    {
        cout << matrix[i][0] << " ";
        for(int x = 1; x<cols; x++)
        {
            cout << matrix[i][x] << " ";
        }
    }
}


void delete_matrix(int rows, char **matrix)
{
    // Define your function here
    for (int i = 0; i < rows; i++)
      delete []matrix[i];
    delete []matrix;
    matrix = nullptr;
    return;
}


void matrix_search(int sol[], string word, int rows, int cols, char **matrix)
{
    // Define your function here
    int i = 0;
    int amount_of_char = 0;
    bool word_found = false;
    while(word[i] != '\0')
    {
        i++;
        amount_of_char++;
    }
    int p = 0;
    int d = 0;
    int o = 0;
    int n;
    bool word_not_here = false;
    for(int i = 0; i < rows; i++)
    {
        for(int u = 0; u < cols; u++)
        {
            word_not_here = false;
            if(word.at(p) == matrix[i][u] && word_found != true)
            {

                d = i;
                o = u;
                sol[0] = d;                     
                sol[1] = o;
                for(n = 1; n < amount_of_char; n++)
                {
                    
                    if((d+1 < rows && o+1 < cols) && matrix[d+1][o+1] == word.at(n) && word_not_here != true) //*** This is a diagonal search bottom right
                    {
                        d++;
                        o++;
                        if(word[n+1] == '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;

                        }
                    }
                    else
                    {
                        word_not_here = true;
                    }
                    
                }
                d = i;
                o = u;
                word_not_here = false;

                for(n = 1; n < amount_of_char; n++)
                {
                    if(d+1 < rows && matrix[d+1][o] == word.at(n) && word_not_here != true) //*** This is a top to bottom search
                    {
                        d++;
                        if(word[n+1]== '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;
                        }
                       
                        
                    }
                    else
                        {
                            word_not_here = true;
                        }
                }
                d = i;
                o = u;
                word_not_here = false;

                for(n = 1; n < amount_of_char; n++)
                {
                    if((d-1 > -1) && matrix[d-1][o] == word.at(n) && word_not_here != true) //*** This is a bot to top search
                    {
                        d--;
                        if(word[n+1] == '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;
                        }
                        
                    }
                     else
                        {
                            word_not_here = true;
                        }
                }
                d = i;
                o = u;
                word_not_here = false;

                for(n = 1; n < amount_of_char; n++)
                {
                    if(o+1 < cols && matrix[d][o+1] == word.at(n) && word_not_here != true) //*** This is a left to right search
                    {
                        o++;
                        if(word[n+1] == '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;
                        }
                       
                        
                    }
                     else
                        {
                            word_not_here = true;
                        }
                }
                d = i;
                o = u;
                word_not_here = false;

                for(n = 1; n < amount_of_char; n++)
                {

                    if(o-1 > -1 && matrix[d][o-1] == word.at(n) && word_not_here != true) //*** This is a right to left search
                    {
                        o--;
                        if(word[n+1] == '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;
                        }
                    }
                     else
                        {
                            word_not_here = true;
                        }

                }
                d = i;
                o = u;
                word_not_here = false;

                for(n = 1; n < amount_of_char; n++)
                {
                    if((d-1 > -1 && o-1 > -1) && matrix[d-1][o-1] == word.at(n) && word_not_here != true) //*** This is a diagonal search top left
                    {
                          d--;
                          o--;
                        if(word[n+1] == '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;
                        }

                    }
                     else
                        {
                            word_not_here = true;
                        }
                }
                d = i;
                o = u;
                word_not_here = false;

                for(n = 1; n < amount_of_char; n++)
                {
                    if((d+1 < rows && o-1 > -1) && matrix[d+1][o-1] == word.at(n) && word_not_here != true) //*** This is a diagonal search bottom left
                    {
                        d++;
                        o--;
                        if(word[n+1] == '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;
                        }
                       
                    }
                     else
                        {
                            word_not_here = true;
                        }
                }
                d = i;
                o = u;
                word_not_here = false;

                for(n = 1; n < amount_of_char; n++)
                {
                    if((d-1 > -1 && o+1 < cols) && matrix[d-1][o+1] == word.at(n) && word_not_here != true) //*** This is a diagonal search top right
                    {
                        d--;
                        o++;
                        if(word[n+1] == '\0')
                        {
                            word_found = true;
                            sol[2] = d;
                            sol[3] = o;
                        }
                      
                        
                    }
                     else
                        {
                            word_not_here = true;
                        }
                }
                d = i;
                o = u;
                word_not_here = false;
                
            }

        }

    }

    if (word_found == true)
    {
        cout << "Start pos:(" << sol[0] << ", " << sol[1] 
             << ") to End pos:(" << sol[2] << ", " << sol[3]
             << ")" << endl;
    }
    else
    {
        cout << "The Pattern was not found." << endl;
    }
    
   return;
}

