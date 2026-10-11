#ifndef CHIP8_H
#define CHIP8_H

#include <stdint.h>
#include <stdbool.h>

#define MEMORY_SIZE 4096
#define STACK_SIZE 16
#define REGISTER_COUNT 16
#define VF 0xF // used to make it clearer we are using VF for exemple as a flag register
#define DISPLAY_WIDTH 64
#define DISPLAY_HEIGHT 32

#define PROGRAM_START_ADDRESS 0x200

typedef struct { 

    uint8_t memory[MEMORY_SIZE];

    uint16_t pc; // program counter from 0x0 to 0xFFF (4096 values)
    uint16_t i; // Index register from 0x0 to 0xFFF (4096 values)

    uint8_t delay_timer;
    uint8_t sound_timer;

    uint8_t v[REGISTER_COUNT]; // general purpose register from V0 to VF

    uint16_t stack[STACK_SIZE];
    uint8_t sp; // stack pointer to know number of entries used

    bool display[DISPLAY_HEIGHT][DISPLAY_WIDTH]; 


} Chip8;

#endif