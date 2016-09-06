#ifndef cpp_bytecode00_h
#define cpp_bytecode00_h

#define PLAYER 0
#define ENEMY 1

// Magic API.
void setHealth(int wizard, int amount);
void setWisdom(int wizard, int amount);
void setAgility(int wizard, int amount);

void playSound(int soundId);
void spawnParticles(int particleType);

int getHealth(int wizard);
int getWisdom(int wizard);
int getAgility(int wizard);

void increaseHealth();

enum Instruction
{
    INST_SET_HEALTH     = 0x00,
    INST_SET_WISDOM     = 0x01,
    INST_SET_AGILITY    = 0x02,
    INST_PLAY_SOUND     = 0x03,
    INST_SPAWN_PARTICLES= 0x04,
    INST_LITERAL,
    INST_GET_HEALTH,
    INST_GET_WISDOM,
    INST_GET_AGILITY,
    INST_ADD
};

static const int SOUND_BANG = 1;
static const int PARTICLE_FLAME = 1;

void interpretInstruction(char instruction);

#endif//cpp_bytecode00_h