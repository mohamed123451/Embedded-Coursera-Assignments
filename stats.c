/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
  print_statistics(test);

}

/* Add other Implementation File Code Here */

void print_array(unsigned char *arr_name, int len){
  printf("{ ");
  for(int l=0 ; l<len ; l++){
    printf("%d, ", *(arr_name+l));
  } 
  printf("}\n");
}

unsigned char *sort_array(unsigned char *arr_name, int len){
  unsigned char z;
  for(int l1=0 ; l1<len ; l1++){
    for(int l2=1 ; l2<len ; l2++){
      if(*(arr_name+l2-1)<*(arr_name+l2)){
        z = *(arr_name+l2-1);
        *(arr_name+l2-1) = *(arr_name+l2);
        *(arr_name+l2) = z;
      }
    }
  }
  return arr_name;
}

unsigned char find_median(unsigned char* arr_name, int len){
  unsigned char *sorted_arr = sort_array(arr_name, len);
  unsigned char median = *(sorted_arr+len/2);
  return median;
}

unsigned char find_maximum(unsigned char *arr_name, int len){
  unsigned char max = *(arr_name);
  for(int i=0 ; i<len ; i++)
    if(max<*(arr_name+i)){
      max = *(arr_name+i);
      continue;
    }
  return max;
}

unsigned char find_minimum(unsigned char *arr_name, int len){
  unsigned char min = *(sort_array(arr_name, len)+len-1);
  return min;
}

float find_mean(unsigned char *arr_name, int len){
  float mean = 0;
  for(int i=0 ; i<len ; i++){
    mean += *(arr_name+i);
  }
  return mean/len;
}

void print_statistics(unsigned char *arr_name){
  unsigned char *test = arr_name;
  printf("Original array\n");	
  print_array(test, SIZE);
  printf("Sorted array\n");
  print_array(sort_array(test, SIZE), SIZE);
  printf("the median = %d\n",find_median(test,SIZE));
  printf("the maximum = %d\n",find_maximum(test,SIZE));
  printf("the minimum = %d\n",find_minimum(test,SIZE));
  printf("the mean = %f\n",find_mean(test,SIZE));
}



