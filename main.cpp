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
struct Foot
{
    int stepSize;
    void stepForward();
};


struct Person	
{
    int age;	    
    int height;	   
    float hairLength;	   
    float GPA;	   
    unsigned int SATScore;
    int distanceTravelled;

    Foot leftFoot;
    Foot rightFoot;

    void run(int, bool);
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if (startWithLeftFoot == true)
    {
        distanceTravelled += leftFoot.stepSize + rightFoot.stepSize;
    }
    else 
    {
        distanceTravelled += rightFoot.stepSize + leftFoot.stepSize;
    }

    howFast = 2;
}	




 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */




struct Computer
{
    int memorySize = 16;
    int hardDiskSize = 512;
    float cpuSpeed = 4.3f;
    float weight = 14.04f;
    int usbPort = 3;


    void compileCodeLanguage(bool compiledLanguage = true, bool error = false);
    int storeDataInformation(int diskSize = 512);
    void connectPeopleThroughInternet(int internetSpeed = 100);
};



struct Room
{
    int numBook = 20;
    int numDesk = 1;
    int numBathroom = 1;
    int numWindows = 2;
    int numGuitars = 3;

    struct Studio
    {
        int studioSize = 35;
        bool acousticTreatment = true;
        std::string studioName = "LHYB studio";
        float numSpeakerSystem = 5.1f;
        int workHour = 8;


        void offerService(int serviceOption = 5, int extraAddOnOption = 3);
        float chargeMoney(int basicServicePrice = 200, int studioBookingPrice = 100);
        float consumeElectricity(float electricityMonthly, float electricityMonthlyPrice);
    };
    

    void storeStuff(bool storeRoom = false);
    void offerRestSpace(bool bedInRoom = false, bool sofaInRoom = true);
    void offerWorkSpace(bool workstation, Studio studioSize, Studio acousticTreatment);


    Studio artistBeingServed;
};



struct Coat
{
    char coatSize = 'L';
    int numPocket = 3;
    int dayExchange = 15;
    float coatPrice = 50.2f;
    int dayReturn = 15;


    void warmPeople(std::string materialType);
    void dressUpPeople(std::string color, bool goodMatch = true);
    void showPeopleTaste(bool fashion = false, bool vintage = true, bool goodMatch = true);
};



struct Cat
{
    int numFeet = 4;
    float catWeight;
    float sleepHour = 12.5;
    int runAway = 4;
    int lookOutsideTime = 6;

    struct Owner
    {
        char ownerGender;
        std::string ownerName;
        float ownerWorkHour = 8.0;
        float ownerIncomeMonth;
        int ownerAge;


        void feedCat(std::string catFoodBrand, int feedCatTime = 2);
        void playWithCat(bool playByFunnyStick = true, float playTime = 30);
        void cleanToilet(int cleanTime = 2);
    };


    void catRun(int howFast);
    void catScratchSofa(bool sofaScratches = true, bool catScratcher = false, int numCatScratcher = 0);
    void catCatchBird(std::string birdKind, std::string placeFound);
};



struct Monitor
{   
    float monitorSize =  24.0f;
    float monitorWeight = 7.00f;
    int monitorResolution = 1080;
    int monitorRefreshRate = 75;
    int monitorPowerConsumed;
    

    void displayPicture(int monitorResolution = 1080, bool monitorHD = true);
    void monitorFormOthers(bool computerNeeded = true, bool playStationNeeded = true);
    void extentLaptop(bool buildWorkstation = true);
};



struct Speaker
{
    int numAmplifier = 2;
    int lowestFrequencyResponse = 45;
    int highestFrequencyResponse = 22000;
    int maxSPL = 107;
    float systemTotalLatency = 1.02f;
    int speakerWeight = 800;


    void amplifySound(int volume = 5);
    void connectPhones(bool bluetoothModule = true);
    void saturateSound(bool bassDrive = true, bool filterOn = false);
};



struct RemoteControl
{
    float remotePrice = 25.95f;
    float remoteWeight = 5.6f;
    float remotelength = 7.0f;
    float remoteWidth = 1.5f;
    int remoteBatteryLast = 6;


    void compatibleTV(int maxSetupDevice = 4, int setupStep = 5);
    void controlTV(int volumeButton = 4, int channelButton = 4, int confirmButton = 1);
    void playGame(bool gameInTV = true, bool moreDifficult = true);
};



struct WifiModule
{
    float wifiWeight = 3.52f;
    int wifiPowerInput;
    float wifiOperationFrequency1 = 2.4f;
    float wifiOperationFrequency2 = 5.0f;
    int wifiMaxSpeed = 1200;
    float wifiWidth = 4.72f;


    void transmitSignal();
    void wifiFormOthers(bool smartTelevisonNeeded = true, bool computerNeeded = true);
    void wirlessNetwork(bool internetCableNeeded = false, int WifiMaxSignal = 3);
};



struct Application
{
    int numUser;
    int proPrice = 39;
    float appSize = 145.4f;
    float appRating = 4.2f;
    double appVersion = 3.33;

    
    void storeContent();
    void interactWithPeople(bool goodInteractiveDesign = true, bool goodUserExperience = true);
    void sendNotification(bool notificationTurnOn = true, int notificationTime = 3);
};



struct SmartTV
{   
    Monitor monitorTV;
    Speaker speakerTV;
    RemoteControl remoteTV;
    WifiModule wifiTV;
    Application appTV;
    

    void displayTVChannel(int numChannel = 120, int numChannelCharged = 40);
    void playSound(bool speakers = true, int maxVolume = 100);
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
