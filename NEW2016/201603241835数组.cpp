#include<iostream>
#include<stdlib.h>
#include<stdarg.h>

#define OK 1
#define ERROR 0
#define MAX_ARRAY_DIM 8

using namespace std;
typedef long long ElemType;
typedef int Status;
typedef struct{
    ElemType *base;
    int dim;
    int *bounds;
    int *constants
}Array;

Status InitArray(Array &A,int dim){

}
