/**
  * @file <src/modules/AutoMoDeConditionInvertedWhiteFloor.h>
  */
	
#ifndef AUTOMODE_CONDITION_SMART_OBJECT_MOVING_WHITE_FLOOR_H
#define AUTOMODE_CONDITION_SMART_OBJECT_MOVING_WHITE_FLOOR_H

#include "AutoMoDeConditionSmartObject.h"

namespace argos {
	class AutoMoDeConditionSmartObjectMovingWhiteFloor: public AutoMoDeConditionSmartObject {
		public:
			AutoMoDeConditionSmartObjectMovingWhiteFloor();
			virtual ~AutoMoDeConditionSmartObjectMovingWhiteFloor();

			AutoMoDeConditionSmartObjectMovingWhiteFloor(AutoMoDeConditionSmartObjectMovingWhiteFloor* pc_condition);
			virtual AutoMoDeConditionSmartObjectMovingWhiteFloor* Clone();

			virtual bool Verify();
			virtual void Reset();
			virtual void Init();

		private:
			Real m_fGroundThreshold;
            Real m_fMovingThreshold;
			Real m_fProbability;
	};
}

#endif
