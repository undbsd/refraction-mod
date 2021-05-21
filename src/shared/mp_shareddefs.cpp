//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose:
//
//=============================================================================

#include "cbase.h"
#include "mp_shareddefs.h"

const char *g_pszMPConcepts[] =
{
    "TLK_FIREWEAPON",               // MP_CONCEPT_FIREWEAPON
    "TLK_HURT",                     // MP_CONCEPT_HURT
    "TLK_PLAYER_EXPRESSION",        // MP_CONCEPT_PLAYER_EXPRESSION
    "TLK_WINDMINIGUN",              // MP_CONCEPT_WINDMINIGUN
    "TLK_FIREMINIGUN",              // MP_CONCEPT_FIREMINIGUN
    "TLK_PLAYER_MEDIC",             // MP_CONCEPT_PLAYER_MEDIC
    "TLK_DETONATED_OBJECT",         // MP_CONCEPT_DETONATED_OBJECT
    "TLK_KILLED_PLAYER",            // MP_CONCEPT_KILLED_PLAYER
    "TLK_KILLED_OBJECT",            // MP_CONCEPT_KILLED_OBJECT
    "TLK_PLAYER_PAIN",              // MP_CONCEPT_PLAYER_PAIN
    "TLK_PLAYER_ATTACKER_PAIN",     // MP_CONCEPT_PLAYER_ATTACKER_PAIN
    "TLK_PLAYER_TAUNT",             // MP_CONCEPT_PLAYER_TAUNT
    "TLK_PLAYER_HELP",              // MP_CONCEPT_PLAYER_HELP
    "TLK_PLAYER_GO",                // MP_CONCEPT_PLAYER_GO
    "TLK_PLAYER_MOVEUP",            // MP_CONCEPT_PLAYER_MOVEUP
    "TLK_PLAYER_LEFT",              // MP_CONCEPT_PLAYER_LEFT
    "TLK_PLAYER_RIGHT",             // MP_CONCEPT_PLAYER_RIGHT
    "TLK_PLAYER_YES",               // MP_CONCEPT_PLAYER_YES
    "TLK_PLAYER_NO",                // MP_CONCEPT_PLAYER_NO
    "TLK_PLAYER_INCOMING",          // MP_CONCEPT_PLAYER_INCOMING
    "TLK_PLAYER_CLOAKEDSPY",        // MP_CONCEPT_PLAYER_CLOAKEDSPY
    "TLK_PLAYER_SENTRYAHEAD",       // MP_CONCEPT_PLAYER_SENTRYAHEAD
    "TLK_PLAYER_TELEPORTERHERE",    // MP_CONCEPT_PLAYER_TELEPORTERHERE
    "TLK_PLAYER_DISPENSERHERE",     // MP_CONCEPT_PLAYER_DISPENSERHERE
    "TLK_PLAYER_SENTRYHERE",        // MP_CONCEPT_PLAYER_SENTRYHERE
    "TLK_PLAYER_ACTIVATECHARGE",    // MP_CONCEPT_PLAYER_ACTIVATECHARGE
    "TLK_PLAYER_CHARGEREADY",       // MP_CONCEPT_PLAYER_CHARGEREADY
    "TLK_PLAYER_TAUNTS" ,           // MP_CONCEPT_PLAYER_TAUNTS
    "TLK_PLAYER_BATTLECRY",         // MP_CONCEPT_PLAYER_BATTLECRY
    "TLK_PLAYER_CHEERS",            // MP_CONCEPT_PLAYER_CHEERS
    "TLK_PLAYER_JEERS",             // MP_CONCEPT_PLAYER_JEERS
    "TLK_PLAYER_POSITIVE",          // MP_CONCEPT_PLAYER_POSITIVE
    "TLK_PLAYER_NEGATIVE",          // MP_CONCEPT_PLAYER_NEGATIVE
    "TLK_PLAYER_NICESHOT",          // MP_CONCEPT_PLAYER_NICESHOT
    "TLK_PLAYER_GOODJOB",           // MP_CONCEPT_PLAYER_GOODJOB
    "TLK_MEDIC_STARTEDHEALING",     // MP_CONCEPT_MEDIC_STARTEDHEALING
    "TLK_MEDIC_CHARGEREADY",        // MP_CONCEPT_MEDIC_CHARGEREADY
    "TLK_MEDIC_STOPPEDHEALING",     // MP_CONCEPT_MEDIC_STOPPEDHEALING
    "TLK_MEDIC_CHARGEDEPLOYED",     // MP_CONCEPT_MEDIC_CHARGEDEPLOYED
    "TLK_FLAGPICKUP",               // MP_CONCEPT_FLAGPICKUP
    "TLK_FLAGCAPTURED",             // MP_CONCEPT_FLAGCAPTURED
    "TLK_ROUND_START",              // MP_CONCEPT_ROUND_START
    "TLK_SUDDENDEATH_START",        // MP_CONCEPT_SUDDENDEATH_START
    "TLK_ONFIRE",                   // MP_CONCEPT_ONFIRE
    "TLK_STALEMATE",                // MP_CONCEPT_STALEMATE
    "TLK_BUILDING_OBJECT",          // MP_CONCEPT_BUILDING_OBJECT
    "TLK_LOST_OBJECT",              // MP_CONCEPT_LOST_OBJECT
    "TLK_SPY_SAPPER",               // MP_CONCEPT_SPY_SAPPER
    "TLK_TELEPORTED",               // MP_CONCEPT_TELEPORTED
    "TLK_LOST_CONTROL_POINT",       // MP_CONCEPT_LOST_CONTROL_POINT
    "TLK_CAPTURED_POINT",           // MP_CONCEPT_CAPTURED_POINT
    "TLK_CAPTURE_BLOCKED",          // MP_CONCEPT_CAPTURE_BLOCKED
    "TLK_HEALTARGET_STARTEDHEALING",// MP_CONCEPT_HEALTARGET_STARTEDHEALING
    "TLK_HEALTARGET_CHARGEREADY",   // MP_CONCEPT_HEALTARGET_CHARGEREADY
    "TLK_HEALTARGET_STOPPEDHEALING",// MP_CONCEPT_HEALTARGET_STOPPEDHEALING
    "TLK_HEALTARGET_CHARGEDEPLOYED",// MP_CONCEPT_HEALTARGET_CHARGEDEPLOYED
    "TLK_MINIGUN_FIREWEAPON",       // MP_CONCEPT_MINIGUN_FIREWEAPON
    "TLK_DIED",                     // MP_CONCEPT_DIED
    "TLK_PLAYER_THANKS",            // MP_CONCEPT_PLAYER_THANKS
    "TLK_CART_MOVING_FORWARD",      // MP_CONCEPT_CART_MOVING_FORWARD
    "TLK_CART_MOVING_BACKWARD",     // MP_CONCEPT_CART_MOVING_BACKWARD
    "TLK_CART_STOP",                // MP_CONCEPT_CART_STOP
    "TLK_ATE_FOOD",                 // MP_CONCEPT_ATE_FOOD
    "TLK_DOUBLE_JUMP",              // MP_CONCEPT_DOUBLE_JUMP
    "TLK_DODGING",                  // MP_CONCEPT_DODGING
    "TLK_DODGE_SHOT",               // MP_CONCEPT_DODGE_SHOT
    "TLK_GRAB_BALL",                // MP_CONCEPT_GRAB_BALL
    "TLK_REGEN_BALL",               // MP_CONCEPT_REGEN_BALL
    "TLK_DEFLECTED",                // MP_CONCEPT_DEFLECTED
    "TLK_BALL_MISSED",              // MP_CONCEPT_BALL_MISSED
    "TLK_STUNNED",                  // MP_CONCEPT_STUNNED
    "TLK_STUNNED_TARGET",           // MP_CONCEPT_STUNNED_TARGET
    "TLK_TIRED",                    // MP_CONCEPT_TIRED
    "TLK_BAT_BALL",                 // MP_CONCEPT_BAT_BALL
    "TLK_ACHIEVEMENT_AWARD",        // MP_CONCEPT_ACHIEVEMENT_AWARD
    "TLK_JARATE_HIT",               // MP_CONCEPT_JARATE_HIT
    "TLK_JARATE_LAUNCH",            // MP_CONCEPT_JARATE_LAUNCH
    "TLK_HIGHFIVE_SUCCESS",         // MP_CONCEPT_HIGHFIVE_SUCCESS
    "TLK_HIGHFIVE_SUCCESS_FULL",    // MP_CONCEPT_HIGHFIVE_SUCCESS_FULL
    "TLK_HIGHFIVE_FAILURE",         // MP_CONCEPT_HIGHFIVE_FAILURE
    "TLK_HIGHFIVE_FAILURE_FULL",    // MP_CONCEPT_HIGHFIVE_FAILURE_FULL
    "TLK_PLAYER_TAUNT2",            // MP_CONCEPT_PLAYER_TAUNT2
    "TLK_PICKUP_BUILDING",          // MP_CONCEPT_PICKUP_BUILDING,
    "TLK_REDEPLOY_BUILDING",        // MP_CONCEPT_REDEPLOY_BUILDING
    "TLK_CARRYING_BUILDING",        // MP_CONCEPT_CARRYING_BUILDING
    "TLK_REQUEST_DUEL",             // MP_CONCEPT_DUEL_REQUEST
    "TLK_REJECT_DUEL",              // MP_CONCEPT_DUEL_TARGET_REJECT,
    "TLK_DUEL_WAS_REJECTED",        // MP_CONCEPT_DUEL_REJECTED
    "TLK_ACCEPT_DUEL",              // MP_CONCEPT_DUEL_TARGET_ACCEPT
    "TLK_DUEL_WAS_ACCEPTED",        // MP_CONCEPT_DUEL_ACCEPTED
    "TLK_PLAYER_SHOW_ITEM_TAUNT",   // MP_CONCEPT_PLAYER_SHOW_ITEM_TAUNT
    "TLK_TAUNT_REPLAY",             // MP_CONCEPT_TAUNT_REPLAY
    "TLK_TAUNT_LAUGH",              // MP_CONCEPT_TAUNT_LAUGH
    "TLK_TAUNT_HEROIC_POSE",        // MP_CONCEPT_TAUNT_HEROIC_POSE
    "TLK_PARTNER_TAUNT_READY",      // MP_CONCEPT_PARTNER_TAUNT_READY
    "TLK_PLAYER_HOLDTAUNT",         // MP_CONCEPT_HOLDTAUNT
    "TLK_TAUNT_PYRO_ARMAGEDDON",    // MP_CONCEPT_TAUNT_PYRO_ARMAGEDDON
    "TLK_ROCKET_DESTOYED",          // MP_CONCEPT_ROCKET_DESTOYED
    "TLK_MVM_BOMB_DROPPED",         // MP_CONCEPT_MVM_BOMB_DROPPED
    "TLK_MVM_BOMB_CARRIER_UPGRADE1",// MP_CONCEPT_MVM_BOMB_CARRIER_UPGRADE1
    "TLK_MVM_BOMB_CARRIER_UPGRADE2",// MP_CONCEPT_MVM_BOMB_CARRIER_UPGRADE2
    "TLK_MVM_BOMB_CARRIER_UPGRADE3",// MP_CONCEPT_MVM_BOMB_CARRIER_UPGRADE3
    "TLK_MVM_DEFENDER_DIED",        // MP_CONCEPT_MVM_DEFENDER_DIED
    "TLK_MVM_FIRST_BOMB_PICKUP",    // MP_CONCEPT_MVM_FIRST_BOMB_PICKUP
    "TLK_MVM_BOMB_PICKUP",          // MP_CONCEPT_MVM_BOMB_PICKUP
    "TLK_MVM_SENTRY_BUSTER",        // MP_CONCEPT_MVM_SENTRY_BUSTER
    "TLK_MVM_SENTRY_BUSTER_DOWN",   // MP_CONCEPT_MVM_SENTRY_BUSTER_DOWN
    "TLK_MVM_SNIPER_CALLOUT",       // MP_CONCEPT_MVM_SNIPER_CALLOUT
    "TLK_MVM_LAST_MAN_STANDING",    // MP_CONCEPT_MVM_LAST_MAN_STANDING
    "TLK_MVM_ENCOURAGE_MONEY",      // MP_CONCEPT_MVM_ENCOURAGE_MONEY
    "TLK_MVM_MONEY_PICKUP",         // MP_CONCEPT_MVM_MONEY_PICKUP
    "TLK_MVM_ENCOURAGE_UPGRADE",    // MP_CONCEPT_MVM_ENCOURAGE_UPGRADE
    "TLK_MVM_UPGRADE_COMPLETE",     // MP_CONCEPT_MVM_UPGRADE_COMPLETE
    "TLK_MVM_GIANT_CALLOUT",        // MP_CONCEPT_MVM_GIANT_CALLOUT
    "TLK_MVM_GIANT_HAS_BOMB",       // MP_CONCEPT_MVM_GIANT_HAS_BOMB
    "TLK_MVM_GIANT_KILLED",         // MP_CONCEPT_MVM_GIANT_KILLED
    "TLK_MVM_GIANT_KILLED_TEAMMATE",//MP_CONCEPT_MVM_GIANT_KILLED_TEAMMATE
    "TLK_MVM_SAPPED_ROBOT",         // MP_CONCEPT_MVM_SAPPED_ROBOT
    "TLK_MVM_CLOSE_CALL",           // MP_CONCEPT_MVM_CLOSE_CALL
    "TLK_MVM_TANK_CALLOUT",         // MP_CONCEPT_MVM_TANK_CALLOUT
    "TLK_MVM_TANK_DEAD",            // MP_CONCEPT_MVM_TANK_DEAD
    "TLK_MVM_TANK_DEPLOYING",       // MP_CONCEPT_MVM_TANK_DEPLOYING
    "TLK_MVM_ATTACK_THE_TANK",      // MP_CONCEPT_MVM_ATTACK_THE_TANK
    "TLK_MVM_TAUNT",                // MP_CONCEPT_MVM_TAUNT
    "TLK_MVM_WAVE_START",           // MP_CONCEPT_MVM_WAVE_START
    "TLK_MVM_WAVE_WIN",             // MP_CONCEPT_MVM_WAVE_WIN
    "TLK_MVM_WAVE_LOSE",            // MP_CONCEPT_MVM_WAVE_LOSE
    "TLK_MVM_DEPLOY_RAGE",          // MP_CONCEPT_MVM_DEPLOY_RAGE
    "TLK_MAGIC_BIGHEAD",            // MP_CONCEPT_MAGIC_BIGHEAD
    "TLK_MAGIC_SMALLHEAD",          // MP_CONCEPT_MAGIC_SMALLHEAD
    "TLK_MAGIC_GRAVITY",            // MP_CONCEPT_MAGIC_GRAVITY
    "TLK_MAGIC_GOOD",               // MP_CONCEPT_MAGIC_GOOD
    "TLK_MAGIC_DANCE",              // MP_CONCEPT_MAGIC_DANCE
    "HalloweenLongFall",            // MP_CONCEPT_HALLOWEEN_LONGFALL
    "TLK_TAUNT_GUITAR_RIFF",        // MP_CONCEPT_TAUNT_GUITAR_RIFF

    // TF Halloween 2013 shenanigans.
    "TLK_PLAYER_CAST_FIREBALL",             // MP_CONCEPT_PLAYER_CAST_FIREBALL
    "TLK_PLAYER_CAST_MERASMUS_ZAP",         // MP_CONCEPT_PLAYER_CAST_MERASMUS_ZAP
    "TLK_PLAYER_CAST_SELF_HEAL",            // MP_CONCEPT_PLAYER_CAST_SELF_HEAL
    "TLK_PLAYER_CAST_MIRV",                 // MP_CONCEPT_PLAYER_CAST_MIRV
    "TLK_PLAYER_CAST_BLAST_JUMP",           // MP_CONCEPT_PLAYER_CAST_BLAST_JUMP
    "TLK_PLAYER_CAST_STEALTH",              // MP_CONCEPT_PLAYER_CAST_STEALTH
    "TLK_PLAYER_CAST_TELEPORT",             // MP_CONCEPT_PLAYER_CAST_TELEPORT
    "TLK_PLAYER_CAST_LIGHTNING_BALL",       // MP_CONCEPT_PLAYER_CAST_LIGHTNING_BALL
    "TLK_PLAYER_CAST_MOVEMENT_BUFF",        // MP_CONCEPT_PLAYER_CAST_MOVEMENT_BUFF
    "TLK_PLAYER_CAST_MONOCULOUS",           // MP_CONCEPT_PLAYER_CAST_MONOCULOUS
    "TLK_PLAYER_CAST_METEOR_SWARM",         // MP_CONCEPT_PLAYER_CAST_METEOR_SWARM
    "TLK_PLAYER_CAST_SKELETON_HORDE",       // MP_CONCEPT_PLAYER_CAST_SKELETON_HORDE

    "TLK_PLAYER_SPELL_FIREBALL",            // MP_CONCEPT_PLAYER_SPELL_FIREBALL
    "TLK_PLAYER_SPELL_MERASMUS_ZAP",        // MP_CONCEPT_PLAYER_SPELL_MERASMUS_ZAP
    "TLK_PLAYER_SPELL_SELF_HEAL",           // MP_CONCEPT_PLAYER_SPELL_SELF_HEAL
    "TLK_PLAYER_SPELL_MIRV",                // MP_CONCEPT_PLAYER_SPELL_MIRV
    "TLK_PLAYER_SPELL_BLAST_JUMP",          // MP_CONCEPT_PLAYER_SPELL_BLAST_JUMP
    "TLK_PLAYER_SPELL_STEALTH",             // MP_CONCEPT_PLAYER_SPELL_STEALTH
    "TLK_PLAYER_SPELL_TELEPORT",            // MP_CONCEPT_PLAYER_SPELL_TELEPORT
    "TLK_PLAYER_SPELL_LIGHTNING_BALL",      // MP_CONCEPT_PLAYER_SPELL_LIGHTNING_BALL
    "TLK_PLAYER_SPELL_MOVEMENT_BUFF",       // MP_CONCEPT_PLAYER_SPELL_MOVEMENT_BUFF
    "TLK_PLAYER_SPELL_MONOCULOUS",          // MP_CONCEPT_PLAYER_SPELL_MONOCULOUS
    "TLK_PLAYER_SPELL_METEOR_SWARM",        // MP_CONCEPT_PLAYER_SPELL_METEOR_SWARM
    "TLK_PLAYER_SPELL_SKELETON_HORDE",      // MP_CONCEPT_PLAYER_SPELL_SKELETON_HORDE

    // Events.
    "TLK_PLAYER_SPELL_PICKUP_COMMON",       // MP_CONCEPT_PLAYER_SPELL_PICKUP_COMMON
    "TLK_PLAYER_SPELL_PICKUP_RARE",         // MP_CONCEPT_PLAYER_SPELL_PICKUP_RARE
    "TLK_PLAYER_HELLTOWER_MIDNIGHT",        // MP_CONCEPT_PLAYER_HELLTOWER_MIDNIGHT
    "TLK_PLAYER_SKELETON_KING_APPEAR",      // MP_CONCEPT_PLAYER_SKELETON_KING_APPEAR

    "TLK_MANNHATTAN_GATE_ATK",              // MP_CONCEPT_MANNHATTAN_GATE_ATK
    "TLK_MANNHATTAN_GATE_TAKE",             // MP_CONCEPT_MANNHATTAN_GATE_TAKE
    "TLK_RESURRECTED",                      // MP_CONCEPT_RESURRECTED
    "TLK_MVM_LOOT_COMMON",                  // MP_CONCEPT_MVM_LOOT_COMMON
    "TLK_MVM_LOOT_RARE",                    // MP_CONCEPT_MVM_LOOT_RARE
    "TLK_MVM_LOOT_ULTRARARE",               // MP_CONCEPT_MVM_LOOT_ULTRARARE
    "TLK_MEDIC_HEAL_SHIELD",                // MP_CONCEPT_MEDIC_HEAL_SHIELD
};
COMPILE_TIME_ASSERT( ARRAYSIZE( g_pszMPConcepts ) == MP_TF_CONCEPT_COUNT );

//-----------------------------------------------------------------------------
// Purpose:
//-----------------------------------------------------------------------------
int GetMPConceptIndexFromString( const char *pszConcept )
{
    for ( int iConcept = 0; iConcept < ARRAYSIZE( g_pszMPConcepts ); ++iConcept )
    {
        if ( !Q_stricmp( pszConcept, g_pszMPConcepts[iConcept] ) )
            return iConcept;
    }

    return MP_CONCEPT_NONE;
}