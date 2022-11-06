#include<iostream>
#include "fns.h"
#include<string> 


using namespace std;


int main(){
    /*int user_int = 0;
    cout << "Int: ";
    cin >> user_int; 



    generate_z_gp(user_int); */ 


cout << "Welcome to Galois' Groups! You are a traveler in a strange world with odd light switches, " << endl;
cout << "cards that flip themselves, and only four hours in the day! Solve the problems to help future travelers" << endl;
cout << "fare better in this world." << endl; 

cout << "=====LEVEL 1=====" << endl; 



cout << "_____" << endl; 
cout << "|0 0|" << endl;
cout << "-----" << endl;

cout << "This is a light switch. 0 is off and 1 is on. Let's find every possible configuration of the switches." << endl;

//making light switch. could be done w a class
string user_flip;
bool flag = true;
int* light_switch = new int[2]; 

for (int i = 0; i < 2; i++){
    light_switch[i] = 0; 
}

int config = 0; 
//going to continue until user quits or finds all configurations. 
while (flag == true){
    cout << "Would you like to flip the right or the left switch?" << endl; 
    cout << "L or R: ";
    cin >> user_flip;  //include error guards, lowercase, invalid input, etc
    light_flip(light_switch, user_flip); 

    print_lights(light_switch);

     //option to quit loop
    cout << "Would you like to keep trying?" << endl;
    cout << "Y/n: "; 
    string keep_going;
    cin >> keep_going;
    cout << "CONFIG: " << config << endl;  //figure out why CONFIG is not catching 
    if (keep_going == "N" or config == 4){
        flag = false;
    }
} 


//explain and add "both"
cout << "Nice job! All of the possible light switches are: " << endl; 
    int a[2] = {0, 0};
    int b[2] = {1, 0};
    int c[2] = {0, 1};
    int d[2] = {1, 1};

    print_lights(a);
    print_lights(b); 
    print_lights(c);
    print_lights(d);


cout << "Now, if we add the function 'both' where we can flip both switches at once, can we find a new configuration?" << endl; 
flag = true; 
while (flag == true){
    cout << "Would you like to flip the left, right, or both switches?" << endl; 
    cout << "L, R, or B: ";
    cin >> user_flip;  //include error guards, lowercase, invalid input, etc
    light_flip(light_switch, user_flip); 

    print_lights(light_switch);

     //option to quit loop
    cout << "Would you like to keep trying?" << endl;
    cout << "Y/n: "; 
    string keep_going;
    cin >> keep_going;
    if (keep_going == "N"){
        flag = false;
    }
} 

string inn; 


cout << "You shouldn't have found any new configurations. That means that a flip of a switch is a binary, closed operation." << endl; 

cout << "Ok?";
cin >> inn; 


cout << "We can represent our light switches using a 'switch' table, similar to an addition or multiplication table. " << endl;
cout<< "First, let's draw a diagram that shows how our switches are related to each other: " << endl;

cout << "Ok?";
cin >> inn; 

cout << "_____" << "    R     " << "_____" << endl;
cout << "|0 0|" << "----------" << "|0 1|" << endl; 
cout << "_____" << "          " << "_____" << endl;
cout << "  |  " << "          " << "  |  " << endl;
cout << " L|  " << "          " << " L|  " << endl;
cout << "_____" << "    R     " << "_____" << endl;
cout << "|1 0|" << "----------" << "|1 1|" << endl; 
cout << "_____" << "          " << "_____" << endl;

cout << "Where 01 means a right switch, 10 means a left switch, 11 is both, and 00 is neither. We find that: " << endl; 
cout << "  |00 01 10 11" << endl;
cout << "--------------" << endl; 
cout << "00|00 01 10 11" << endl;
cout << "01|01 00 11 10" << endl;
cout << "10|10 11 00 01" << endl; 
cout << "11|11 10 01 00" << endl; 

cout << "Next Level?";
cin >> inn; 

cout <<endl << endl << endl << endl << endl << endl;


//LEVEl 2
cout << "=====LEVEL 2=====" << endl; 

int* starting_rect = new int[4];
for(int i = 0; i < 4; i++){
    starting_rect[i] = i; 
}

print_rect(starting_rect); 

cout << "We are playing cards, and we want to know all the ways we can flip or turn it so that it will still look the same. Pay attention to the numbering of the edges.";

//permute card until done 
flag = true;
int* rectt = new int[4]; 
for(int i = 0; i < 4; i++){
    rectt[i] = i; 
}
while (flag == true){
    //getting user input on what direction to flip
    cout << "Would you like to horizontally flip, vertically flip, or rotate the card?" << endl; 
    cout << "H, V, or R? ";
    string user_str;
    cin >> user_str; 
    rect_flip(rectt, user_str);

    //end if user is done
    string check;
    cout << "Would you like to keep going?" << endl;
    cout << "Y/n: ";
    cin >> check; 
    if (check == "N"){
        flag = false;
    }
}
cout << "Look to see what moves get you back to the start. For example, two horizontal flips get you back to the beginning." << endl; 

flag = true; 
while (flag == true){
    //getting user input on what direction to flip
    cout << "Would you like to horizontally flip, vertically flip, or rotate the card?" << endl; 
    cout << "H, V, or R? ";
    string user_str;
    cin >> user_str; 
    rect_flip(rectt, user_str);

    //end if user is done
    string check;
    cout << "Would you like to keep going?" << endl;
    cout << "Y/n: ";
    cin >> check; 
    if (check == "N"){
        flag = false;
    }
}
cout << "It turns out we can make a composition table just like we could for level 1. S stands for 'start', or not flipping the card. Provided is a partial table: what goes in spot 1?" << endl; 



cout << "  | S H V R"  << endl;
cout << "------------" << endl; 
cout << "S | S H V R" << endl; 
cout << "H | H S R 2" << endl;
cout << "V | V 1 S H" << endl;
cout << "R | R 4 3 S" << endl;

string guess;
cout << "Guess: ";
cin >> guess; 

if (guess == "R"){
    cout <<"Nice guess! You got it right. Try to figure out the rest of the table. When you're ready for the answer, hit any key." << endl; 
}
else{
    cout <<"Not quite: try to figure out the rest of the table. When you're ready for the answer, hit any key." << endl; 
}

cin >> inn; 

cout << endl;


cout << "  | S H V R"  << endl;
cout << "------------" << endl; 
cout << "S | S H V R" << endl; 
cout << "H | H S R V" << endl;
cout << "V | V R S H" << endl;
cout << "R | R V H S" << endl;




cout << "Look familiar? Here is the multiplication table for level 1 again: " << endl;

cout << "  |00 01 10 11" << endl;
cout << "--------------" << endl; 
cout << "00|00 01 10 11" << endl;
cout << "01|01 00 11 10" << endl;
cout << "10|10 11 00 01" << endl; 
cout << "11|11 10 01 00" << endl; 

cout << "Ok?";
cin >> inn; 

cout << "Interestingly enough, although the elements themselves are different, these tables have the exact same structure." << endl;
cout << "If we set 00 = S, 01 = H, 10 = V, 11 = R, we find that these tables are actually exactly the same. " << endl;

cout << "Ok?";
cin >> inn; 

cout << "Thus what is important in these objects is not what the sets are composed of, but rather the structure of their elements." << endl;

cout << "Ok?";
cin >> inn; 

cout <<endl << endl << endl;
cout << "This is called isomorphism: when two groups are exactly the same in structure and properties, they are said to be isomorphic." <<endl;
cout << "In this case, these groups are representative of a very famous group called the Klein 4-group, or V4." << endl;
cout << "This group has order four, because it has four elements." << endl;

cout << "Next level?";
cin >> inn; 

cout <<endl << endl << endl << endl << endl << endl;

cout << "=====LEVEL 3=====" << endl; 
    
cout << "   _0_   " << endl;
cout << " /     \\  " << endl; 
cout << "3       1 " << endl;
cout << " \\     /"   <<endl;
cout << "   -2-   " << endl; 
    
cout << "We have found a clock in our strange world, and we find there are only four hours in the day!";
cout << "If it is 2 o'clock right now, what time is three hours from now?" << endl;

int nguess;
cout << "Guess: "; 
cin >> nguess;

while (nguess != 1){
    cout << "Not quite! Guess again: ";
    cin >> nguess;
}
cout << "Great job! 1 is correct. " <<endl; 

cout << "What about four hours from now, if it's one o'clock?" << endl;


cout << "Guess: "; 
cin >> nguess;

while (nguess != 1){
    cout << "Not quite! Guess again: ";
    cin >> nguess;
}
cout << "Great job! 1 is correct again. " << endl; 

cout << "This is called modular arithmetic. Let's see if we can build a table of modular arithmetic:" << endl; 

cout << "+ | 0 1 2 3" << endl;
cout << "-----------" << endl;
cout << "1 |" << endl;
cout << "2 |" << endl;
cout << "3 |" << endl; 

cout << "Here is an empty table. See if you can do it yourself. When you are ready, press any key." << endl;
cin >> nguess;

generate_z_gp(4); 

cout << "This is called the Z4 group. It is actually not isomorphic to V4, or the light switch, and it is the only other group of order four." << endl; 

cout << endl << endl << endl << endl;

cout << "Congrats! You have survived Galois' Galaxy. You can generate addition tables for z-groups of any order if you'd like: " << endl; 

int user_int = 0;

flag = true;
while(flag == true){
    cout << "Int: ";
    cin >> user_int; 
    generate_z_gp(user_int);

    cout << "Continue? Y/n: ";
    cin >> guess;
    if(guess == "N"){
        flag = false; 
    }
}







    return 0;
}