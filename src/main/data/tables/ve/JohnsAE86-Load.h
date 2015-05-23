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
 * @brief Default VE data for a mid-90s performance DOHC cylinder head design with square 500cc cylinders.
 *
 * - Chamber/head: DOHC pentroof 86x86mm (approximately 225 CFM)
 * - Compression: 9.0:1 static
 * - Fuel type: pump 98 RON / 93 AKI
 * - Torque peak: 6100 RPM centre with 1600 RPM wide plateau
 * - Redline: 7000 - 9500 RPM
 *
 * This data is a total and utter guess. It will likely get you running, though. Adjust to make EGO and integral lambda match for all sites.
 *
 * Do NOT drive on this map as though it was tuned for your particular setup. Destruction is sure to occur. Use this ONLY to get started.
 *
 * @author Ben Fenner
 */


   VE(28),   VE(39),   VE(39),   VE(34),   VE(35),   VE(37),   VE(39),   VE(41),   VE(43),   VE(44),   VE(45),   VE(47),   VE(49), VE(49.5),   VE(50),   VE(50), VE(49.5),
   VE(33),   VE(39),   VE(39),   VE(39),   VE(40),   VE(42),   VE(44),   VE(46),   VE(48),   VE(49),   VE(50),   VE(52),   VE(54), VE(54.5),   VE(55),   VE(55), VE(54.5),
   VE(38),   VE(39),   VE(39),   VE(44),   VE(45),   VE(47),   VE(49),   VE(51),   VE(53),   VE(55),   VE(56),   VE(58),   VE(60), VE(60.5),   VE(61),   VE(61), VE(60.5),
   VE(44),   VE(46),   VE(48),   VE(50),   VE(51),   VE(53),   VE(55),   VE(57),   VE(59),   VE(61),   VE(63),   VE(65),   VE(67), VE(67.5),   VE(68),   VE(68), VE(67.5),
   VE(47),   VE(49),   VE(51),   VE(52),   VE(55),   VE(57),   VE(59),   VE(62),   VE(64),   VE(66),   VE(69),   VE(71),   VE(73), VE(73.5),   VE(74),   VE(74), VE(73.5),

   VE(49),   VE(51),   VE(54),   VE(55),   VE(58),   VE(60),   VE(63),   VE(66),   VE(68),   VE(71),   VE(73),   VE(75),   VE(77), VE(77.5),   VE(78),   VE(78), VE(77.5),
   VE(51),   VE(54),   VE(56),   VE(58),   VE(61),   VE(63),   VE(66),   VE(70),   VE(72),   VE(74),   VE(76),   VE(78),   VE(80), VE(80.5),   VE(81),   VE(81), VE(80.5),
   VE(53),   VE(56),   VE(58),   VE(60),   VE(64),   VE(66),   VE(69),   VE(73),   VE(75),   VE(77),   VE(79),   VE(81),   VE(83), VE(83.5),   VE(84),   VE(84), VE(83.5),
   VE(56),   VE(59),   VE(61),   VE(64),   VE(68),   VE(70),   VE(73),   VE(77),   VE(80),   VE(82),   VE(84),   VE(86),   VE(88), VE(88.5),   VE(89),   VE(89), VE(88.5),
   VE(59),   VE(62),   VE(64),   VE(67),   VE(71),   VE(74),   VE(77),   VE(81),   VE(84),   VE(86),   VE(88),   VE(90),   VE(92), VE(92.5),   VE(93),   VE(93), VE(92.5),

   VE(62),   VE(65),   VE(67),   VE(70),   VE(75),   VE(78),   VE(81),   VE(85),   VE(88),   VE(91),   VE(93),   VE(96),   VE(97), VE(97.5),   VE(98),   VE(98), VE(97.5),
   VE(65),   VE(68),   VE(70),   VE(74),   VE(79),   VE(82),   VE(85),   VE(89),   VE(93),   VE(97),   VE(99),  VE(101),  VE(102),VE(102.5),  VE(103),  VE(103),VE(102.5),
   VE(68),   VE(71),   VE(74),   VE(78),   VE(83),   VE(86),   VE(89),   VE(93),   VE(98),  VE(102),  VE(104),  VE(106),  VE(107),VE(107.5),  VE(108),  VE(108),VE(107.5),
   VE(71),   VE(74),   VE(77),   VE(81),   VE(86),   VE(89),   VE(93),   VE(97),  VE(102),  VE(106),  VE(108),  VE(110),  VE(111),VE(111.5),  VE(112),  VE(112),VE(111.5),
   VE(73),   VE(76),   VE(79),   VE(83),   VE(89),   VE(92),   VE(96),  VE(100),  VE(105),  VE(109),  VE(111),  VE(113),  VE(114),VE(114.5),  VE(115),  VE(115),VE(114.5),

   VE(74),   VE(78),   VE(81),   VE(85),   VE(91),   VE(94),   VE(98),  VE(102),  VE(107),  VE(111),  VE(113),  VE(115),  VE(116),VE(116.5),  VE(117),  VE(117),VE(116.5),
   VE(75),   VE(79),   VE(82),   VE(86),   VE(92),   VE(95),   VE(99),  VE(103),  VE(108),  VE(112),  VE(114),  VE(116),  VE(117),VE(117.5),  VE(118),  VE(118),VE(117.5),
   VE(76),   VE(80),   VE(83),   VE(87),   VE(93),   VE(96),  VE(100),  VE(104),  VE(109),  VE(113),  VE(115),  VE(117),  VE(118),VE(118.5),  VE(119),  VE(119),VE(118.5),
   VE(77),   VE(81),   VE(84),   VE(88),   VE(94),   VE(97),  VE(101),  VE(105),  VE(110),  VE(114),  VE(116),  VE(118),  VE(119),VE(119.5),  VE(120),  VE(120),VE(119.5),
