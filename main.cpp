/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/


/*
Thing 1) computer
5 properties:
    1) memory size
    2) hard disk size
    3) CPU speed
    4) weight in pounds
    5) number of USB ports
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
    2) number of pockets
    3) days of exchange
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
    2) weight in pounds
    3) times of sleeping
    4) times of running away
    5) times of looking outside a day
3 things it can do:
    1) run
    2) scratch sofa
    3) catch up birds
 */

/*
Thing 5) monitor
5 properties:
    1) size in inches
    2) weight in pounds
    3) resolution
    4) refresh rate
    5) amount of power consumed
3 things it can do:
    1) display pictures
    2) make up other products
    3) enlarge
 */

/*
Thing 6) speakers
5 properties:
    1) number of amplifiers
    2) frequency response
    3) maximum SPL
    4) system total latency
    5) weight in g
3 things it can do:
    1) amplify sound
    2) convert digital signal to analog signal
    3) saturate sound
 */

/*
Thing 7) LED
5 properties:
    1) brightness
    2) number of lights
    3) Voltage
    4) Wattage
    5) item weight in pounds
3 things it can do:
    1) generate light
    2) save energy
    3) make up other products
 */

/*
Thing 8) wifi module
5 properties:
    1) item weight in ounces
    2) power input in voltage
    3) operation frequency
    4) max speed
    5) width in inches
3 things it can do:
    1) transmit  signal
    2) make up other products
    3) offer wirless network
 */

/*
Thing 9) applications
5 properties:
    1) number of users
    2) price for pro 
    3) size in mb
    4) rating
    5) version
3 things it can do:
    1) store contents
    2) interact with people
    3) send notifications
 */

/*
Thing 10) smart TV
5 properties:
    1) monitor
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
