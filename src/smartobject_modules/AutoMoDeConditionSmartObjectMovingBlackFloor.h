/**
  * @file <src/modules/AutoMoDeConditionBlackFloor.h>
  *
  * @author Antoine Ligot - <aligot@ulb.ac.be>
  *
  * @package ARGoS3-AutoMoDe
  *
  * @license MIT License
  */

#ifndef AUTOMODE_CONDITION_SMART_OBJECT_MOVING_BLACK_FLOOR_H
#define AUTOMODE_CONDITION_SMART_OBJECT_MOVING_BLACK_FLOOR_H

#include "AutoMoDeConditionSmartObject.h"

namespace argos {
	class AutoMoDeConditionSmartObjectMovingBlackFloor: public AutoMoDeConditionSmartObject {
		public:
			AutoMoDeConditionSmartObjectMovingBlackFloor();
			virtual ~AutoMoDeConditionSmartObjectMovingBlackFloor();

			AutoMoDeConditionSmartObjectMovingBlackFloor(AutoMoDeConditionSmartObjectMovingBlackFloor* pc_condition);
			virtual AutoMoDeConditionSmartObjectMovingBlackFloor* Clone();

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
