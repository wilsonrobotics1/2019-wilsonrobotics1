#include <kipr/botball.h>

int main()
{
    //wait_for_light(1);
    create_connect();
    shut_down_in(119);
    printf("Kabooooooom!!!\n");
      /*create_drive_direct(100, 100);//*drive foward for 3 seconds(1
    msleep(3000);
    create_drive_direct(100, 0);//*make 90 degree turn to right(2
    msleep(3400);
     create_drive_direct(100, 100);//*drive foward for 4 and a half seconds(3
    msleep(4500);
   	//	 motor(0,100);//extend extendo arm for 1 half seconds
    //msleep(3000);
    //ao();
    motor(2,100);//close shnip shnapper(claw) for 5 seconds   
    msleep(15000);
    ao();*/
    create_drive_direct(0, 100);//*turn to left for 2 seconds(4
    msleep(2000);
    motor(0,-100);//Retract extendo arm
    msleep(3000);
    ao
    create_drive_direct(0, 100);//*turn to left for 2 seconds(5
    msleep(2000);
    create_drive_direct(100, 100);//*drive foward for 5 seconds(6
    msleep(5000);
    	motor(2,-100);//open shnip shnapper(claw) for 5 seconds   
    msleep(15000);
   /* create_drive_direct(0, 100);//*make 90 degree turn to left(7
    msleep(3400);
    create_drive_direct(100, 100);//*drive foward for 1 seconds(8
    msleep(1000);
    create_drive_direct(0, 100);//*make 90 degree turn to left(9
    msleep(3400);*/
    	
    return 0;
}
