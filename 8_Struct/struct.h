#ifndef STRUCT_H
#define STRUCT_H

typedef struct {
    char name[100];
    char address[100];
    int age;
    int sex;
} Associate;
void Input_Information(Associate *Ass);
void Print_Information(Associate Ass);
#endif
