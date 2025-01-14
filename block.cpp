#include "block.h"
#include <vector>
using namespace std;

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
    rowOffset = 0;
    colOffset = 0;
}

void Block::Draw(){
    vector<Position> tiles = GetCellPositions();
    for(Position item: tiles){  // for item in tiles (item is of type Position)
        DrawRectangle(item.col*cellSize + 1, item.row*cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void Block::Move(int rows, int cols){
    rowOffset += rows;
    colOffset += cols;
}

vector<Position> Block::GetCellPositions(){
    vector<Position> tiles = cells[rotationState];
    vector<Position> movedTiles;
    for (Position item: tiles){
        Position newPos = Position(item.row + rowOffset, item.col + colOffset);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}