#ifndef FNS_H
#define FNS_H

#include<string>

/// @brief generates and prints add table for z gp 
/// @param z the z gp 
void generate_z_gp(int z);

/// @brief prints array as light switch (l, r); 
/// @param a the array w light switch values
void print_lights(int a[]); 



/// @brief flips one light switch
/// @param a array with light switch values
/// @param user which switch the user would like to flip
void light_flip(int a[], std::string user); 


/// @brief prints a rectangle
/// @param a array w rectangle corners
void print_rect(int a[]);


/// @brief permutes corners according to user choice
/// @param a rectangle corners
/// @param user user symmetry choice
void rect_flip(int a[], std::string user); 


#endif