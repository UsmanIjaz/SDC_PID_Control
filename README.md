Kp is the proportional gain, a tuning parameter. The proportional term produces an output value that is proportional to the current error value. 
The proportional response can be adjusted by multiplying the error by a constant Kp, called the proportional gain constant. I initialize the value to 0.3

Ki is the integral gain, a tuning parameter. The contribution from the integral term is proportional to both the magnitude of the error and the duration of the error. The integral in a PID controller is the 
sum of the instantaneous error over time and gives the accumulated offset that should have been corrected previously.I initialize the value to 0.001


Kd is the derivative gain, a tuning parameter. The derivative of the process error is calculated by determining the
 slope of the error over time and multiplying this rate of change by the derivative gain Kd. I initialize the value to 3.0


Initially, I set all gains to 0 and saw how it did on track. I then started to increase P until response started showing decent oscillatory behavior.
Then I tweaked D value till oscillations became limited. I set P values by trial and error till I got successful run around the track