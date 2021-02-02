 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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
