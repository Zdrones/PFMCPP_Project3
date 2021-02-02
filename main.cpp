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

struct CarWash
{

};

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

struct Computer
{
    //memory size
    int memorySize = 16;
    //hard disk size
    int hardDiskSize = 512;
    //CPU speed
    float cpuSpeed = 4.3f;
    //weight in pounds
    float weight = 14.04f;
    //number of USB ports
    int usbPort = 3;

    //compile code language
    void compileCodeLanguage(bool compiledLanguage = true, bool error = false);
    //store data information
    int storeDataInformation(int diskSize = 512);
    //connet people through internet
    void connectPeopleThroughInternet(int internetSpeed = 100);
};

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

struct Room
{
    //number of books
    int numBook = 20;
    //number of desks
    int numDesk = 1;
    //number of bathrooms
    int numBathroom = 1;
    //number of windows
    int numWindows = 2;
    //number of guitars
    int numGuitars = 3;

    //room for workstation
    struct Studio
    {
        //studio szie
        int studioSize = 35;
        //got acoustic treatment
        bool acousticTreatment = true;
        //studio name
        std::string studioName = "LHYB studio";
        //number of speakers system
        float numSpeakerSystem = 5.1f;
        //working hours a day
        int workHour = 8;

        //offer service
        void offerService(int serviceOption = 5, int extraAddOnOption = 3);
        //charge money
        float chargeMoney(int basicServicePrice = 200, int studioBookingPrice = 100);
        //comsume electricity
        float consumeElectricity(float electricityMonthly, float electricityMonthlyPrice);
    };
    
    //store stuffs
    void storeStuff(bool storeRoom = false);
    //offer a space for resting
    void offerRestSpace(bool bedInRoom = false, bool sofaInRoom = true);
    //offer a space for workstation  
    void offerWorkSpace(bool workstation, Studio studioSize, Studio acousticTreatment);

    //a member variable whose type is a UDT
    Studio artistBeingServed;
};

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

struct Coat
{
    //number of size
    char coatSize = 'L';
    //number of pockets
    int numPocket = 3;
    //days of exchange
    int dayExchange = 15;
    //number of price
    float coatPrice = 50.2f;
    //days of return
    int dayReturn = 15;

    //warm people 
    void warmPeople(std::string materialType);
    //dress up people
    void dressUpPeople(std::string color, bool goodMatch = true);
    //help people show their taste
    void showPeopleTaste(bool fashion = false, bool vintage = true, bool goodMatch = true);
};

/*
Thing 4) cat
5 properties:
    1) number of feet
    2) weight in pounds
    3) hours of sleeping
    4) times of running away
    5) times of looking outside a day
3 things it can do:
    1) run
    2) scratch sofa
    3) catch up birds
 */

struct Cat
{
    //number of feet
    int numFeet = 4;
    //weight in pounds
    float catWeight;
    //time of sleeping
    float sleepHour = 12.5;
    //times of running away
    int runAway = 4;
    //times of looking outside a day
    int lookOutsideTime = 6;

    struct Owner
    {
        //gender of the owner
        char ownerGender;
        //name of the owner
        std::string ownerName;
        //working hours of the owner
        float ownerWorkHour = 8.0;
        //income per month of the owner
        float ownerIncomeMonth;
        //age of the owner
        int ownerAge;

        //feed the cat
        void feedCat(std::string catFoodBrand, int feedCatTime = 2);
        //play around with the cat
        void playWithCat(bool playByFunnyStick = true, float playTime = 30);
        //clean up the cat's toilet
        void cleanToilet(int cleanTime = 2);
    };

    //run
    void catRun(int howFast);
    //scratch sofa
    void catScratchSofa(bool sofaScratches = true, bool catScratcher = false, int numCatScratcher = 0);
    //catch up birds
    void catCatchBird(std::string birdKind, std::string placeFound);
};

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
    3) extend laptops' monitors
 */

