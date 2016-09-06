#ifndef cpp_subclass01_h
#define cpp_subclass01_h

#include "SubclassSandbox00.h"

namespace SimpleExample
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
    };

    class SkyLaunch : public Superpower
    {
    protected:
        void activate();
    };
}

#endif//cpp_subclass01_h