#pragma once

int Add(int a, int b);

double Add(double a, double b);

// disable name mangling (function overloading)
extern "C" void Print(int *x); // extern "C" should be applied at both declaration AND definition, otherwise it will cause linker error

void Print(const int *x);