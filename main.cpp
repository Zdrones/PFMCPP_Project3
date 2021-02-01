/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/


/*
Thing 1) computer
5 properties:
    1) type of computers
    2) type of CPU
    3) type of GPU
    4) amount of RAM 
    5) amount of SSD
3 things it can do:
    1) compile code language
    2) store data information
    3) connet people through internet
 */

/*
Thing 2) room
5 properties:
    1) number of books
    2) number of desks
    3) number of bathrooms
    4) number of windows
    5) number of guitars
3 things it can do:
    1) store stuffs
    2) offer a space for resting
    3) offer a space for workstations
 */

/*
Thing 3) coat
5 properties: 
    1) number of size
    2) type of color
    3) type of material
    4) number of price
    5) days of returns
3 things it can do:
    1) warm people
    2) dress up people
    3) help people show their taste
 */

/*
Thing 4) cat
5 properties:
    1) number of feet
    2) color of eyes
    3) color of hair
    4) times of running away
    5) times of looking outside a day
3 things it can do:
    1) run
    2) scratch sofa
    3) catch up birds
 */

/*
Thing 10) smart TV
5 properties:
    1) Display
    2) speakers
    3) LED
    4) wifi module
    5) applications
3 things it can do:
    1) display TV channels
    2) play sound
    3) run applications
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
