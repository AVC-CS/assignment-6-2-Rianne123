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
        int dif1 = rdnum1 - mean;
        int dif2 = rdnum2 - mean;
        int dif3 = rdnum3 - mean;
        int closest;
        if (dif1 < dif2) {
                if (dif1 < dif3) {
                        closest = dif1;
                }
                else {
                        closest = dif3;
                }
        } 
        else if (dif2 < dif1) {
                if (dif2 < dif3) {
                        closest = dif2;
                }
                else {
                        closest = dif3;
                }
        }     
        return closest;
}