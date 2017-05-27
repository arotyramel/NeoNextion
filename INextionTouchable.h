/*! \file */

#ifndef __NEONEXTION_INEXTIONTOUCHABLE
#define __NEONEXTION_INEXTIONTOUCHABLE

#include "Nextion.h"
#include "INextionWidget.h"
#include "INextionCallback.h"
#include "NextionCallbackFunctionHandler.h"

/*!
 * \class INextionTouchable
 * \brief Interface for widgets that can be touched.
 */
class INextionTouchable : public virtual INextionWidget
{
public:
  INextionTouchable(Nextion &nex, uint8_t page, uint8_t component,
                    const char *name, const char *page_name);
  
  bool processEvent(uint8_t pageID, uint8_t componentID, uint8_t eventType);

  bool attachCallback(NextionCallbackFunctionHandler::NextionFunction cb,int id=0);
  bool attachCallback(INextionCallback *obj,int id=0);
  void detachCallback();
  int id_;
private:
  INextionCallback *m_callback;
};

#endif
