#include <iostream> 
#include <cmath>
using namespace std;   

int main()
{
    const int vector_v = 2;
    const int vector_w = 3;
    double matrix[vector_v][vector_w] = 
    {
        {5, 4, 5},
        {2, 0, 2}
    };

for (int i = 0; i < vector_v; i++)
{
    for (int j = 0; j < vector_w; j++)
    {
         cout << matrix[i][j] << " / ";
    }
     cout << endl;
}
//double matrix;
double cross_product_i;
double cross_product_j;
double cross_product_k;
cross_product_i = (matrix[0][1]*matrix[1][2]) - (matrix[0][2]*matrix[1][1]);
cross_product_j = (matrix[0][0]*matrix[1][2]) - (matrix[0][2]*matrix[1][0]);
cross_product_k = (matrix[0][0]*matrix[1][1]) - (matrix[0][1]*matrix[1][0]);
cout << "The cross product of this matrix is (" << cross_product_i << ")i" 
        << " - (" << cross_product_j <<")j + (" << cross_product_k <<")k" <<endl;

}