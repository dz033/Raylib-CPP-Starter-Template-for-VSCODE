#include "grid.h"
#include <iostream>
#include "colors.h"

using namespace std;

Grid::Grid(){
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    Initialize();
    colors = GetCellColors();
}

void Grid::Initialize(){
    for (int row = 0; row < numRows; row++){
        for (int col = 0; col < numCols; col++) {
            grid[row][col] = 0; // this is the starting value of the cells of the grid. 0 means blank. all pieces will have an integer value corresponding to a color
        }
    }
}

void Grid::Print(){
    for (int row = 0; row < numRows; row++){
        for (int col = 0; col < numCols; col++){
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

void Grid::Draw(){
    for(int row = 0; row < numRows; row++){
        for (int col = 0; col < numCols; col++){
            int cellValue = grid[row][col];
            DrawRectangle(col*cellSize + 1, row*cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}