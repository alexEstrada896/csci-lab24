When there are two consecutive yellow lights, the program should tell the user to stop at the second yellow light (-1)

1. (10 pts) Write a complete program in C++ that simulates a traffic light system. 

Your program will define an enumerated data type called LightState with enumerators for the three possible traffic light states RED, YELLOW, and GREEN. The program should define an array of 3 LightStates simulating three consecutive traffic lights on a road. The program should randomly populate the array. Each of the 3 LightStates could store any of the three possible traffic light states randomly (ex: {GREEN, GREEN, RED}, {RED, GREEN, YELLOW}).

The program should then evaluate the array, and report to the user the status on the road.

Three possibilities:

If any traffic light is RED, the program needs to inform the user that they have to stop at that specific traffic light. The program does not need to check any traffic lights after the RED light.
If the traffic light is YELLOW, if it is not the last traffic light, the program needs to check the next traffic light. If the next traffic light is also YELLOW, the program should tell the user to stop at the next light. The program should only tell the user to stop when there are two consecutive YELLOW lights. 
If the traffic light is GREEN, the user can continue driving at that traffic light. If all three LightStates are GREEN (or only non-consecutive traffic light is YELLOW), the program can tell the user that they can "keep driving all the way."
Your program should generate and output a different random sequence of LightStates each time it runs.

Sample output 1:

The three traffic lights ahead: GREEN, YELLOW, YELLOW.
You need to stop at traffic light 3.
Sample output 2:

The three traffic lights ahead: GREEN, RED, RED.
You need to stop at traffic light 2.
Sample output 3:

The three traffic lights ahead: GREEN, GREEN, GREEN.
You can keep driving all the way.
Sample output 4:

The three traffic lights ahead: GREEN, YELLOW, GREEN.
You can keep driving all the way.
