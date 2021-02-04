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

    void run(int howFast, bool startWithLeftFoot);
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



// 1)
struct Computer
{
    int memorySize = 16;
    int hardDiskSize = 512;
    float cpuSpeed = 4.3f;
    float weight = 14.04f;
    int usbPort = 3;


    void compileCodeLanguage(bool compiledLanguage = true, bool error = false);
    int storeDataInformation(int diskSize = 512, int informationSize = 256);
    void connectPeopleThroughInternet(int internetSpeed = 100, bool internetSpeedFast = true);
};

void Computer::compileCodeLanguage(bool compiledLanguage, bool error)
{
    if(compiledLanguage == true)
    {
        error = false;
    }
    else
    {
        error = true;
    }

    error = false;
}

int Computer::storeDataInformation(int diskSize, int informationSize)
{
    if(diskSize >= informationSize)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Computer::connectPeopleThroughInternet(int internetSpeed, bool internetSpeedFast)
{
    if(internetSpeed >= 100)
    {
        internetSpeedFast = true;
    }
    else
    {
        internetSpeedFast = false;
    }
}



// 2)
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
        int chargeMoney(int basicServicePrice = 200, int studioBookingPrice = 50, int deadline = 5);
        float consumeElectricity(float electricityMonthly, float electricityMonthlyPrice);
    };
    

    void storeStuff(bool storeRoom = false, int areaLeftForStore = 5);
    void offerRestSpace(bool bedInRoom = false, bool sofaInRoom = true);
    void offerWorkSpace(bool workstation, Studio size, Studio acoustic);

    
};

void Room::Studio::offerService(int serviceOption, int extraAddOnOption)
{
    serviceOption = 5;
    extraAddOnOption = 3;
}

int Room::Studio::chargeMoney(int basicServicePrice, int studioBookingPrice, int deadline)
{
    basicServicePrice = 200;
    studioBookingPrice = 50;
    deadline = 5;

    return basicServicePrice + studioBookingPrice * deadline;
}

float Room::Studio::consumeElectricity(float electricityMonthly, float electricityMonthlyPrice)
{
    return electricityMonthly * electricityMonthlyPrice;
}

void Room::storeStuff(bool storeRoom, int areaLeftForStore)
{
    if(storeRoom == true)
    {
        std::cout << "store whatever you want!" << std::endl;
    }
    else if(storeRoom == false && areaLeftForStore >= 5)
    {
        std::cout << "Still okay to Store something important!" << std::endl;
    }
    else
    {
        std::cout << "Find somewhere else!" << std::endl;
    }
}

void Room::offerRestSpace(bool bedInRoom, bool sofaInRoom)
{
    bedInRoom = false;
    sofaInRoom = true;
}

void Room::offerWorkSpace(bool workstation, Room::Studio size, Room::Studio acoustic)
{
    if(workstation == true)
    {
        size.studioSize = 35;
        acoustic.acousticTreatment = true;  
    }
    else
    {
        return;
    }
}


// 3)
struct Coat
{
    char coatSize = 'L';
    int numPocket = 3;
    int dayExchange = 15;
    float coatPrice = 50.2f;
    int dayReturn = 15;


    void warmPeople(bool keepWarmth, std::string materialType);
    void dressUpPeople(std::string color, bool goodToMatch = true);
    void showPeopleTaste(bool fashion = false, bool vintage = true, bool goodMatch = true);
};

void Coat::warmPeople(bool keepWarmth, std::string materialType)
{
    if(keepWarmth == true)
    {
        materialType = 1;
    }
    else
    {
        materialType = 2;
    }
}

void Coat::dressUpPeople(std::string color, bool goodToMatch)
{
    if(goodToMatch == true)
    {
        color = "black";
        color = "white";
        color = "blue";
    }
    else
    {
        color = "red";
        color = "green";
    }
}

void Coat::showPeopleTaste(bool fashion, bool vintage, bool goodMatch)
{
    if(fashion == false && vintage == true)
    {
        goodMatch = true;
    }
    else if (fashion == true && vintage == true)
    {
        goodMatch = true;
    }
    else
    {
        goodMatch = false;
    }
}



