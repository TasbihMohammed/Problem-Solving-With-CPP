#include<iostream>
#include<cmath>
using namespace std;
void Read_Matrix(int matrix[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int Find_1_Position(int matrix[5][5], int &row, int &col)
{
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(matrix[i][j] == 1)
            {
                row = i;
                col = j;
                return 1;
            }
        }
    }
    return -1;
}

int Num_Of_Steps_To_make_1_At_Center(int row,int col) 
{
    return abs(2-row) + abs(2-col);
}
    
int main()
{
    int matrix[5][5];
    int row, col;
    Read_Matrix(matrix);
    Find_1_Position(matrix, row, col);
    int Steps = Num_Of_Steps_To_make_1_At_Center(row, col);
    cout << Steps;

    return 0;

}