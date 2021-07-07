/**
  * @file <src/modules/AutoMoDeConditionMoving.h>
  */

#ifndef AUTOMODE_CONDITION_SMART_OBJECT_COMBINATION_H
#define AUTOMODE_CONDITION_SMART_OBJECT_COMBINATION_H

#include "AutoMoDeConditionSmartObject.h"

namespace argos {
	class AutoMoDeConditionSmartObjectCombination: public AutoMoDeConditionSmartObject {
		public:
			AutoMoDeConditionSmartObjectCombination();
			virtual ~AutoMoDeConditionSmartObjectCombination();

			AutoMoDeConditionSmartObjectCombination(AutoMoDeConditionSmartObjectCombination* pc_condition);
			virtual AutoMoDeConditionSmartObjectCombination* Clone();

			virtual bool Verify();
			virtual void Reset();
			virtual void Init();

		private:
			Real m_fMovingThreshold;
			//Real m_fProbability;
			Real vell = 0.0;
	};
}

#endif
