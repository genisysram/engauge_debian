/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef FORMAT_COORDS_UNITS_STRATEGY_NON_POLAR_THETA_H
#define FORMAT_COORDS_UNITS_STRATEGY_NON_POLAR_THETA_H

#include "CoordUnitsDate.h"
#include "CoordUnitsNonPolarTheta.h"
#include "CoordUnitsTime.h"
#include "FormatCoordsUnitsStrategyAbstractBase.h"
#include <QString>

class DocumentModelGeneral;
class QLocale;
class Transformation;

/// Format conversions between unformatted and formatted for CoordUnitsNonPolarTheta
class FormatCoordsUnitsStrategyNonPolarTheta : public FormatCoordsUnitsStrategyAbstractBase
{
 public:
  /// Single constructor
  FormatCoordsUnitsStrategyNonPolarTheta();

  /// Convert formatted string to simple unformatted number
  double formattedToUnformatted (const QString &string,
                                 const QLocale &locale,
                                 CoordUnitsNonPolarTheta coordUnits,
                                 CoordUnitsDate coordUnitsDate,
                                 CoordUnitsTime coordUnitsTime) const;

  /// Convert simple unformatted number to formatted string
  QString unformattedToFormatted (double valueUnformatted,
                                  const QLocale &locale,
                                  CoordUnitsNonPolarTheta coordUnits,
                                  CoordUnitsDate coordUnitsDate,
                                  CoordUnitsTime coordUnitsTime,
                                  bool isXTheta,
                                  const DocumentModelGeneral &modelGeneral,
                                  const Transformation &transformation,
                                  double valueUnformattedOther) const;

};

#endif // FORMAT_COORDS_UNITS_STRATEGY_NON_POLAR_THETA_H
