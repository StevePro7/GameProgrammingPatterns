#ifndef cpp_subclass02_h
#define cpp_subclass02_h

#include "SubclassSandbox00.h"

namespace Elaborated
{
   class Superpower
   {
    public:
        virtual ~Superpower();

   protected:
       virtual void activate() = 0;

       void move(double x, double y, double z);
       void playSound(SoundId sound, double volume);
       void spawnParticles(ParticleType type, int count);

       double getHeroX();
       double getHeroY();
       double getHeroZ();
   };

   class SkyLaunch : public Superpower
   {
   protected:
       void activate();
   };
}

#endif//cpp_subclass02_h