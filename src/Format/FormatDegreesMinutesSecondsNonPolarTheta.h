/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef FORMAT_DEGREES_MINUTES_SECONDS_NON_POLAR_THETA_H
#define FORMAT_DEGREES_MINUTES_SECONDS_NON_POLAR_THETA_H

#include "CoordUnitsNonPolarTheta.h"
#include "FormatDegreesMinutesSecondsBase.h"
#include <QString>

/// Angular units according to CoordUnitsNonPolarTheta
class FormatDegreesMinutesSecondsNonPolarTheta : public FormatDegreesMinutesSecondsBase
{
 public:
  /// Single constructor
  FormatDegreesMinutesSecondsNonPolarTheta();

  /// Format the degrees/minutes/seconds value. Distinguishing x/theta versus y/radius is required for N/S/E/W hemispheres
  QString formatOutput (CoordUnitsNonPolarTheta coordUnits,
                        double value,
                        bool isXTheta) const;
};

#endif // FORMAT_DEGREES_MINUTES_SECONDS_NON_POLAR_THETA_H
