#include<iostream>
#include "fns.h"

#include<string> 

using namespace std;


//generates and prints add table for z gp 
void generate_z_gp(int z){
    int* gp_array = new int[z];
    for (int i = 0; i < z; i++){
        gp_array[i] = i;
    }
    cout << "Z" << z << " gp addition table: " << endl;
    cout << "+ | "; 
    for (int l = 0; l < z; l++){
        cout << l << " "; 
    }
    cout << endl << "---"; 
    for (int l = 0; l < z; l++){
        cout << "--";
    }
    cout << endl; 
    for (int k = 0; k < z; k++){

        cout << k << " | ";
        for (int j = 0; j < z; j++){
        cout << (j + k)% z<< " ";
    }
        cout << endl;
    }
}


void light_flip(int a[], string user){
    if (user == "R"){
        a[1] = (a[1] + 1) % 2;
    }
    else if(user == "L"){
        a[0] = (a[0] + 1) % 2; 
    }
    else if(user == "B"){
        a[0] = (a[0] + 1) % 2; 
        a[1] = (a[1] + 1) % 2;
    }

}

void print_lights(int a[]){
    cout << "_____" << endl; 
    cout << "|" << a[0] << " " << a[1] << "|" << endl;
    cout << "-----" << endl;
}

void print_rect(int a[]){
    
    cout << a[0] << "--------" << a[1] << endl;
    cout << "| 2    * |" << endl; 
    cout << "|        |" << endl; 
    cout << "|        |" << endl; 
    cout << "|        |" << endl; 
    cout << "| *    2 |" << endl; 
    cout << a[2] << "--------" << a[3] << endl; 
}


//permutes corners of rectangle according to user request 
void rect_flip(int a[], std::string user){
    int save1 = 0;
    int save2 = 0;

    if (user == "H"){
        //flip horzontally
        save1 = a[0];
        save2 = a[2];
        a[0] = a[1];
        a[2] = a[3];
        a[1] = save1;
        a[3] = save2; 
    }
    else if(user == "V"){
        //flip vertically
        save1 = a[0];
        save2 = a[1];
        a[0] = a[2];
        a[1] = a[3];
        a[2] = save1;
        a[3] = save2; 
    }
    else if(user == "R"){
        //rotate 180deg CW
        save1 = a[0];
        a[0] = a[2];
        a[2] = a[1]; 
        a[1] = a[3];
        a[3] = save1;
        
    }
    print_rect(a); 
}
