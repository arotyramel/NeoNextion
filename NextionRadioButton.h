/*! \file */

#ifndef __NEONEXTION_NEXTIONRADIOBUTTON
#define __NEONEXTION_NEXTIONRADIOBUTTON

#include "Nextion.h"
#include "INextionTouchable.h"
#include "INextionColourable.h"
#include "INextionBooleanValued.h"

/*!
 * \class NextionRadioButton
 * \brief Represents a basic button widget.
 */
class NextionRadioButton : public INextionTouchable,
                           public INextionColourable,
                           public INextionBooleanValued
{
public:
  /*!
   * \copydoc INextionWidget::INextionWidget
   */
  NextionRadioButton(Nextion &nex, uint8_t page, uint8_t component,
                     const char *name,const char *page_name)
      : INextionWidget(nex, page, component, name,page_name)
      , INextionTouchable(nex, page, component, name,page_name)
      , INextionColourable(nex, page, component, name, page_name)
      , INextionBooleanValued(nex, page, component, name,page_name)
  {
  }
};

#endif