struct Monitor
{   
    //size in inches
    float monitorSize =  24.0f;
    //weight in pounds
    float monitorWeight = 7.00f;
    //resolution
    int monitorResolution = 1080;
    //refresh rate
    int monitorRefreshRate = 75;
    //amount of power consumed
    int monitorPowerConsumed;
    
    //display pictures
    void displayPicture(int monitorResolution = 1080, bool monitorHD = true);
    //make up other products
    void monitorFormOthers(bool computerNeeded = true, bool playStationNeeded = true);
    //extend laptops' monitors
    void extentLaptop(bool buildWorkstation = true);
};

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
    2) connect phones through bluetooth
    3) saturate sound
 */

struct Speaker
{
    //number of amplifiers
    int numAmplifier = 2;
    //frequency response
    int lowestFrequencyResponse = 45;
    int highestFrequencyResponse = 22000;
    //maximum SPL
    int maxSPL = 107;
    //system total latency
    float systemTotalLatency = 1.02f;
    //weight in g
    int speakerWeight = 800;

    //amplify sound
    void amplifySound(int volume = 5);
    //connect phones through bluetooth
    void connectPhones(bool bluetoothModule = true);
    //saturate sound
    void saturateSound(bool bassDrive = true, bool filterOn = false);
};
/*
Thing 7) remote control
5 properties:
    1) price of the remote control
    2) item weight in ounces
    3) length in inches
    4) width in inches
    5) batteries last time in the remote control in months
3 things it can do:
    1) be compatible with TV
    2) control TV
    3) Play games
 */
struct RemoteControl
{
    //price of the remote control
    float remotePrice = 25.95f;
    //item weight in ounces
    float remoteWeight = 5.6f;
    //length in inches
    float remotelength = 7.0f;
    //width in inches
    float remoteWidth = 1.5f;
    //batteries last time in the remote control in months
    int remoteBatteryLast = 6;

    //be compatible with TV
    void compatibleTV(int maxSetupDevice = 4, int setupStep = 5);
    //control TV
    void controlTV(int volumeButton = 4, int channelButton = 4, int confirmButton = 1);
    //Play games
    void playGame(bool gameInTV = true, bool moreDifficult = true);
};
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

struct WifiModule
{
    //item weight in ounces
    float wifiWeight = 3.52f;
    //power input in voltage
    int wifiPowerInput;
    //operation frequency
    float wifiOperationFrequency1 = 2.4f;
    float wifiOperationFrequency2 = 5.0f;
    //max speed
    int wifiMaxSpeed = 1200;
    //width in inches
    float wifiWidth = 4.72f;

    //transmit  signal
    void transmitSignal();
    //make up other products
    void wifiFormOthers(bool smartTelevisonNeeded = true, bool computerNeeded = true);
    //offer wirless network
    void wirlessNetwork(bool internetCableNeeded = false, int WifiMaxSignal = 3);
};
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

struct Application
{
    //number of users
    int numUser;
    //price for pro
    int proPrice = 39;
    //size in mb
    float appSize = 145.4f;
    //rating
    float appRating = 4.2f;
    //version
    double appVersion = 3.33;

    //store contents
    void storeContent();
    //interact with people
    void interactWithPeople(bool goodInteractiveDesign = true, bool goodUserExperience = true);
    //send notifications
    void sendNotification(bool notificationTurnOn = true, int notificationTime = 3);
};

/*
Thing 10) smart TV
5 properties:
    1) monitor
    2) speakers
    3) remote control
    4) wifi module
    5) applications
3 things it can do:
    1) display TV channels
    2) play sound
    3) run applications
 */

struct SmartTV
{   //monitor
    Monitor monitorTV;
    //speakers
    Speaker speakerTV;
    //remote control
    RemoteControl remoteTV;
    //wifi module;
    WifiModule wifiTV;
    //application
    Application appTV;
    
    //display TV channels
    void displayTVChannel(int numChannel = 120, int numChannelCharged = 40);
    //play sound
    void playSound(bool speakers = true, int maxVolume = 100);
    //run applications
    void runApplication(bool androidSystem = true, bool appDownloadable = true);
};
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
