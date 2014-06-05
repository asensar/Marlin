#ifndef RRI_THERMISTORTABLES_H_
#define RRI_THERMISTORTABLES_H_

#include "Marlin.h"


#if (THERMISTORHEATER_0 == 80) || (THERMISTORHEATER_1 == 80)  || (THERMISTORHEATER_2 == 80) || (THERMISTORBED == 80) 
// Thermistor lookup table for 100k glass thermistor from Reprap-india.com 
// Created by aSensar
 
const short temptable_80[][2] PROGMEM = {
{       21*OVERSAMPLENR         ,       270     },
{       23*OVERSAMPLENR         ,       265     },
{       25*OVERSAMPLENR         ,       260     },
{       27*OVERSAMPLENR         ,       255     },
{       28*OVERSAMPLENR         ,       250     },
{       29*OVERSAMPLENR         ,       245     },
{       35*OVERSAMPLENR         ,       240     },
{       38*OVERSAMPLENR         ,       235     },
{       41*OVERSAMPLENR         ,       230     },
{       46*OVERSAMPLENR         ,       225     },
{       51*OVERSAMPLENR         ,       220     },
{       55*OVERSAMPLENR         ,       215     },
{       63*OVERSAMPLENR         ,       210     },
{       69*OVERSAMPLENR         ,       205     },
{       70*OVERSAMPLENR         ,       200     },
{       81*OVERSAMPLENR         ,       195     },
{       95*OVERSAMPLENR         ,       190     },
{       100*OVERSAMPLENR        ,       185     },
{       109*OVERSAMPLENR        ,       180     },
{       120*OVERSAMPLENR        ,       175     },
{       139*OVERSAMPLENR        ,       170     },
{       147*OVERSAMPLENR        ,       165     },
{       162*OVERSAMPLENR        ,       160     },
{       182*OVERSAMPLENR        ,       155     },
{       200*OVERSAMPLENR        ,       150     },
{       219*OVERSAMPLENR        ,       145     },
{       241*OVERSAMPLENR        ,       140     },
{       268*OVERSAMPLENR        ,       135     },
{       312*OVERSAMPLENR        ,       130     },
{       339*OVERSAMPLENR        ,       125     },
{       404*OVERSAMPLENR        ,       120     },
{       400*OVERSAMPLENR        ,       115     },
{       425*OVERSAMPLENR        ,       110     },
{       453*OVERSAMPLENR        ,       105     },
{       486*OVERSAMPLENR        ,       100     },
{       535*OVERSAMPLENR        ,       95      },
{       577*OVERSAMPLENR        ,       90      },
{       623*OVERSAMPLENR        ,       85      },
{       660*OVERSAMPLENR        ,       80      },
{       700*OVERSAMPLENR        ,       75      },
{       739*OVERSAMPLENR        ,       70      },
{       775*OVERSAMPLENR        ,       65      },
{       804*OVERSAMPLENR        ,       60      },
{       840*OVERSAMPLENR        ,       55      },
{       866*OVERSAMPLENR        ,       50      },
{       894*OVERSAMPLENR        ,       45      },
{       915*OVERSAMPLENR        ,       40      },
{       940*OVERSAMPLENR        ,       35      },
{       955*OVERSAMPLENR        ,       30      }, //
{       970*OVERSAMPLENR        ,       25      },
{       985*OVERSAMPLENR        ,       20      },
{       994*OVERSAMPLENR        ,       15      },
{       1002*OVERSAMPLENR       ,       10      },
{       1010*OVERSAMPLENR       ,       5       },
{       1017*OVERSAMPLENR       ,       0       } //safety
};
#endif

#if (THERMISTORHEATER_0 == 81) || (THERMISTORHEATER_1 == 81)  || (THERMISTORHEATER_2 == 81) || (THERMISTORBED == 81) 
// Thermistor lookup table for 100k Black thermistor from Reprap-india.com 
// Created by aSensar
// beta: 3950

const short temptable_81[][2] PROGMEM = {
    {21*OVERSAMPLENR       ,       250}, 
    {24*OVERSAMPLENR       ,       240}, 
    {30*OVERSAMPLENR       ,       230}, 
    {34*OVERSAMPLENR       ,       220}, 
    {43*OVERSAMPLENR       ,       210}, 
    {50*OVERSAMPLENR       ,       200}, 
    {63*OVERSAMPLENR       ,       190}, 
    {80*OVERSAMPLENR        ,       180}, 
    {110*OVERSAMPLENR       ,       170},  //
    {142*OVERSAMPLENR       ,       160}, 
    {175*OVERSAMPLENR       ,       150}, 
    {212*OVERSAMPLENR       ,       140}, 
    {269*OVERSAMPLENR       ,       130}, 
    {330*OVERSAMPLENR       ,       120}, 
    {350*OVERSAMPLENR       ,       115}, 
    {400*OVERSAMPLENR       ,       110}, 
    {434*OVERSAMPLENR       ,       105},
    {473*OVERSAMPLENR       ,       100},
    {505*OVERSAMPLENR       ,       95},
    {555*OVERSAMPLENR       ,       90},
    {591*OVERSAMPLENR       ,       85},
    {639*OVERSAMPLENR       ,       80},
    {681*OVERSAMPLENR       ,       75},
    {713*OVERSAMPLENR       ,       70},
    {755*OVERSAMPLENR       ,       65},
    {795*OVERSAMPLENR       ,       60},    //
    {830*OVERSAMPLENR       ,       55},
    {860*OVERSAMPLENR       ,       50},
    {886*OVERSAMPLENR       ,       45},
    {912*OVERSAMPLENR       ,       40},
    {933*OVERSAMPLENR       ,       35},
    {951*OVERSAMPLENR       ,       30},
    {967*OVERSAMPLENR       ,       25},
    {990*OVERSAMPLENR       ,       0 } //safety

};
#endif //Thermistor 81


#endif //RRI_THERMISTORTABLES_H_
