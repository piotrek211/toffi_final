/**
  * @file <src/modules/AutoMoDeConditionMoving.h>
  */

#ifndef AUTOMODE_CONDITION_SMART_OBJECT_MOVING_COLOR_H
#define AUTOMODE_CONDITION_SMART_OBJECT_MOVING_COLOR_H

#include "AutoMoDeConditionSmartObject.h"

namespace argos {
	class AutoMoDeConditionSmartObjectMovingColor: public AutoMoDeConditionSmartObject {
		public:
			AutoMoDeConditionSmartObjectMovingColor();
			virtual ~AutoMoDeConditionSmartObjectMovingColor();

			AutoMoDeConditionSmartObjectMovingColor(AutoMoDeConditionSmartObjectMovingColor* pc_condition);
			virtual AutoMoDeConditionSmartObjectMovingColor* Clone();

			virtual bool Verify();
			virtual void Reset();
			virtual void Init();

		private:
			Real m_fMovingThreshold;
			Real m_fProbability;
			Real vell = 0.0;
			CColor m_cColorParameter;
	};
}

#endif
