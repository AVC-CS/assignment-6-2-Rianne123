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
        mean = (rdnum1 + rdnum2 + rdnum3) / 3
        return mean;
}