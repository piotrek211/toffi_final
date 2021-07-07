/**
  * @file <src/modules/AutoMoDeConditionMoving.h>
  */

#ifndef AUTOMODE_CONDITION_SMART_OBJECT_TIMER_H
#define AUTOMODE_CONDITION_SMART_OBJECT_TIMER_H

#include "AutoMoDeConditionSmartObject.h"

namespace argos {
	class AutoMoDeConditionSmartObjectTimer: public AutoMoDeConditionSmartObject {
		public:
			AutoMoDeConditionSmartObjectTimer();
			virtual ~AutoMoDeConditionSmartObjectTimer();

			AutoMoDeConditionSmartObjectTimer(AutoMoDeConditionSmartObjectTimer* pc_condition);
			virtual AutoMoDeConditionSmartObjectTimer* Clone();

			virtual bool Verify();
			virtual void Reset();
			virtual void Init();

		private:
			Real m_fMovingThreshold;
			UInt16 m_uTimer;
			UInt16 timer;
	};
}

#endif
