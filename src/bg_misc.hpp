﻿#pragma once
#include "cvar.hpp"
#include "player.hpp"


enum EBGEvent
{
    EV_NONE = 0,
    EV_FOLIAGE_SOUND,
    EV_STOP_WEAPON_SOUND,
    EV_SOUND_ALIAS,
    EV_SOUND_ALIAS_AS_MASTER,
    EV_STOPSOUNDS,
    EV_STANCE_FORCE_STAND,
    EV_STANCE_FORCE_CROUCH,
    EV_STANCE_FORCE_PRONE,
    EV_ITEM_PICKUP,
    EV_AMMO_PICKUP,
    EV_NOAMMO,
    EV_EMPTYCLIP,
    EV_EMPTY_OFFHAND,
    EV_RESET_ADS,
    EV_RELOAD,
    EV_RELOAD_FROM_EMPTY,
    EV_RELOAD_START,
    EV_RELOAD_END,
    EV_RELOAD_START_NOTIFY,
    EV_RELOAD_ADDAMMO,
    EV_RAISE_WEAPON,
    EV_FIRST_RAISE_WEAPON,
    EV_PUTAWAY_WEAPON,
    EV_WEAPON_ALT,
    EV_PULLBACK_WEAPON,
    EV_FIRE_WEAPON,
    EV_FIRE_WEAPON_LASTSHOT,
    EV_RECHAMBER_WEAPON,
    EV_EJECT_BRASS,
    EV_MELEE_SWIPE,
    EV_FIRE_MELEE,
    EV_PREP_OFFHAND,
    EV_USE_OFFHAND,
    EV_SWITCH_OFFHAND,
    EV_MELEE_HIT,
    EV_MELEE_MISS,
    EV_MELEE_BLOOD,
    EV_FIRE_WEAPON_MG42,
    EV_FIRE_QUADBARREL_1,
    EV_FIRE_QUADBARREL_2,
    EV_BULLET_HIT,
    EV_BULLET_HIT_CLIENT_SMALL,
    EV_BULLET_HIT_CLIENT_LARGE,
    EV_GRENADE_BOUNCE,
    EV_GRENADE_EXPLODE,
    EV_ROCKET_EXPLODE,
    EV_ROCKET_EXPLODE_NOMARKS,
    EV_FLASHBANG_EXPLODE,
    EV_CUSTOM_EXPLODE,
    EV_CUSTOM_EXPLODE_NOMARKS,
    EV_CHANGE_TO_DUD,
    EV_DUD_EXPLODE,
    EV_DUD_IMPACT,
    EV_BULLET,
    EV_PLAY_FX,
    EV_PLAY_FX_ON_TAG,
    EV_PHYS_EXPLOSION_SPHERE,
    EV_PHYS_EXPLOSION_CYLINDER,
    EV_PHYS_EXPLOSION_JOLT,
    EV_PHYS_JITTER,
    EV_EARTHQUAKE,
    EV_GRENADE_SUICIDE,
    EV_DETONATE,
    EV_NIGHTVISION_WEAR,
    EV_NIGHTVISION_REMOVE,
    EV_OBITUARY,
    EV_NO_FRAG_GRENADE_HINT,
    EV_NO_SPECIAL_GRENADE_HINT,
    EV_TARGET_TOO_CLOSE_HINT,
    EV_TARGET_NOT_ENOUGH_CLEARANCE,
    EV_LOCKON_REQUIRED_HINT,
    EV_FOOTSTEP_SPRINT,
    EV_FOOTSTEP_RUN,
    EV_FOOTSTEP_WALK,
    EV_FOOTSTEP_PRONE,
    EV_JUMP,
    EV_LANDING_DEFAULT,
    EV_LANDING_BARK,
    EV_LANDING_BRICK,
    EV_LANDING_CARPET,
    EV_LANDING_CLOTH,
    EV_LANDING_CONCRETE,
    EV_LANDING_DIRT,
    EV_LANDING_FLESH,
    EV_LANDING_FOLIAGE,
    EV_LANDING_GLASS,
    EV_LANDING_GRASS,
    EV_LANDING_GRAVEL,
    EV_LANDING_ICE,
    EV_LANDING_METAL,
    EV_LANDING_MUD,
    EV_LANDING_PAPER,
    EV_LANDING_PLASTER,
    EV_LANDING_ROCK,
    EV_LANDING_SAND,
    EV_LANDING_SNOW,
    EV_LANDING_WATER,
    EV_LANDING_WOOD,
    EV_LANDING_ASPHALT,
    EV_LANDING_CERAMIC,
    EV_LANDING_PLASTIC,
    EV_LANDING_RUBBER,
    EV_LANDING_CUSHION,
    EV_LANDING_FRUIT,
    EV_LANDING_PAINTEDMETAL,
    EV_LANDING_PAIN_DEFAULT,
    EV_LANDING_PAIN_BARK,
    EV_LANDING_PAIN_BRICK,
    EV_LANDING_PAIN_CARPET,
    EV_LANDING_PAIN_CLOTH,
    EV_LANDING_PAIN_CONCRETE,
    EV_LANDING_PAIN_DIRT,
    EV_LANDING_PAIN_FLESH,
    EV_LANDING_PAIN_FOLIAGE,
    EV_LANDING_PAIN_GLASS,
    EV_LANDING_PAIN_GRASS,
    EV_LANDING_PAIN_GRAVEL,
    EV_LANDING_PAIN_ICE,
    EV_LANDING_PAIN_METAL,
    EV_LANDING_PAIN_MUD,
    EV_LANDING_PAIN_PAPER,
    EV_LANDING_PAIN_PLASTER,
    EV_LANDING_PAIN_ROCK,
    EV_LANDING_PAIN_SAND,
    EV_LANDING_PAIN_SNOW,
    EV_LANDING_PAIN_WATER,
    EV_LANDING_PAIN_WOOD,
    EV_LANDING_PAIN_ASPHALT,
    EV_LANDING_PAIN_CERAMIC,
    EV_LANDING_PAIN_PLASTIC,
    EV_LANDING_PAIN_RUBBER,
    EV_LANDING_PAIN_CUSHION,
    EV_LANDING_PAIN_FRUIT,
    EV_LANDING_PAIN_PAINTEDMETAL
};

