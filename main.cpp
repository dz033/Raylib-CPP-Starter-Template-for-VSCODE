#include <iostream>
#include <raylib.h>
#include "grid.h"
#include "block.h"
#include "blocks.cpp"

using namespace std;

int main () {
    // Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);
    Grid grid = Grid();

    TBlock testBlock = TBlock();
    //testBlock.Move(4, 3);
    grid.Print();

    while(WindowShouldClose() == false){  //window shuold close checks for esc key
        BeginDrawing();
        ClearBackground(BLACK);
        grid.Draw();
        testBlock.Draw();

        EndDrawing();
    }
    CloseWindow();
}