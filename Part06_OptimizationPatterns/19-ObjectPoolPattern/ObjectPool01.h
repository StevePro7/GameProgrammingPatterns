#ifndef cpp_objectpool01_h
#define cpp_objectpool01_h

namespace Temp01
{
   class Particle
   {
   public:
       void init(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime);
       bool animate();
       bool inUse() const;
       double x, y;
       double xVel, yVel;
       Particle* getNext() const;
       void setNext(Particle* next);

   private:
       int framesLeft;

       union
       {
           // State when it is in use.
           struct
           {
               double x, y;
               double xVel, yVel;
           } live;

           // State when it is available.
           Particle* next;
       } state;
   };

   class ParticlePool
   {
   public:
       ParticlePool();
       void create(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime);
       void animate();

   private:
       static const int POOL_SIZE = 100;
       Particle particles[POOL_SIZE];
       Particle* firstAvailable;
   };
}

#endif//cpp_objectpool01_h