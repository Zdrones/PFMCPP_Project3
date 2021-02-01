/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CarWash
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};



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
