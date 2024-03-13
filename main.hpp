//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        int num = 0;
        num = rand() % 100;
        return num;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        int mean = 0;
        mean = (rdnum1 + rdnum2 + rdnum3) / 3;
        double dif1 = abs(mean - rdnum1);
        double dif2 = abs(mean - rdnum2);
        double dif3 = abs(mean - rdnum3);
        int closest;
        if (dif1 < dif2) {
                if (dif1 < dif3) {
                        closest = rdnum1;
                }
                else {
                        closest = rdnum3;
                }
        } 
        else if (dif2 < dif1) {
                if (dif2 < dif3) {
                        closest = rdnum2;
                }
                else {
                        closest = rdnum3;
                }
        }     
        return closest;
}