// 4)
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
        void playWithCat(bool playByFunnyStick = true, int playTime = 30);
        void cleanToilet(int cleanTime = 2);
    };


    void catRun(int howFast);
    void catScratchSofa(bool sofaScratches = true, bool catScratcher = false, int numCatScratcher = 0);
    void catCatchBird(std::string birdKind, std::string placeFound);
};

void Cat::Owner::feedCat(std::string catFoodBrand, int feedCatTime)
{
    catFoodBrand = "Orjien";
    feedCatTime = 2;
}

void Cat::Owner::playWithCat(bool playByFunnyStick, int playTime)
{
    if(playByFunnyStick == true || playTime >= 30)
    {
        std::cout << "Good Owner!" << std::endl;
    }
    else
    {
        return;
    }
}

void Cat::Owner::cleanToilet(int cleanTime)
{
    cleanTime = 2;
}

void Cat::catRun(int howFast)
{
    howFast = 30; //mile per hour
}

void Cat::catScratchSofa(bool sofaScratches, bool catScratcher, int numCatScratcher)
{
    if(catScratcher == true || numCatScratcher >= 1)
    {
        sofaScratches = false;
    }
    else
    {
        sofaScratches = true;
    }
}

void Cat::catCatchBird(std::string birdKind, std::string placeFound)
{
    birdKind = {};
    placeFound = {};
}



// 5)
struct Monitor
{   
    float monitorSize =  24.0f;
    float monitorWeight = 7.00f;
    int monitorResolution = 1080;
    int monitorRefreshRate = 75;
    int monitorPowerConsumed;
    

    void displayPicture(int monitorResolution_ = 1080, bool monitorHD = true);
    void monitorFormOthers(int numPlayStation = 1, bool playStationNeedMonitor = true);
    void extentLaptop(bool buildWorkstation = true, int numMonitorExtended = 2);
};

void Monitor::displayPicture(int monitorResolution_, bool monitorHD)
{
    if(monitorResolution_ >= 1080)
    {
        monitorHD = true;
    }
    else
    {
        monitorHD = false;
    }
}

void Monitor::monitorFormOthers(int numPlayStation, bool playStationNeedMonitor)
{
    if(numPlayStation >= 1)
    {
        playStationNeedMonitor = true;
    }
    else
    {
        playStationNeedMonitor = false;
    }
}

void Monitor::extentLaptop(bool buildWorkstation, int numMonitorExtended)
{
    if(buildWorkstation == true)
    {
        numMonitorExtended = 2;
    }
    else
    {
        numMonitorExtended = 0;
    }
}



// 6)
struct Speaker
{
    int numAmplifier = 2;
    int lowestFrequencyResponse = 45;
    int highestFrequencyResponse = 22000;
    int maxSPL = 107;
    float systemTotalLatency = 1.02f;
    int speakerWeight = 800;


    void amplifySound(int volume = 5, bool loud = false);
    int connectPhones(bool bluetoothModule = true);
    void saturateSound(bool bassDrive = true);
};

void Speaker::amplifySound(int volume, bool loud)
{
    if(volume >= 7)
    {
        loud = true;
    }
    else
    {
        loud = false;
    }
}

