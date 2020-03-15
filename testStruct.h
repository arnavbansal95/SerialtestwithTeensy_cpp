/********************************************/
/*   Ground floor - 1 and so on             */
/*   Current Floor - 0 when in trasisiton   */
/*   0 - Halt, 1 - Down, 2 - Up Direction   */
/********************************************/

typedef struct 
{
    uint8_t prev;   // Previous Floor
    uint8_t curr;   // Current Floor (0 if transistion)
    uint8_t dest;   // Desitination Floor
    uint8_t dirc;   // Direction
} __attribute__((__packed__)) floorPos_t;