extern "C"
{
    extern cvar_t* player_meleeChargeFriction;
    extern cvar_t* stopspeed;
    extern cvar_t* friction;
    extern cvar_t* bg_fallDamageMaxHeight;
    extern cvar_t* bg_fallDamageMinHeight;
    extern cvar_t* player_sprintRechargePause;
    extern cvar_t* player_sprintForwardMinimum;
    extern cvar_t* player_sprintMinTime;
    extern cvar_t* player_moveThreshhold;
    extern cvar_t* player_strafeAnimCosAngle;
    extern cvar_t* player_dmgtimer_stumbleTime;
    extern cvar_t* player_strafeSpeedScale;
    extern cvar_t* player_sprintCameraBob;
    extern cvar_t* player_footstepsThreshhold;
    extern cvar_t* player_dmgtimer_flinchTime;
    extern cvar_t* player_meleeRange;
    extern cvar_t* bg_legYawTolerance;
    extern cvar_t* bg_swingSpeed;
    extern cvar_t* player_lean_rotate_crouch_left;
    extern cvar_t* player_lean_rotate_crouch_right;
    extern cvar_t* player_lean_rotate_left;
    extern cvar_t* player_lean_rotate_right;
    extern cvar_t* player_lean_shift_crouch_left;
    extern cvar_t* player_lean_shift_crouch_right;
    extern cvar_t* player_lean_shift_left;
    extern cvar_t* player_lean_shift_right;
    extern cvar_t* player_move_factor_on_torso;
    extern cvar_t* bg_aimSpreadMoveSpeedThreshold;
    extern cvar_t* bg_bobAmplitudeDucked;
    extern cvar_t* bg_bobAmplitudeProne;
    extern cvar_t* bg_bobAmplitudeSprinting;
    extern cvar_t* bg_bobAmplitudeStanding;
    extern cvar_t* bg_bobMax;
    extern cvar_t* bg_foliagesnd_fastinterval;
    extern cvar_t* bg_foliagesnd_maxspeed;
    extern cvar_t* bg_foliagesnd_minspeed;
    extern cvar_t* bg_foliagesnd_resetinterval;
    extern cvar_t* bg_foliagesnd_slowinterval;
    extern cvar_t* bg_ladder_yawcap;
    extern cvar_t* bg_maxGrenadeIndicatorSpeed;
    extern cvar_t* bg_prone_yawcap;
    extern cvar_t* bg_shock_lookControl_fadeTime;
    extern cvar_t* bg_shock_lookControl_maxpitchspeed;
    extern cvar_t* bg_shock_lookControl_maxyawspeed;
    extern cvar_t* bg_shock_lookControl_mousesensitivityscale;
    extern cvar_t* bg_shock_movement;
    extern cvar_t* bg_shock_screenBlurBlendFadeTime;
    extern cvar_t* bg_shock_screenBlurBlendTime;
    extern cvar_t* bg_shock_screenFlashShotFadeTime;
    extern cvar_t* bg_shock_screenFlashWhiteFadeTime;
    extern cvar_t* bg_shock_sound;
    extern cvar_t* bg_shock_soundDryLevel;
    extern cvar_t* bg_shock_soundEnd;
    extern cvar_t* bg_shock_soundEndAbort;
    extern cvar_t* bg_shock_soundFadeInTime;
    extern cvar_t* bg_shock_soundFadeOutTime;
    extern cvar_t* bg_shock_soundLoop;
    extern cvar_t* bg_shock_soundLoopEndDelay;
    extern cvar_t* bg_shock_soundLoopFadeTime;
    extern cvar_t* bg_shock_soundLoopSilent;
    extern cvar_t* bg_shock_soundModEndDelay;
    extern cvar_t* bg_shock_soundRoomType;
    extern cvar_t* bg_shock_soundWetLevel;
    extern cvar_t* bg_shock_viewKickFadeTime;
    extern cvar_t* bg_shock_viewKickPeriod;
    extern cvar_t* bg_shock_viewKickRadius;
    extern cvar_t* bg_viewKickMax;
    extern cvar_t* bg_viewKickMin;
    extern cvar_t* bg_viewKickRandom;
    extern cvar_t* bg_viewKickScale;
    extern cvar_t* bullet_penetrationMinFxDist;
    extern cvar_t* inertiaAngle;
    extern cvar_t* inertiaDebug;
    extern cvar_t* inertiaMax;
    extern cvar_t* player_adsExitDelay;
    extern cvar_t* player_backSpeedScale;
    extern cvar_t* player_breath_fire_delay;
    extern cvar_t* player_breath_gasp_lerp;
    extern cvar_t* player_breath_gasp_scale;
    extern cvar_t* player_breath_gasp_time;
    extern cvar_t* player_breath_hold_lerp;
    extern cvar_t* player_breath_hold_time;
    extern cvar_t* player_breath_snd_delay;
    extern cvar_t* player_breath_snd_lerp;
    extern cvar_t* player_burstFireCooldown;
    extern cvar_t* player_debugHealth;
    extern cvar_t* player_dmgtimer_maxTime;
    extern cvar_t* player_dmgtimer_minScale;
    extern cvar_t* player_dmgtimer_timePerPoint;
    extern cvar_t* player_meleeHeight;
    extern cvar_t* player_meleeWidth;
    extern cvar_t* player_scopeExitOnDamage;
    extern cvar_t* player_spectateSpeedScale;
    extern cvar_t* player_sprintSpeedScale;
    extern cvar_t* player_sprintStrafeSpeedScale;
    extern cvar_t* player_sprintTime;
    extern cvar_t* player_sustainAmmo;
    extern cvar_t* player_turnAnims;
    extern cvar_t* player_view_pitch_down;
    extern cvar_t* player_view_pitch_up;

    void CDECL BG_AddPredictableEventToPlayerstate(EBGEvent newEvent, unsigned int eventParm, playerState_s *ps);
    void CDECL BG_EvaluateTrajectory(trajectory_t *tr, int atTime, float *result);
}
