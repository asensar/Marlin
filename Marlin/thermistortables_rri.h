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
    {97*OVERSAMPLENR       ,       255}, 
    {100*OVERSAMPLENR       ,       250}, 
    {115*OVERSAMPLENR       ,       240}, 
    {132*OVERSAMPLENR       ,       230}, 
    {151*OVERSAMPLENR       ,       220}, 
    {176*OVERSAMPLENR       ,       210}, 
    {204*OVERSAMPLENR       ,       200}, 
    {235*OVERSAMPLENR       ,       190}, 
    {270*OVERSAMPLENR       ,       180}, 
    {316*OVERSAMPLENR       ,       170}, 
    {380*OVERSAMPLENR       ,       160}, 
    {421*OVERSAMPLENR       ,       150}, 
    {471*OVERSAMPLENR       ,       140}, 
    {523*OVERSAMPLENR       ,       130}, 
    {581*OVERSAMPLENR       ,       120}, 
    {639*OVERSAMPLENR       ,       110}, 
    {660*OVERSAMPLENR       ,       115}, 
    {684*OVERSAMPLENR       ,       105},
    {704*OVERSAMPLENR       ,       100},
    {730*OVERSAMPLENR       ,       95},
    {750*OVERSAMPLENR       ,       90},
    {777*OVERSAMPLENR       ,       85},
    {805*OVERSAMPLENR       ,       80},
    {823*OVERSAMPLENR       ,       75},
    {843*OVERSAMPLENR       ,       70},
    {861*OVERSAMPLENR       ,       65},
    {878*OVERSAMPLENR       ,       60},
    {895*OVERSAMPLENR       ,       55},
    {910*OVERSAMPLENR       ,       50},
    {924*OVERSAMPLENR       ,       45},
    {936*OVERSAMPLENR       ,       40},
    {947*OVERSAMPLENR       ,       35},
    {958*OVERSAMPLENR       ,       30}
};
#endif //Thermistor 81


#endif //RRI_THERMISTORTABLES_H_