int Speaker::connectPhones(bool bluetoothModule)
{
    if(bluetoothModule == true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Speaker::saturateSound(bool bassDrive)
{
    if(bassDrive == true)
    {
        std::cout << "Party Time!" << std::endl;
    }
    else
    {
        std::cout << "Real Speakers" << std::endl;
    }
}



// 7)
struct RemoteControl
{
    float remotePrice = 25.95f;
    float remoteWeight = 5.6f;
    float remotelength = 7.0f;
    float remoteWidth = 1.5f;
    int remoteBatteryLast = 6;


    int compatibleTV(int maxSetupDevice = 4, int setupStep = 5);
    void controlTV(int volumeButton = 4, int channelButton = 4, int confirmButton = 1);
    void playGame(bool TVGameAvailable = true, bool smartTV = true);
};

int RemoteControl::compatibleTV(int maxSetupDevice, int setupStep)
{
    if(maxSetupDevice >= 1)
    {
        setupStep = maxSetupDevice * 5;
    }
    else
    {
        setupStep = 0;
    }

    return {};
}

void RemoteControl::controlTV(int volumeButton, int channelButton, int confirmButton)
{
    volumeButton = 4;
    channelButton = 4;
    confirmButton = 1;
}

void RemoteControl::playGame(bool TVGameAvailable, bool smartTV)
{
    if(TVGameAvailable == true)
    {
        smartTV = true;
    }
    else
    {
        smartTV = false;
    }
}



// 8)
struct WifiModule
{
    float wifiWeight = 3.52f;
    int wifiPowerInput;
    float wifiOperationFrequency1 = 2.4f;
    float wifiOperationFrequency2 = 5.0f;
    int wifiMaxSpeed = 1200;
    float wifiWidth = 4.72f;


    void transmitSignal(int distance = 10, int numWifiSignal = 1, int numWifiMaxSignal = 3);
    void wifiFormOthers(bool TVNeeded = true, bool smartTV = true);
    void wirlessNetwork(bool manyFloors = true, bool wifiRangeExtenderNeeded = true);
};

void WifiModule::transmitSignal(int distance, int numWifiSignal, int numWifiMaxSignal)
{
    if(distance >= 5)
    {
        numWifiSignal = numWifiMaxSignal - 1;
    }
    else if(distance >= 10)
    {
        numWifiSignal = numWifiMaxSignal - 1 * 2;
    }
    else if (distance >= 15)
    {
        numWifiSignal = 0;
    }
    else
    {
        numWifiSignal = numWifiMaxSignal;
    }
}

void WifiModule::wifiFormOthers(bool TVNeeded, bool SmartTV)
{
    if(TVNeeded == true)
    {
        SmartTV = true;
    }
    else
    {
        SmartTV = false;
    }
}

void WifiModule::wirlessNetwork(bool manyFloors, bool wifiRangeExtenderNeeded)
{
    if(manyFloors == true)
    {
        wifiRangeExtenderNeeded = true;
    }
    else
    {
        wifiRangeExtenderNeeded = false;
    }
}



// 9)
struct Application
{
    int numUser;
    int proPrice = 39;
    float appSize = 145.4f;
    float appRating = 4.2f;
    double appVersion = 3.33;
    

    
    void chargeMoney(bool videoApp = true, float ProMemberPrice = 19.99f, bool advertisment = false);
    void interactWithPeople(bool goodUIDesign = true, bool goodUserExperience = true);
    int sendNotification(int usingTime = 40, int notificationTimePerDay = 3);
};

void Application::chargeMoney(bool videoApp, float ProMemberPrice, bool advertisment)
{
    if(videoApp == true)
    {
        ProMemberPrice = 19.99f;
        advertisment = false;
    }
    else
    {
        ProMemberPrice = 0.0f;
        advertisment = true;
    }
}

void Application::interactWithPeople(bool goodUIDesign, bool goodUserExperience)
{
    if(goodUIDesign == true && goodUserExperience == true)
    {
        std::cout << "Great Application!" << std::endl;
    }
    else
    {
        return;
    }
}

int Application::sendNotification(int usingTime, int notificationTimePerDay)
{
    if(usingTime <= 40)
    {
        notificationTimePerDay = 2;
    }
    else if(usingTime <= 20)
    {
        notificationTimePerDay = 4;
        std::cout << "Annoying!" << std::endl;
    }
    else
    {
        notificationTimePerDay = 0;
    }
    
    return {};
}



// 10)
struct SmartTV
{   
    Monitor monitorTV;
    Speaker speakerTV;
    RemoteControl remoteTV;
    WifiModule wifiTV;
    Application appTV;
    

    void displayTVChannel(int numChannel = 120, int numChannelCharged = 40);
    void playSound(bool speakers = true, int maxControlVolume = 100);
    void runApplication(bool appStore = true, bool appDownloadable = true);
};

void SmartTV::displayTVChannel(int numChannel, int numChannelCharged)
{
    numChannel = 120;
    numChannelCharged = 40;
}

void SmartTV::playSound(bool speakers, int maxControlVolume)
{
    if(speakers == true)
    {
        maxControlVolume = 100;
    }
    else
    {
        return;
    }
}

void SmartTV::runApplication(bool appStore, bool appDownloadable)
{
    if(appStore == true)
    {
        appDownloadable = true;
    }
    else
    {
        appDownloadable = false;
    }
}
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
