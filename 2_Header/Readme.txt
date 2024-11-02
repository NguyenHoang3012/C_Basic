-Header file is include all prototye of C program
-You can image that in  the real project then writing all function in only one file c is impossible
so them alway using header file to handle with one .C file function.
=> Led to your program can easy to control and manage
Example:
We have a main.c file which include 2 functions
Function one is Calculate Sum, 
Function 2 is Calculate Div
2 functions is defined as prototye in main.h
After that funtion is implement after main.c file.
In main.c we need to include main.h to preprocesser can execute what everything is defined on main.h
=> Done