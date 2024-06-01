#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_CEASELESS_EDGE, MOVE_EFFECT_SPIKES) == TRUE);
}

SINGLE_BATTLE_TEST("Ceaseless Edge sets up hazards after hitting the target")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CEASELESS_EDGE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CEASELESS_EDGE, player);
        HP_BAR(opponent);
        MESSAGE("Spikes were scattered all around the opposing team!");
        MESSAGE("2 sent out Alakazam!");
        HP_BAR(opponent, damage: maxHP / 8);
        MESSAGE("Foe Alakazam is hurt by spikes!");
    }
}

SINGLE_BATTLE_TEST("Ceaseless Edge can set up to 3 layers of Spikes")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_CEASELESS_EDGE); }
        TURN { MOVE(player, MOVE_CEASELESS_EDGE); }
        TURN { MOVE(player, MOVE_CEASELESS_EDGE); }
        TURN { MOVE(player, MOVE_CEASELESS_EDGE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_CEASELESS_EDGE, player);
        HP_BAR(opponent);
        MESSAGE("Spikes were scattered all around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_CEASELESS_EDGE, player);
        HP_BAR(opponent);
        MESSAGE("Spikes were scattered all around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_CEASELESS_EDGE, player);
        HP_BAR(opponent);
        MESSAGE("Spikes were scattered all around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_CEASELESS_EDGE, player);
        HP_BAR(opponent);
        NOT MESSAGE("Spikes were scattered all around the opposing team!");

        MESSAGE("2 sent out Abra!");
        HP_BAR(opponent, damage: maxHP / 4);
        MESSAGE("Foe Abra is hurt by spikes!");
    }
}
