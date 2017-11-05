

### GPIO Library for BeagleBone

#### high performance I/O 

Currently implemented functions:

```c
int init(); /*!< mmap /dev/mem into memory */
int digitalInput(PIN p);  // configure PIN as input pin
int digitalOutput(PIN p);  // configure PIN as output pin
int digitalWrite(PIN p, uint8_t setting); // set pin high(setting=1) or low(setting=0)
int digitalRead(PIN p); // returns 0 : pin is low  >0 pin is high
int analogRead(PIN p);
```

HELP: https://github.com/df3xc/BeagleBone-GPIO/wiki

TODO:
  - PWM

This set of files have been forked from ehayon@github and modifications made by iron76@github.
