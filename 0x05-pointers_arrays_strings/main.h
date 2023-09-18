#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
void reset_to_98(int *n);

/* Constants and Macros */
#define MAX_VALUE 100
#define DEBUG_MODE 1

/* Custom data type declarations */
typedef struct {
    int x;
    int y;
} Point;

/* External variable declaration */
extern int globalVar;

#endif /* MAIN_H */
