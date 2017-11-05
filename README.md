### GPIO Library for BeagleBone

#### high performance I/O 

Currently implemented functions:

```c
int init(); /*!< mmap /dev/mem into memory */
int digitalWrite(PIN p, uint8_t mode);
int digitalRead(PIN p);
int analogRead(PIN p);
```

TODO:
  - PWM

This set of files have been forked from ehayon@github and modifications made by iron76@github.
