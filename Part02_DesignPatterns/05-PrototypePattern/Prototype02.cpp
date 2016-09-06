#include "Prototype02.h"

namespace Callbacks
{
    Spawner::Spawner(SpawnerCallback spawn) : spawn(spawn)
    {
    }
    Monster* Spawner::spawnMonster()
    {
        return spawn();
    }

}