/**
  * @file <src/modules/AutoMoDeConditionMoving.h>
  */

#ifndef AUTOMODE_CONDITION_SMART_OBJECT_NOT_MOVING_H
#define AUTOMODE_CONDITION_SMART_OBJECT_NOT_MOVING_H

#include "AutoMoDeConditionSmartObject.h"

namespace argos {
	class AutoMoDeConditionSmartObjectNotMoving: public AutoMoDeConditionSmartObject {
		public:
			AutoMoDeConditionSmartObjectNotMoving();
			virtual ~AutoMoDeConditionSmartObjectNotMoving();

			AutoMoDeConditionSmartObjectNotMoving(AutoMoDeConditionSmartObjectNotMoving* pc_condition);
			virtual AutoMoDeConditionSmartObjectNotMoving* Clone();

			virtual bool Verify();
			virtual void Reset();
			virtual void Init();

		private:
			Real m_fMovingThreshold;
	};
}

#endif
