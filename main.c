#include <kipr/botball.h>

int main()
{
    /*create_connect();
    create_drive_direct(100, 100); //straight
    msleep(1000);
    create_drive_direct(0, 50);    //turn left
    msleep(2500);
    create_drive_direct(50, 0);    //turn right
    msleep(2500);
    create_drive_direct(50, 0);    //turn around
    msleep(5000);
    motor(2, 100);
    msleep(5000);
    
    create_stop();*/
    create_connect();
    //create_drive_direct(100, 100);
    //msleep(6000);
    create_drive_direct(0, 50);
    msleep(6000);
    create_drive_direct(50, 0);
    msleep(5500);
    create_drive_direct(100, 100);
    msleep(4000);
    //make code for grab and call here
     create_drive_direct(-50, 0);
    msleep(6000);
    create_drive_direct(0, -50);
    msleep(5500);
    create_drive_direct(100, -100);
    msleep(3500);
    //make code to drop and call it
     create_drive_direct(100, -100);
    msleep(3000);
    
}
