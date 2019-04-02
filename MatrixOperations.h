#include <iostream>
#define NUM 2

using namespace std;

template <class T>
class MatrixOperation
{
public:
    MatrixOperation();
    MatrixOperation(char *filename);
    ~MatrixOperation();

    // Receive input from user
    void InputValues();

    // Operation Supported
    void Multiply();
    void Transpose();

    void Print();

private:
    // Type of inputs 
    void InputValuesFromTerminal();
    void InputValuesFromFile();

    T input1[NUM][NUM];
    T input2[NUM][NUM];
    T output[NUM][NUM]; 
    
};

// TODO: Handle special case for char 

template <class T>
MatrixOperation<T>::MatrixOperation()
{
    cout << "Construction..";
}

template <class T>
MatrixOperation<T>::~MatrixOperation()
{
    cout << "Destractor..";
}