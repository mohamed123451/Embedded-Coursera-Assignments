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
 * @file stats.h 
 * @brief A simple application that performs statistical analytics on a dataset.
 *
 * A couple of functions that can analyze an array of unsigned char data items
 * and report analytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author Mohamed Ashraf
 * @date 24/4/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief A function that prints the statistics of an array
 *
 * including minimum, maximum, mean, and median.
 *
 * @param arr_name   Nameof the array 
 *
 * It return nothing
 */
void print_statistics(unsigned char *arr_name);

/**
 * @brief prints the array to the screen
 *
 *  Given an array of data and a length, prints the array to the screen
 *
 * @param arr_name   Name of the array
 * @param len        Length of the array
 *
 */
void print_array(unsigned char *arr_name, int len);

/**
 * @brief returns the median value
 *
 * Given an array of data and a length, returns the median value
 *
 * @param arr_name   Name of the array
 * @param len        Length of the array
 *
 * @return The median value of elements of the array
 */
unsigned char find_median(unsigned char *arr_name, int len);


/**
 * @brief Given an array of data and a length, returns the mean
 *
 *  The "median" is the "middle" value in the list of numbers.
 *  To find the median,
 *  your numbers have to be listed in numerical order from smallest to largest,
 *  so you may have to rewrite your list before you can find the median.
 *
 * @param arr_name   Name of the array
 * @param len        Length of the array
 *
 * @return the mean value of elements in the array
 */
float find_mean(unsigned char *arr_name, int len);

/**
 * @brief the maximum
 *
 *  Given an array of data and a length, returns the maximum
 *
 * @param arr_name   Name of the array
 * @param len        Length of the array
 *
 * @return the maximum value of elements in the array
 */
unsigned char find_maximum(unsigned char *arr_name, int len);

/**
 * @brief the minimum
 *
 *  Given an array of data and a length, returns the minimum
 *
 * @param arr_name   Name of the array
 * @param len        Length of the array
 *
 * @return the minimum value of elements in the array
 */
unsigned char find_minimum(unsigned char *arr_name, int len);

/**
 * @brief sorts the array
 *
 *  Given an array of data and a length, sorts the array from largest to
 *  smallest. (The zeroth Element should be the largest value, and the
 *  last element (n-1) should be the smallest value. )
 *
 * @param arr_name   Name of the array
 * @param len        Length of the array
 *
 * @return the sorted array
 */
unsigned char *sort_array(unsigned char *arr_name, int len);


/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */

