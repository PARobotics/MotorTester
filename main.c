#pragma config(Sensor, dgtl1, Button, sensorTouch)
#pragma config(Motor, port2, TestMotor, tmotorVex393_MC29, openLoop)

task main(){
  while(true){
    if(SensorValue(Button) == 1){
      motor[TestMotor] = 127;
    }
    else motor[TestMotor] = 0;

    wait1Msec(50);
  }
}
