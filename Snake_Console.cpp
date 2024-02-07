#include <iostream>

void SetCursorPos(int XPos, int YPos)
{
 printf("\033[%d;%dH", YPos+1, XPos+1);
}  

const int WIDTH = 20;
const int HEIGHT = 10;
const int MAX_LEN_SNAKE = (WIDTH-3)*(HEIGHT-2);

const int UP = 0;
const int DOWN = 1;
const int LEFT = 2;
const int RIGHT = 3;

int snake_dir = UP;

bool isRunning = true;

char map[] = 
"####################\n"
"#                  #\n"
"#                  #\n"
"#                  #\n"
"#                  #\n"
"#                  #\n"
"#                  #\n"
"#                  #\n"
"#                  #\n"
"####################\n";

char snake ='0';
int snake_x[MAX_LEN_SNAKE] = {0};
int snake_y[MAX_LEN_SNAKE] = {0};
int snake_len = 1;

int main() 
{
    snake_x[0] = WIDTH / 2;
    snake_y[0] = HEIGHT / 2;

    while (isRunning) {
        SetCursorPos(0, 0);
        for (int i = 0; i < snake_len; ++i) {
            map[snake_y[i]*WIDTH + snake_x[i]] = snake;
        }
        std::cout << map;
    }

}