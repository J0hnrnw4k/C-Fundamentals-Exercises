# 🧰 C Fundamentals – Exercises

**Author:** John Rex  
**Language:** C  
**Topics:** arrays • pointers • dynamic memory • modular design • math functions

## Overview
This repo collects small, focused C programs used to practice core concepts:

- **Modular C design** with headers (`.h`) and source (`.c`)
- **Arrays & loops** and a reusable `average()` helper
- **Quadratic roots** via `quadraticFormula(a,b,c)`
- **Pointer manipulation** to **swap** values
- **Dynamic memory** with `malloc` / `free`

---

## Projects

### 1) average_and_quadratic/
Reads `LENGTH` integers, prints their average, then reads `a b c` and prints the two roots of the quadratic.

**Files**
- `functions.h` – prototypes, `#define LENGTH 5`
- `functions.c` – `average(int[])`, `quadraticFormula(a,b,c,&x1,&x2)`
- `main.c` – I/O, calls the above functions

**Build & Run**
```bash
cd average_and_quadratic
gcc main.c functions.c -lm -o avg_quad
./avg_quad
# Input:
# 5 integers, then "a b c" on one line for quadratic formula
