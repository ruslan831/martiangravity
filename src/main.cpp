#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;
class $modify(PlayerObject) {
 void updateJump(float p0){
    this->m_gravity = 0.6f;
	return PlayerObject::updateJump(p0);
   }
};
