/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */

#include <stdio.h>

#define MAX_ROOMS 5  //  max number of rooms

int lights[MAX_ROOMS];
int temperatures[MAX_ROOMS];
int motionSenors[MAX_ROOMS];
int securitylocks[MAX_ROOMS];
int motionCounter=0;

// Function prototypes
void initializeSystem();
void displayMenu();
void controlLights();
void readTemperature();
void detectMotion();
void securitySystem();
void analyzeHouseStatus();

int main() {
    int choice;
    initializeSystem();
    while (1){
        displayMenu();
        scanf("%d",&choice);

        switch(choice) {
            case 1: controlLights();
            break;
            case 2: readTemperature();
            break;
            case 3: detectMotion();
            break;
            case 4: securitySystem();
            break;
            case 5: analyzeHouseStatus();
            break;
            case 6:printf("Exiting...\n");
            return 0;
            default:printf("Invalid choice! Please try again.\n");
        }
    
    }
}
void initializeSystem() {
    for (int i=0; i<MAX_ROOMS; i++){
        lights[i] = 0;
        temperatures[i]=25;
        motionSenors[i]=0;
        securitylocks[i]=1;
    }
    printf("System initialized successfully!\n");  
}

void displayMenu() {
    printf("\n===== Smart Home Menu =====\n");
    printf("1. Toggle Light\n");  
    printf("2. Read Temperature\n");  
    printf("3. Check Motion Sensor");  
    printf("4. Lock/Unlock Security System\n");  
    printf("5. House Status Summary\n");  
    printf("6. Exit\n");  
    printf("Enter your choice: "); 
}
void controlLights() {
    int room;
    printf("Enter room number(1-%d):",MAX_ROOMS);
    scanf("%d",&room);

    if (room>=1 && room<=MAX_ROOMS){
        lights[room-1]=!lights[room-1];
        printf("Lights in Room %d is now %s.\n",room,lights[room-1]? "ON" : "OFF");
    }else{
        printf("Invalid room number!\n");
    }

}
void readTemperature() {
    

}
void detectMotion() {

}
void securitySystem() {

}
void analyzeHouseStatus() {

}
