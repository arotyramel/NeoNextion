/*! \file */

#ifndef __NEONEXTION_NEXTIONNUMBER
#define __NEONEXTION_NEXTIONNUMBER

#include "Nextion.h"
#include "INextionTouchable.h"
#include "INextionColourable.h"
#include "INextionNumericalValued.h"
#include "INextionFontStyleable.h"

/*!
 * \class NextionNumber
 * \brief Represents a number widget.
 */
class NextionNumber : public INextionTouchable,
                      public INextionColourable,
                      public INextionNumericalValued,
                      public INextionFontStyleable
{
public:
  /*!
   * \copydoc INextionWidget::INextionWidget
   */
  NextionNumber(Nextion &nex, uint8_t page, uint8_t component, const char *name,const char * page_name)
      : INextionWidget(nex, page, component, name,page_name)
      , INextionTouchable(nex, page, component, name,page_name)
      , INextionColourable(nex, page, component, name,page_name)
      , INextionNumericalValued(nex, page, component, name,page_name)
      , INextionFontStyleable(nex, page, component, name,page_name)
  {
  }
};

#endif
