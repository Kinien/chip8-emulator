#include "chip8.h"
#include <SDL2/SDL.h>


static const SDL_Scancode keypad_scancode[KEYPAD_SIZE] = {
    [0x0]= SDL_SCANCODE_X,
    [0x1]= SDL_SCANCODE_1,
    [0x2]= SDL_SCANCODE_2,
    [0x3]= SDL_SCANCODE_3,
    [0x4]= SDL_SCANCODE_Q,
    [0x5]= SDL_SCANCODE_W,
    [0x6]= SDL_SCANCODE_E,
    [0x7]= SDL_SCANCODE_A,
    [0x8]= SDL_SCANCODE_S,
    [0x9]= SDL_SCANCODE_D,
    [0xA]= SDL_SCANCODE_Z,
    [0xB]= SDL_SCANCODE_C,
    [0xC]= SDL_SCANCODE_4,
    [0xD]= SDL_SCANCODE_R,
    [0xE]= SDL_SCANCODE_F,
    [0xF]= SDL_SCANCODE_V
};

int main(void){
    return 0;
}