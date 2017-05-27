/*! \file */

#ifndef __NEONEXTION_NEXTIONSLIDER
#define __NEONEXTION_NEXTIONSLIDER

#include "Nextion.h"
#include "INextionTouchable.h"
#include "INextionColourable.h"
#include "INextionNumericalValued.h"

/*!
 * \class NextionSlider
 * \brief Represents a slider widget.
 */
class NextionSlider : public INextionTouchable,
                      public INextionColourable,
                      public INextionNumericalValued
{
public:
  /*!
   * \copydoc INextionWidget::INextionWidget
   */
  NextionSlider(Nextion &nex, uint8_t page, uint8_t component, const char *name, const char *page_name)
      : INextionWidget(nex, page, component, name,page_name)
      , INextionTouchable(nex, page, component, name,page_name)
      , INextionColourable(nex, page, component, name,page_name)
      , INextionNumericalValued(nex, page, component, name,page_name)
  {
  }
};

#endif
