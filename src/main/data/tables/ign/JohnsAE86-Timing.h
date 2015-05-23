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


//    200        700      1000      1500      2000      2500      3000      3500      4000      4500      5000      5500      6000      6500      7000      7500      8000    //
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //   0
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //   5
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  10
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  15
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  20

  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  25
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  30
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  35
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  40
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  46

  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  52
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  58
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  64
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  70
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  76

  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  82
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  88
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   //  94
  IT(00.0), IT(10.0), IT(10.0), IT(15.0), IT(20.0), IT(25.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0), IT(30.0),   // 100
//    200        700      1000      1500      2000      2500      3000      3500      4000      4500      5000      5500      6000      6500      7000      7500      8000    //
