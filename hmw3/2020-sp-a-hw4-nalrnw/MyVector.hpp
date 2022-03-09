cd ./* Define all your MyVector-related functions here.
 * Also, define the swap function here.
 * You do not need to include the h file.
 * It included this file at the bottom.
 */

void get_identity(string &my_id)
{
    my_id = "nalrnw";
    return;
}

template <typename T>
MyVector<T>::MyVector()
{
    T *mdata = nullptr; // ? Is this ok?
    reserved_size = 0;
    data_size = 0;
}

template <typename T>
T & MyVector<T>::front()
{
    return &m_data[data_size]; // returns the last recorded element of the list
}

template <typename T>
T & MyVector<T>::back()
{
    return &m_data[0]; //returns the first element added.
}

template <typename T>
int MyVector<T>::capacity()
{
    return reserved_size; //returns the maximum amount of elements that
    // can be currently stored in the vector.
}

template <typename T>
void MyVector<T>::clear()
{
    delete[] m_data; // deallocates data from mem
    data_size = 0; // current size = 0
    reserved_size = 0; // storage size = 0
    * m_data = nullptr; // data is set to nullptr
    return;
}

template <typename T>
void MyVector<T>::push_back(const T &x)
{

}

template <typename T>
void MyVector<T>::pop_back()
{
    
}

template <typename T>
void MyVector<T>::reserve(int new_cap)
{
    This makes sure the new_cap !> max_size. If it is
    then increase max-size to new_cap.
}

// We're giving you this one for free
// and as a guide for the syntax.
template <typename T>
MyVector<T>::~MyVector()
{
    delete[] m_data;
}


// Another example: remember when writing an implementation in hpp,
// return type first, then scope just before the function name.
template <typename T>
T & MyVector<T>::at(int index)
{
    //Define the function here.
}

