// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#pragma once

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

// ------- //
// grabber //
// ------- //

#define grabber_wrap_target 2
#define grabber_wrap 28

#define grabber_offset_start 0u

static const uint16_t grabber_program_instructions[] = {
    0xa0c3, //  0: mov    isr, null                  
    0x2022, //  1: wait   0 pin, 2                   
            //     .wrap_target
    0x2023, //  2: wait   0 pin, 3                   
    0x20a3, //  3: wait   1 pin, 3                   
    0x4002, //  4: in     pins, 2                    
    0x2023, //  5: wait   0 pin, 3                   
    0x00c0, //  6: jmp    pin, 0                     
    0x20a3, //  7: wait   1 pin, 3                   
    0x4001, //  8: in     pins, 1                    
    0x2023, //  9: wait   0 pin, 3                   
    0x20a3, // 10: wait   1 pin, 3                   
    0x4001, // 11: in     pins, 1                    
    0x2023, // 12: wait   0 pin, 3                   
    0x20a3, // 13: wait   1 pin, 3                   
    0x4001, // 14: in     pins, 1                    
    0x2023, // 15: wait   0 pin, 3                   
    0x00c0, // 16: jmp    pin, 0                     
    0x20a3, // 17: wait   1 pin, 3                   
    0x4001, // 18: in     pins, 1                    
    0x2023, // 19: wait   0 pin, 3                   
    0x20a3, // 20: wait   1 pin, 3                   
    0x4001, // 21: in     pins, 1                    
    0x2023, // 22: wait   0 pin, 3                   
    0x20a3, // 23: wait   1 pin, 3                   
    0x4001, // 24: in     pins, 1                    
    0x2023, // 25: wait   0 pin, 3                   
    0x00c0, // 26: jmp    pin, 0                     
    0x20a3, // 27: wait   1 pin, 3                   
    0x4001, // 28: in     pins, 1                    
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program grabber_program = {
    .instructions = grabber_program_instructions,
    .length = 29,
    .origin = -1,
};

static inline pio_sm_config grabber_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + grabber_wrap_target, offset + grabber_wrap);
    return c;
}
#endif

