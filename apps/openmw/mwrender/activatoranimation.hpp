#ifndef _GAME_RENDER_ACTIVATORANIMATION_H
#define _GAME_RENDER_ACTIVATORANIMATION_H

#include "animation.hpp"

namespace MWWorld
{
    class Ptr;
}

namespace MWRender
{
    class ActivatorAnimation : public Animation
    {
    public:
        ActivatorAnimation(const MWWorld::Ptr& ptr);
        virtual ~ActivatorAnimation();

        virtual void runAnimation(float timepassed);
    };
}

#endif
