#include "ByteCode00.h"

void setHealth(int wizard, int amount)  {}
void setWisdom(int wizard, int amount)  {}
void setAgility(int wizard, int amount) {}

void playSound(int soundId)             {}
void spawnParticles(int particleType)   {}

int getHealth(int wizard)   { return 0; }
int getWisdom(int wizard)   { return 0; }
int getAgility(int wizard)  { return 0; }

void increaseHealth()
{
    int health = getHealth(PLAYER);
    int wisdom = getWisdom(PLAYER);
    int agility= getAgility(PLAYER);
    int avg = (wisdom + agility) / 2;
    int tot = health + avg;

    setHealth(0, tot);
}

void interpretInstruction(char instruction)
{
    // Interpret instruction.
    switch (instruction)
    {
    case INST_SET_HEALTH:
        setHealth(0, 100);
        break;

    case INST_SET_WISDOM:
        setWisdom(0, 100);
        break;

    case INST_SET_AGILITY:
        setAgility(0, 100);
        break;

    case INST_PLAY_SOUND:
        playSound(SOUND_BANG);
        break;

    case INST_SPAWN_PARTICLES:
        spawnParticles(PARTICLE_FLAME);
        break;

    case INST_LITERAL:
    case INST_GET_HEALTH:
    case INST_GET_WISDOM:
    case INST_GET_AGILITY:
    case INST_ADD:
        break;
    }
}