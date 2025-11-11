// 1.	Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include<stdio.h>
int avnimarks=10;
int addmarks(){
    return avnimarks+5;
}
int submarks(){
    return avnimarks-3;
}
int showmarks(){
    return avnimarks;
}
int main(){
    int aaryanshimarks=20;
    int totalmarks=aaryanshimarks+avnimarks;
    printf("aaryanshi Marks: %d\n",aaryanshimarks);
    printf("avni Marks: %d\n",avnimarks);
    printf("Total Marks: %d\n",totalmarks);
    printf("avni Marks after addition: %d\n",addmarks());
    printf("avni Marks after subtraction: %d\n",submarks());
    printf("avni Marks shown: %d\n",showmarks());
    return 0;
}