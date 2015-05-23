/* FreeEMS - the open source engine management system
 *
 * Copyright 2012 Fred Cooke
 *
 * This file is part of the FreeEMS project.
 *
 * FreeEMS software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FreeEMS software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with any FreeEMS software.  If not, see http://www.gnu.org/licenses/
 *
 * We ask that if you make any changes to this file you email them upstream to
 * us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!
 *
 * Thank you for choosing FreeEMS to run your engine!
 */


/** @file
 *
 * @ingroup dataInitialisers
 *
 */


//    200       700      1000      1500      2000      2500      3000      3500      4000      4500      5000      5500      6000      6500      7000      7500      8000    //
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //   0
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //   5
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  10
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  15
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  20

 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  25
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  30
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  35
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  40
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  46

 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  52
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  58
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  64
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  70
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  76

 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  82
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  88
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    //  94
 AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0), AP(14.0),    // 100
//    200        700      1000      1500      2000      2500      3000      3500      4000      4500      5000      5500      6000      6500      7000      7500      8000    //
