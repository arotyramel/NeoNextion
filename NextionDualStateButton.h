/*! \file */

#ifndef __NEONEXTION_NEXTIONDUALSTATEBUTTON
#define __NEONEXTION_NEXTIONDUALSTATEBUTTON

#include "Nextion.h"
#include "INextionTouchable.h"
#include "INextionColourable.h"
#include "INextionBooleanValued.h"

/*!
 * \class NextionDualStateButton
 * \brief Represents a dual state button widget.
 */
class NextionDualStateButton : public INextionTouchable,
                               public INextionColourable,
                               public INextionBooleanValued
{
public:
  /*!
   * \copydoc INextionWidget::INextionWidget
   */
  NextionDualStateButton(Nextion &nex, uint8_t page, uint8_t component,
                         const char *name, const char *page_name)
      : INextionWidget(nex, page, component, name,page_name)
      , INextionTouchable(nex, page, component, name,page_name)
      , INextionColourable(nex, page, component, name,page_name)
      , INextionBooleanValued(nex, page, component, name,page_name)
  {
  }
};

#endif
