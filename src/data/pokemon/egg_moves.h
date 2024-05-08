#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(BULBASAUR,
        MOVE_SKULL_BASH,
        MOVE_CHARM,
        MOVE_PETAL_DANCE,
        MOVE_GRASS_WHISTLE,
        MOVE_CURSE,
        MOVE_INGRAIN,
        MOVE_LEAF_STORM,
        MOVE_POWER_WHIP,
        MOVE_ENDURE),

    egg_moves(CHARMANDER,
        MOVE_BELLY_DRUM,
        MOVE_ANCIENT_POWER,
        MOVE_BITE,
        MOVE_HEAT_WAVE,
        MOVE_BREAKING_SWIPE,
        MOVE_DRAGON_DANCE,
        MOVE_DRAGON_RUSH,
        MOVE_FLARE_BLITZ,
        MOVE_SCORCHING_SANDS,
        MOVE_SCALE_SHOT),

    egg_moves(SQUIRTLE,
        MOVE_MIRROR_COAT,
        MOVE_HAZE,
        MOVE_FLAIL,
        MOVE_REFRESH,
        MOVE_YAWN,
        MOVE_MUDDY_WATER,
        MOVE_FAKE_OUT,
        MOVE_AQUA_JET,
        MOVE_WATER_SPOUT,
        MOVE_AURA_SPHERE),

    egg_moves(PIDGEY,
        MOVE_HEAT_WAVE,
        MOVE_PURSUIT,
        MOVE_BRAVE_BIRD),

    egg_moves(EKANS,
        MOVE_PURSUIT,
        MOVE_SPITE,
        MOVE_AQUA_TAIL,
        MOVE_POISON_FANG,
        MOVE_SCARY_FACE,
        MOVE_POISON_TAIL,
        MOVE_DISABLE,
        MOVE_SWITCHEROO,
        MOVE_SUCKER_PUNCH,
        MOVE_SCALE_SHOT,
        MOVE_SNATCH),

    egg_moves(SANDSHREW,
        MOVE_FLAIL,
        MOVE_LEECH_LIFE,
        MOVE_RAPID_SPIN,
        MOVE_METAL_CLAW,
        MOVE_CRUSH_CLAW,
        MOVE_NIGHT_SLASH,
        MOVE_MUD_SHOT,
        MOVE_ENDURE,
        MOVE_HONE_CLAWS),

    egg_moves(NIDORAN_F,
        MOVE_SUPERSONIC,
        MOVE_DISABLE,
        MOVE_FOCUS_ENERGY,
        MOVE_CHARM,
        MOVE_FAIRY_TAIL,
        MOVE_PURSUIT,
        MOVE_SKULL_BASH,
        MOVE_POISON_TAIL,
        MOVE_ENDURE),

    egg_moves(NIDORAN_M,
        MOVE_DISABLE,
        MOVE_SUPERSONIC,
        MOVE_AQUA_TAIL,
        MOVE_CONFUSION,
        MOVE_SUCKER_PUNCH,
        MOVE_HEAD_SMASH,
        MOVE_POISON_TAIL,
        MOVE_ENDURE),

    egg_moves(VULPIX,
        MOVE_HYPNOSIS,
        MOVE_FLAIL,
        MOVE_SPITE,
        MOVE_DISABLE,
        MOVE_FLAME_CHARGE,
        MOVE_MEMENTO,
        MOVE_HEAT_WAVE,
        MOVE_FLARE_BLITZ,
        MOVE_EXTRASENSORY,
        MOVE_TAIL_SLAP,
        MOVE_SCORCHING_SANDS),

    egg_moves(ZUBAT,
        MOVE_QUICK_ATTACK,
        MOVE_HEAT_WAVE,
        MOVE_PURSUIT,
        MOVE_WHIRLWIND,
        MOVE_CURSE,
        MOVE_SUPER_FANG,
        MOVE_HYPNOSIS,
        MOVE_BRAVE_BIRD),

    egg_moves(ODDISH,
        MOVE_FLAIL,
        MOVE_SYNTHESIS,
        MOVE_CHARM,
        MOVE_INGRAIN,
        MOVE_TICKLE,
        MOVE_TEETER_DANCE,
        MOVE_STRENGTH_SAP),

    egg_moves(PARAS,
        MOVE_SCREECH,
        MOVE_PSYBEAM,
        MOVE_FLAIL,
        MOVE_SWEET_SCENT,
        MOVE_PURSUIT,
        MOVE_METAL_CLAW,
        MOVE_BUG_BITE,
        MOVE_CROSS_POISON,
        MOVE_AGILITY,
        MOVE_ENDURE,
        MOVE_LEECH_SEED,
        MOVE_FELL_STINGER,
        MOVE_CURSE),

    egg_moves(VENONAT,
        MOVE_SCREECH,
        MOVE_AGILITY,
        MOVE_MORNING_SUN,
        MOVE_BUG_BITE),

    egg_moves(DIGLETT,
        MOVE_SCREECH,
        MOVE_ANCIENT_POWER,
        MOVE_PURSUIT,
        MOVE_UPROAR,
        MOVE_MUD_BOMB,
        MOVE_REVERSAL,
        MOVE_HEADBUTT,
        MOVE_ENDURE,
        MOVE_FINAL_GAMBIT,
        MOVE_MEMENTO),

    egg_moves(MEOWTH,
        MOVE_SPITE,
        MOVE_CHARM,
        MOVE_HYPNOSIS,
        MOVE_ASSIST,
        MOVE_ODOR_SLEUTH,
        MOVE_FLAIL,
        MOVE_COVET,
        MOVE_PUNISHMENT,
        MOVE_TAIL_WHIP,
        MOVE_SNATCH),

    egg_moves(MANKEY,
        MOVE_MEDITATE,
        MOVE_REVERSAL,
        MOVE_REVENGE,
        MOVE_SMELLING_SALTS,
        MOVE_NIGHT_SLASH,
        MOVE_POWER_TRIP),

    egg_moves(GROWLITHE,
        MOVE_BODY_SLAM,
        MOVE_MAGIC_FANG,
        MOVE_THRASH,
        MOVE_FIRE_SPIN,
        MOVE_FLAME_CHARGE,
        MOVE_HEAT_WAVE,
        MOVE_JAW_LOCK,
        MOVE_DOUBLE_EDGE,
        MOVE_FLARE_BLITZ,
        MOVE_MORNING_SUN,
        MOVE_COVET,
        MOVE_DOUBLE_KICK,
        MOVE_BURN_UP),

    egg_moves(POLIWAG,
        MOVE_HAZE,
        MOVE_ICE_BALL,
        MOVE_MUD_SHOT,
        MOVE_REFRESH,
        MOVE_ENDEAVOR,
        MOVE_ENDURE,
        MOVE_WATER_PULSE),

    egg_moves(ABRA,
        MOVE_BARRIER,
        MOVE_PSYCHO_SHIFT),

    egg_moves(MACHOP,
        MOVE_MEDITATE,
        MOVE_ROLLING_KICK,
        MOVE_SMELLING_SALTS,
        MOVE_BULLET_PUNCH,
        MOVE_HEAVY_SLAM,
        MOVE_TICKLE),

    egg_moves(TENTACOOL,
        MOVE_AURORA_BEAM,
        MOVE_MIRROR_COAT,
        MOVE_RAPID_SPIN,
        MOVE_HAZE,
        MOVE_CONFUSE_RAY,
        MOVE_MUDDY_WATER,
        MOVE_TICKLE),

    egg_moves(GEODUDE,
        MOVE_MEGA_PUNCH,
        MOVE_HAMMER_ARM,
        MOVE_FLAIL,
        MOVE_CURSE,
        MOVE_ENDURE,
        MOVE_AUTOTOMIZE),

    egg_moves(PONYTA,
        MOVE_FLAME_WHEEL,
        MOVE_THRASH,
        MOVE_DOUBLE_KICK,
        MOVE_FAIRY_TAIL,
        MOVE_HYPNOSIS,
        MOVE_CHARM,
        MOVE_DOUBLE_EDGE,
        MOVE_MORNING_SUN,
        MOVE_LOW_KICK,
        MOVE_HIGH_HORSEPOWER),

    egg_moves(SLOWPOKE,
        MOVE_BELLY_DRUM,
        MOVE_TELEPORT,
        MOVE_CURSE,
        MOVE_FUTURE_SIGHT,
        MOVE_STOMP,
        MOVE_SNORE,
        MOVE_ME_FIRST,
        MOVE_AQUA_TAIL),

    egg_moves(MAGNEMITE,
        MOVE_STEEL_BEAM,
        MOVE_HEAVY_SLAM,
        MOVE_STORED_POWER),

    egg_moves(DODUO,
        MOVE_QUICK_ATTACK,
        MOVE_SUPERSONIC,
        MOVE_HAZE,
        MOVE_FLAIL,
        MOVE_ENDEAVOR,
        MOVE_MIRROR_MOVE,
        MOVE_BRAVE_BIRD),

    egg_moves(GRIMER,
        MOVE_HAZE,
        MOVE_MEAN_LOOK,
        MOVE_IMPRISON,
        MOVE_CURSE,
        MOVE_SHADOW_PUNCH,
        MOVE_SHADOW_SNEAK,
        MOVE_SCARY_FACE,
        MOVE_ACID_SPRAY,
        MOVE_POWER_UP_PUNCH),

    egg_moves(SHELLDER,
        MOVE_COLD_SNAP,
        MOVE_BARRIER,
        MOVE_RAPID_SPIN,
        MOVE_SCREECH,
        MOVE_AVALANCHE,
        MOVE_MUD_SHOT,
        MOVE_ROCK_BLAST,
        MOVE_WATER_PULSE,
        MOVE_TWINEEDLE),

    egg_moves(GASTLY,
        MOVE_PSYWAVE,
        MOVE_PERISH_SONG,
        MOVE_HAZE,
        MOVE_GRUDGE,
        MOVE_DISABLE,
        MOVE_SCARY_FACE,
        MOVE_CLEAR_SMOG,
        MOVE_SMOG),

    egg_moves(ONIX,
        MOVE_FLAIL,
        MOVE_BREAKING_SWIPE,
        MOVE_HEAD_SMASH,
        MOVE_DRAGON_TAIL,
        MOVE_ROLLOUT,
        MOVE_ROCK_BLAST),

	egg_moves(VOLTORB,
		MOVE_METAL_SOUND),

    egg_moves(EXEGGCUTE,
        MOVE_SYNTHESIS,
        MOVE_MOONLIGHT,
        MOVE_ANCIENT_POWER,
        MOVE_INGRAIN,
        MOVE_CURSE,
        MOVE_TELEPORT,
        MOVE_LUCKY_CHANT,
        MOVE_LEAF_STORM),

    egg_moves(CUBONE,
        MOVE_ANCIENT_POWER,
        MOVE_BELLY_DRUM,
        MOVE_SCREECH,
        MOVE_SKULL_BASH,
        MOVE_PERISH_SONG,
        MOVE_DOUBLE_KICK,
        MOVE_DETECT,
        MOVE_ENDURE,
        MOVE_CURSE),

    egg_moves(KOFFING,
        MOVE_SCREECH,
        MOVE_PSYWAVE,
        MOVE_PSYBEAM,
        MOVE_DESTINY_BOND,
        MOVE_PAIN_SPLIT,
        MOVE_STEAM_ERUPTION,
        MOVE_GRUDGE,
        MOVE_STRANGE_STEAM,
        MOVE_SPITE,
        MOVE_CURSE),

    egg_moves(TANGELA,
        MOVE_FLAIL,
        MOVE_CONFUSION,
        MOVE_MEGA_DRAIN,
        MOVE_LEECH_SEED,
        MOVE_ENDEAVOR,
        MOVE_LEAF_STORM,
        MOVE_WAKE_UP_SLAP),

    egg_moves(HORSEA,
        MOVE_FLAIL,
        MOVE_AURORA_BEAM,
        MOVE_OCTAZOOKA,
        MOVE_WHIRLPOOL,
        MOVE_DISABLE,
        MOVE_YAWN,
        MOVE_DRAGON_RAGE,
        MOVE_RAZOR_WIND,
        MOVE_MUDDY_WATER,
        MOVE_WATER_PULSE,
        MOVE_CLEAR_SMOG,
        MOVE_SCALE_SHOT),

    egg_moves(GOLDEEN,
        MOVE_PSYBEAM,
        MOVE_HAZE,
        MOVE_HYDRO_PUMP,
        MOVE_AQUA_TAIL,
        MOVE_BODY_SLAM,
        MOVE_MUD_SHOT,
        MOVE_SCALE_SHOT,
        MOVE_SKULL_BASH),
        
    egg_moves(MAGIKARP,
        MOVE_BOUNCE,
        MOVE_SCALE_SHOT),
        
    egg_moves(STARYU,
        MOVE_TELEPORT,
        MOVE_METEOR_BEAM),

    egg_moves(SCYTHER,
        MOVE_RAZOR_WIND,
        MOVE_REVERSAL,
        MOVE_ENDURE,
        MOVE_SILVER_WIND,
        MOVE_NIGHT_SLASH),

    egg_moves(PINSIR,
        MOVE_FLAIL,
        MOVE_QUICK_ATTACK,
        MOVE_ME_FIRST,
        MOVE_BUG_BITE),

    egg_moves(TAUROS,
        MOVE_CURSE,
        MOVE_ENDEAVOR),

    egg_moves(LAPRAS,
        MOVE_TICKLE,
        MOVE_REFRESH,
        MOVE_DRAGON_DANCE,
        MOVE_COLD_SNAP,
        MOVE_FROST_BREATH,
        MOVE_CURSE,
        MOVE_ANCIENT_POWER,
        MOVE_WHIRLPOOL,
        MOVE_FUTURE_SIGHT,
        MOVE_FREEZE_DRY),

    egg_moves(EEVEE,
        MOVE_CHARM,
        MOVE_FLAIL,
        MOVE_ENDURE,
        MOVE_CURSE,
        MOVE_DOUBLE_KICK,
        MOVE_TICKLE,
        MOVE_WISH,
        MOVE_YAWN,
        MOVE_FAIRY_TAIL,
        MOVE_BODY_SLAM,
        MOVE_JUMP_KICK,
        MOVE_FAKE_TEARS,
        MOVE_COVET,
        MOVE_DETECT,
        MOVE_STORED_POWER),

    egg_moves(OMANYTE,
        MOVE_AURORA_BEAM,
        MOVE_SLAM,
        MOVE_TICKLE,
        MOVE_SUPERSONIC,
        MOVE_HAZE,
        MOVE_METEOR_BEAM,
        MOVE_MUDDY_WATER,
        MOVE_WATER_PULSE,
        MOVE_WHIRLPOOL),

    egg_moves(KABUTO,
        MOVE_AURORA_BEAM,
        MOVE_RAPID_SPIN,
        MOVE_FLAIL,
        MOVE_CONFUSE_RAY,
        MOVE_MUD_SHOT,
        MOVE_ICY_WIND,
        MOVE_SCREECH,
        MOVE_TAKE_DOWN),

    egg_moves(AERODACTYL,
        MOVE_WHIRLWIND,
        MOVE_PURSUIT,
        MOVE_HEAT_WAVE,
        MOVE_AQUA_TAIL,
        MOVE_DRAGON_TAIL,
        MOVE_CURSE),

    egg_moves(MUNCHLAX,
        MOVE_CHARM,
        MOVE_DOUBLE_EDGE,
        MOVE_CURSE,
        MOVE_WHIRLWIND,
        MOVE_PURSUIT,
        MOVE_GASTRO_ACID,
        MOVE_SELF_DESTRUCT,
        MOVE_POWER_UP_PUNCH),

    egg_moves(DRATINI,
        MOVE_HAZE,
        MOVE_HEAT_WAVE,
        MOVE_BREAKING_SWIPE,
        MOVE_SUPERSONIC,
        MOVE_DRAGON_DANCE,
        MOVE_DRAGON_RUSH,
        MOVE_EXTREME_SPEED,
        MOVE_WATER_PULSE,
        MOVE_AQUA_JET,
        MOVE_DRAGON_PULSE,
        MOVE_SCALE_SHOT),

    egg_moves(CHIKORITA,
        MOVE_VINE_WHIP,
        MOVE_LEECH_SEED,
        MOVE_LEAF_BLADE,
        MOVE_ANCIENT_POWER,
        MOVE_FLAIL,
        MOVE_DRAGON_TAIL,
        MOVE_INGRAIN,
        MOVE_GRASS_WHISTLE,
        MOVE_LEAF_STORM,
        MOVE_AROMATHERAPY,
        MOVE_BODY_SLAM,
        MOVE_REFRESH,
        MOVE_OUTRAGE),

    egg_moves(CYNDAQUIL,
        MOVE_QUICK_ATTACK,
        MOVE_REVERSAL,
        MOVE_THRASH,
        MOVE_COVET,
        MOVE_CRUSH_CLAW,
        MOVE_DOUBLE_EDGE,
        MOVE_DOUBLE_KICK,
        MOVE_FLARE_BLITZ,
        MOVE_EXTRASENSORY,
        MOVE_SCORCHING_SANDS,
        MOVE_FLAME_BURST),

    egg_moves(TOTODILE,
        MOVE_THRASH,
        MOVE_MAGIC_FANG,
        MOVE_HYDRO_PUMP,
        MOVE_ANCIENT_POWER,
        MOVE_METAL_CLAW,
        MOVE_DRAGON_DANCE,
        MOVE_AQUA_JET,
        MOVE_FAKE_TEARS,
        MOVE_JAW_LOCK,
        MOVE_WATER_PULSE,
        MOVE_FLATTER),

    egg_moves(SPINARAK,
        MOVE_PSYBEAM,
        MOVE_DISABLE,
        MOVE_SONIC_BOOM,
        MOVE_PURSUIT,
        MOVE_TWINEEDLE,
        MOVE_ELECTROWEB,
        MOVE_NIGHT_SLASH,
        MOVE_MEGAHORN,
        MOVE_LUNGE),

    egg_moves(CHINCHOU,
        MOVE_FLAIL,
        MOVE_SCREECH,
        MOVE_PSYBEAM,
        MOVE_WHIRLPOOL,
        MOVE_AGILITY,
        MOVE_WATER_PULSE),

    egg_moves(PICHU,
        MOVE_REVERSAL,
        MOVE_DOUBLE_SLAP,
        MOVE_WISH,
        MOVE_CHARGE,
        MOVE_FAKE_OUT,
        MOVE_TICKLE,
        MOVE_FLAIL,
        MOVE_ENDURE,
        MOVE_LUCKY_CHANT,
        MOVE_DISARMING_VOICE),

    egg_moves(CLEFFA,
        MOVE_BELLY_DRUM,
        MOVE_FAIRY_TAIL,
        MOVE_TELEPORT,
        MOVE_WISH,
        MOVE_FAKE_TEARS,
        MOVE_COVET,
        MOVE_AROMATHERAPY,
        MOVE_STORED_POWER,
        MOVE_TICKLE,
        MOVE_METEOR_BEAM),

    egg_moves(IGGLYBUFF,
        MOVE_PERISH_SONG,
        MOVE_WISH,
        MOVE_TELEPORT,
        MOVE_FAKE_TEARS,
        MOVE_COVET,
        MOVE_PUNISHMENT),

    egg_moves(TOGEPI,
        MOVE_HEAT_WAVE,
        MOVE_MIRROR_MOVE,
        MOVE_FUTURE_SIGHT,
        MOVE_PSYCHO_SHIFT,
        MOVE_LUCKY_CHANT,
        MOVE_EXTRASENSORY,
        MOVE_STORED_POWER,
        MOVE_MORNING_SUN),

    egg_moves(NATU,
        MOVE_HAZE,
        MOVE_HEAT_WAVE,
        MOVE_DRILL_PECK,
        MOVE_QUICK_ATTACK,
        MOVE_FEATHER_DANCE,
        MOVE_REFRESH,
        MOVE_SUCKER_PUNCH,
        MOVE_SIMPLE_BEAM),

    egg_moves(MAREEP,
        MOVE_BODY_SLAM,
		MOVE_ELECTROWEB,
        MOVE_SCREECH,
        MOVE_ODOR_SLEUTH,
        MOVE_CHARGE,
        MOVE_FLATTER,
        MOVE_AGILITY,
        MOVE_EERIE_IMPULSE,
        MOVE_MAGNETIC_FLUX,
        MOVE_ION_DELUGE,
        MOVE_ZAP_CANNON),

    egg_moves(AZURILL,
        MOVE_SING,
        MOVE_REFRESH,
        MOVE_SLAM,
        MOVE_TICKLE,
        MOVE_FAKE_TEARS,
        MOVE_FAIRY_TAIL,
        MOVE_BODY_SLAM,
        MOVE_MUDDY_WATER,
        MOVE_COPYCAT,
        MOVE_ICE_BALL,
        MOVE_FUTURE_SIGHT,
        MOVE_BELLY_DRUM,
        MOVE_PERISH_SONG,
        MOVE_SUPERSONIC,
        MOVE_AQUA_JET,
        MOVE_CAMOUFLAGE),

    egg_moves(BONSLY,
        MOVE_SELF_DESTRUCT,
        MOVE_HEADBUTT,
        MOVE_ROLLOUT,
        MOVE_SAND_TOMB,
        MOVE_CURSE,
        MOVE_ENDURE),

    egg_moves(HOPPIP,
        MOVE_CONFUSION,
        MOVE_SWITCHEROO,
        MOVE_DOUBLE_EDGE,
        MOVE_AROMATHERAPY,
        MOVE_COTTON_GUARD,
        MOVE_ENDURE,
        MOVE_STRENGTH_SAP),

    egg_moves(YANMA,
        MOVE_WHIRLWIND,
        MOVE_REVERSAL,
        MOVE_LEECH_LIFE,
        MOVE_WING_ATTACK,
        MOVE_SILVER_WIND,
        MOVE_ANCIENT_POWER,
        MOVE_NIGHT_SLASH,
        MOVE_DRAGON_DANCE,
        MOVE_PURSUIT,
        MOVE_DOUBLE_EDGE),

    egg_moves(MURKROW,
        MOVE_WHIRLWIND,
        MOVE_DRILL_PECK,
        MOVE_MIRROR_MOVE,
        MOVE_WING_ATTACK,
        MOVE_CONFUSE_RAY,
        MOVE_FEATHER_DANCE,
        MOVE_PERISH_SONG,
        MOVE_HEAT_WAVE,
        MOVE_PSYCHO_SHIFT,
        MOVE_SCREECH,
        MOVE_BRAVE_BIRD,
        MOVE_FLATTER,
        MOVE_PUNISHMENT),

    egg_moves(MISDREAVUS,
        MOVE_SCREECH,
        MOVE_DESTINY_BOND,
        MOVE_IMPRISON,
        MOVE_SUCKER_PUNCH,
        MOVE_SHADOW_SNEAK,
        MOVE_CURSE,
        MOVE_PHANTOM_FORCE,
        MOVE_LUCKY_CHANT,
        MOVE_OMINOUS_WIND,
        MOVE_ME_FIRST),

    egg_moves(GIRAFARIG,
        MOVE_FUTURE_SIGHT,
        MOVE_WISH,
        MOVE_MAGIC_COAT,
        MOVE_DOUBLE_KICK,
        MOVE_MIRROR_COAT,
        MOVE_RAZOR_WIND,
        MOVE_MEAN_LOOK),

    egg_moves(PINECO,
        MOVE_PIN_MISSILE,
        MOVE_FLAIL,
        MOVE_SWIFT,
        MOVE_SAND_TOMB,
        MOVE_REVENGE,
        MOVE_DOUBLE_EDGE,
        MOVE_ENDURE),

    egg_moves(GLIGAR,
        MOVE_METAL_CLAW,
        MOVE_WING_ATTACK,
        MOVE_RAZOR_WIND,
        MOVE_SAND_TOMB,
        MOVE_AGILITY,
        MOVE_DOUBLE_EDGE,
        MOVE_NIGHT_SLASH,
        MOVE_CROSS_POISON,
        MOVE_POISON_TAIL),

    egg_moves(SNUBBULL,
        MOVE_FAIRY_TAIL,
        MOVE_SNORE,
        MOVE_SMELLING_SALTS,
        MOVE_DOUBLE_EDGE,
        MOVE_FAKE_TEARS),

    egg_moves(HERACROSS,
        MOVE_REVERSAL,
        MOVE_FLAIL,
        MOVE_REVENGE,
        MOVE_PURSUIT,
        MOVE_DOUBLE_EDGE,
        MOVE_MEGAHORN,
        MOVE_ROCK_BLAST),

    egg_moves(SNEASEL,
        MOVE_SPITE,
        MOVE_COLD_SNAP,
        MOVE_BITE,
        MOVE_CRUSH_CLAW,
        MOVE_FAKE_OUT,
        MOVE_PUNISHMENT,
        MOVE_PURSUIT,
        MOVE_LOW_KICK,
        MOVE_ASSIST,
        MOVE_ICICLE_CRASH,
        MOVE_THROAT_CHOP),

    egg_moves(SLUGMA,
        MOVE_ACID_ARMOR,
        MOVE_SCORCHING_SANDS,
        MOVE_HEAT_WAVE,
        MOVE_CURSE,
        MOVE_SMOKESCREEN,
        MOVE_MEMENTO,
        MOVE_ROLLOUT,
        MOVE_INFERNO),

    egg_moves(SWINUB,
        MOVE_BITE,
        MOVE_COLD_SNAP,
        MOVE_BODY_SLAM,
        MOVE_ANCIENT_POWER,
        MOVE_MUD_SHOT,
        MOVE_ICICLE_SPEAR,
        MOVE_DOUBLE_EDGE,
        MOVE_CURSE,
        MOVE_MUD_SHOT,
        MOVE_ICICLE_CRASH,
        MOVE_FREEZE_DRY),

    egg_moves(SKARMORY,
        MOVE_DRILL_PECK,
        MOVE_PURSUIT,
        MOVE_WHIRLWIND,
        MOVE_STEEL_BEAM,
        MOVE_CURSE,
        MOVE_BRAVE_BIRD,
        MOVE_ENDURE),

    egg_moves(HOUNDOUR,
        MOVE_FIRE_SPIN,
        MOVE_RAGE,
        MOVE_PURSUIT,
        MOVE_SPITE,
        MOVE_JAW_LOCK,
        MOVE_REVERSAL,
        MOVE_PUNISHMENT,
        MOVE_SUCKER_PUNCH,
        MOVE_DESTINY_BOND),

    egg_moves(PHANPY,
        MOVE_FOCUS_ENERGY,
        MOVE_BODY_SLAM,
        MOVE_ANCIENT_POWER,
        MOVE_SNORE,
        MOVE_ENDEAVOR,
        MOVE_ICE_SHARD,
        MOVE_HEAD_SMASH,
        MOVE_HEAVY_SLAM,
        MOVE_HIGH_HORSEPOWER),

    egg_moves(SMOOCHUM,
        MOVE_MEDITATE,
        MOVE_FAKE_OUT,
        MOVE_AURORA_VEIL,
        MOVE_TELEPORT,
        MOVE_WISH,
        MOVE_BOOMBURST,
        MOVE_WAKE_UP_SLAP),

    egg_moves(ELEKID,
        MOVE_KARATE_CHOP,
        MOVE_LOW_SWEEP,
        MOVE_BARRIER,
        MOVE_ROLLING_KICK,
        MOVE_MEDITATE,
        MOVE_DYNAMIC_PUNCH,
        MOVE_HAMMER_ARM),

    egg_moves(MAGBY,
        MOVE_KARATE_CHOP,
        MOVE_MEGA_PUNCH,
        MOVE_BARRIER,
        MOVE_SCREECH,
        MOVE_CROSS_CHOP,
        MOVE_MACH_PUNCH,
        MOVE_DYNAMIC_PUNCH,
        MOVE_FLARE_BLITZ,
        MOVE_BELLY_DRUM,
        MOVE_FOCUS_ENERGY,
        MOVE_SCORCHING_SANDS),

    egg_moves(MILTANK,
        MOVE_REVERSAL,
        MOVE_ENDURE,
        MOVE_CURSE,
        MOVE_DIZZY_PUNCH,
        MOVE_HAMMER_ARM,
        MOVE_DOUBLE_EDGE,
        MOVE_PUNISHMENT,
        MOVE_HEART_STAMP),

    egg_moves(LARVITAR,
        MOVE_PURSUIT,
        MOVE_STOMP,
        MOVE_FOCUS_ENERGY,
        MOVE_AQUA_TAIL,
        MOVE_ANCIENT_POWER,
        MOVE_DRAGON_DANCE,
        MOVE_AVALANCHE,
        MOVE_CURSE),

    egg_moves(TREECKO,
        MOVE_ENDEAVOR,
        MOVE_LEECH_SEED,
        MOVE_CRUSH_CLAW,
        MOVE_DOUBLE_KICK,
        MOVE_GRASS_WHISTLE,
        MOVE_SYNTHESIS,
        MOVE_LEAF_STORM,
        MOVE_RAZOR_WIND,
        MOVE_BULLET_SEED,
        MOVE_DUAL_CHOP),

    egg_moves(TORCHIC,
        MOVE_REVERSAL,
        MOVE_ENDURE,
        MOVE_BOUNCE,
        MOVE_SMELLING_SALTS,
        MOVE_CRUSH_CLAW,
        MOVE_AGILITY,
        MOVE_NIGHT_SLASH,
        MOVE_FEATHER_DANCE,
        MOVE_CURSE,
        MOVE_FLAME_BURST,
        MOVE_LOW_KICK),

    egg_moves(MUDKIP,
        MOVE_REFRESH,
        MOVE_UPROAR,
        MOVE_CURSE,
        MOVE_STOMP,
        MOVE_AVALANCHE,
        MOVE_ICE_BALL,
        MOVE_MIRROR_COAT,
        MOVE_ANCIENT_POWER,
        MOVE_WHIRLPOOL,
        MOVE_BITE,
        MOVE_DOUBLE_EDGE,
        MOVE_MUD_SHOT,
        MOVE_YAWN,
        MOVE_BARRIER),

    egg_moves(POOCHYENA,
        MOVE_POISON_FANG,
        MOVE_COVET,
        MOVE_LEER,
        MOVE_YAWN,
        MOVE_SUCKER_PUNCH,
        MOVE_ME_FIRST,
        MOVE_SUPER_FANG),

    egg_moves(ZIGZAGOON,
        MOVE_CHARM,
        MOVE_PURSUIT,
        MOVE_TICKLE,
        MOVE_TRICK,
        MOVE_STOMPING_TANTRUM,
        MOVE_SIMPLE_BEAM,
        MOVE_EXTREME_SPEED),

    egg_moves(WURMPLE,
        MOVE_STICKY_WEB),

    egg_moves(LOTAD,
        MOVE_SYNTHESIS,
        MOVE_SWEET_SCENT,
        MOVE_LEECH_SEED,
        MOVE_FLAIL,
        MOVE_WATER_GUN,
        MOVE_TICKLE,
        MOVE_TEETER_DANCE),

    egg_moves(SEEDOT,
        MOVE_LEECH_SEED,
        MOVE_QUICK_ATTACK,
        MOVE_RAZOR_WIND,
        MOVE_BULLET_SEED),

    egg_moves(TAILLOW,
        MOVE_PURSUIT,
        MOVE_SUPERSONIC,
        MOVE_REFRESH,
        MOVE_MIRROR_MOVE,
        MOVE_HEAT_WAVE,
        MOVE_RAGE,
        MOVE_WHIRLWIND,
        MOVE_BRAVE_BIRD,
        MOVE_BOOMBURST),

    egg_moves(WINGULL,
        MOVE_TWISTER,
        MOVE_AGILITY),

    egg_moves(RALTS,
        MOVE_DISABLE,
        MOVE_MYSTICAL_FIRE,
        MOVE_STORED_POWER,
        MOVE_MEAN_LOOK,
        MOVE_MEMENTO,
        MOVE_DESTINY_BOND,
        MOVE_GRUDGE,
        MOVE_SHADOW_SNEAK,
        MOVE_CONFUSE_RAY,
        MOVE_TRIPLE_AXEL),

    egg_moves(SURSKIT,
        MOVE_OMINOUS_WIND,
        MOVE_MUD_SHOT,
        MOVE_PSYBEAM,
        MOVE_STICKY_WEB,
        MOVE_BUG_BITE,
        MOVE_AQUA_JET,
        MOVE_ENDURE,
        MOVE_FELL_STINGER,
        MOVE_POWER_SPLIT,
        MOVE_LUNGE),

    egg_moves(SHROOMISH,
        MOVE_FAKE_TEARS,
        MOVE_CHARM,
        MOVE_WAKE_UP_SLAP,
        MOVE_BULLET_SEED),

    egg_moves(WHISMUR,
        MOVE_SNORE,
        MOVE_EXTRASENSORY,
        MOVE_SMELLING_SALTS,
        MOVE_SMOKESCREEN,
        MOVE_ENDEAVOR,
        MOVE_HAMMER_ARM,
        MOVE_FAKE_TEARS,
        MOVE_CIRCLE_THROW,
        MOVE_DISARMING_VOICE,
        MOVE_WHIRLWIND),

    egg_moves(MAKUHITA,
        MOVE_DETECT,
        MOVE_CROSS_CHOP,
        MOVE_REVENGE,
        MOVE_DYNAMIC_PUNCH,
        MOVE_WAKE_UP_SLAP,
        MOVE_BULLET_PUNCH),

    egg_moves(SKITTY,
        MOVE_UPROAR,
        MOVE_FAKE_TEARS,
        MOVE_WISH,
        MOVE_TICKLE,
        MOVE_SUCKER_PUNCH,
        MOVE_MUD_BOMB,
        MOVE_SIMPLE_BEAM,
        MOVE_STORED_POWER,
        MOVE_COSMIC_POWER),

    egg_moves(ARON,
        MOVE_ENDEAVOR,
        MOVE_BODY_SLAM,
        MOVE_AVALANCHE,
        MOVE_STEEL_BEAM,
        MOVE_STOMP,
        MOVE_AQUA_TAIL,
        MOVE_SMELLING_SALTS,
        MOVE_CURSE,
        MOVE_SCREECH,
        MOVE_DRAGON_RUSH,
        MOVE_HEAD_SMASH,
        MOVE_REVERSAL),

    egg_moves(MEDITITE,
        MOVE_FAKE_OUT,
        MOVE_DYNAMIC_PUNCH,
        MOVE_WATER_PULSE,
        MOVE_PSYCHO_CUT,
        MOVE_BULLET_PUNCH),

    egg_moves(ELECTRIKE,
        MOVE_HEADBUTT,
        MOVE_UPROAR,
        MOVE_JAW_LOCK,
        MOVE_CURSE,
        MOVE_SWIFT,
        MOVE_DISCHARGE,
        MOVE_SWITCHEROO,
        MOVE_ELECTRO_BALL,
        MOVE_FLAME_BURST,
        MOVE_EERIE_IMPULSE),

    egg_moves(VOLBEAT,
        MOVE_ASSIST,
        MOVE_SILVER_WIND,
        MOVE_TRICK,
        MOVE_DIZZY_PUNCH,
        MOVE_LUNGE),

    egg_moves(ILLUMISE,
        MOVE_SILVER_WIND,
        MOVE_ASSIST,
        MOVE_GROWTH,
        MOVE_LUNGE,
        MOVE_FAKE_TEARS,
        MOVE_CONFUSE_RAY,
        MOVE_AROMATHERAPY),

    egg_moves(BUDEW,
        MOVE_SYNTHESIS,
        MOVE_PIN_MISSILE,
        MOVE_COTTON_SPORE,
        MOVE_SLEEP_POWDER,
        MOVE_OMINOUS_WIND,
        MOVE_ACID_SPRAY,
        MOVE_SILVER_WIND,
        MOVE_LEAF_STORM,
        MOVE_EXTRASENSORY,
        MOVE_GRASS_WHISTLE,
        MOVE_BULLET_SEED,
        MOVE_WEATHER_BALL,
        MOVE_POWER_WHIP),

    egg_moves(CARVANHA,
        MOVE_HYDRO_PUMP,
        MOVE_DOUBLE_EDGE,
        MOVE_THRASH,
        MOVE_ANCIENT_POWER,
        MOVE_SCALE_SHOT,
        MOVE_DESTINY_BOND,
        MOVE_PSYCHIC_FANGS),

    egg_moves(WAILMER,
        MOVE_DOUBLE_EDGE,
        MOVE_THRASH,
        MOVE_SNORE,
        MOVE_CURSE,
        MOVE_AVALANCHE,
        MOVE_SELF_DESTRUCT,
        MOVE_TICKLE,
        MOVE_BODY_SLAM,
        MOVE_CLEAR_SMOG),

    egg_moves(NUMEL,
        MOVE_SCARY_FACE,
        MOVE_BODY_SLAM,
        MOVE_ROLLOUT,
        MOVE_STOMP,
        MOVE_YAWN,
        MOVE_ANCIENT_POWER,
        MOVE_MUD_BOMB,
        MOVE_HEAT_WAVE,
        MOVE_ENDURE,
        MOVE_GROWTH,
        MOVE_SCORCHING_SANDS,
        MOVE_HEAVY_SLAM),

    egg_moves(TORKOAL,
        MOVE_ERUPTION,
        MOVE_ENDURE,
        MOVE_RAZOR_SHELL,
        MOVE_YAWN,
		MOVE_ANCIENT_POWER,
        MOVE_FLAME_BURST,
        MOVE_CLEAR_SMOG,
        MOVE_SCORCHING_SANDS),

    egg_moves(LUNATONE,
        MOVE_ICY_WIND,
        MOVE_CHARGE_BEAM,
        MOVE_ANCIENT_POWER,
        MOVE_BODY_SLAM,
        MOVE_ROLLOUT,
        MOVE_MAGIC_COAT,
        MOVE_STORED_POWER,
        MOVE_PAIN_SPLIT,
        MOVE_MAGNET_RISE),

    egg_moves(SOLROCK,
        MOVE_SCORCHING_SANDS,
        MOVE_HEAT_WAVE,
        MOVE_ANCIENT_POWER,
        MOVE_BODY_SLAM,
        MOVE_ROLLOUT,
        MOVE_MAGIC_COAT,
        MOVE_POWER_TRIP,
        MOVE_PAIN_SPLIT,
        MOVE_MAGNET_RISE),

    egg_moves(SPOINK,
        MOVE_FUTURE_SIGHT,
        MOVE_SNORE,
        MOVE_BODY_SLAM,
        MOVE_EXTRASENSORY,
        MOVE_TRICK,
        MOVE_MIRROR_COAT,
        MOVE_WHIRLWIND,
        MOVE_LUCKY_CHANT,
        MOVE_ENDURE,
        MOVE_SIMPLE_BEAM),

    egg_moves(TRAPINCH,
        MOVE_FOCUS_ENERGY,
        MOVE_SCALE_SHOT,
        MOVE_QUICK_ATTACK,
        MOVE_FLAIL,
        MOVE_FIRST_IMPRESSION,
        MOVE_FURY_CUTTER,
        MOVE_MUD_SHOT,
        MOVE_ENDURE,
        MOVE_BUG_BITE,
        MOVE_SCORCHING_SANDS),

    egg_moves(CACNEA,
        MOVE_GRASS_WHISTLE,
        MOVE_ACID,
        MOVE_ACID_RAIN,
        MOVE_TEETER_DANCE,
        MOVE_DYNAMIC_PUNCH,
        MOVE_LOW_KICK,
        MOVE_REVENGE,
        MOVE_SMELLING_SALTS,
        MOVE_STOMPING_TANTRUM,
        MOVE_DISABLE,
        MOVE_SWITCHEROO,
        MOVE_FELL_STINGER,
        MOVE_POWER_UP_PUNCH),

    egg_moves(SWABLU,
        MOVE_AGILITY,
        MOVE_HAZE,
        MOVE_PURSUIT,
        MOVE_HEAT_WAVE,
        MOVE_RAGE,
        MOVE_PLUCK,
        MOVE_DRAGON_DANCE,
        MOVE_FEATHER_DANCE),

    egg_moves(ZANGOOSE,
        MOVE_FLAIL,
        MOVE_DOUBLE_KICK,
        MOVE_RAZOR_WIND,
        MOVE_CURSE,
        MOVE_FURY_SWIPES,
        MOVE_NIGHT_SLASH,
        MOVE_METAL_CLAW,
        MOVE_DISABLE,
        MOVE_FINAL_GAMBIT,
        MOVE_BELLY_DRUM),

    egg_moves(SEVIPER,
        MOVE_BODY_SLAM,
        MOVE_SCARY_FACE,
        MOVE_NIGHT_SLASH,
        MOVE_SWITCHEROO,
        MOVE_PUNISHMENT,
        MOVE_FINAL_GAMBIT),

    egg_moves(BARBOACH,
        MOVE_THRASH,
        MOVE_WHIRLPOOL,
        MOVE_SPARK,
        MOVE_HYDRO_PUMP,
        MOVE_FLAIL,
        MOVE_DRAGON_DANCE,
        MOVE_MUD_SHOT,
        MOVE_MUDDY_WATER),

    egg_moves(BALTOY,
        MOVE_SCORCHING_SANDS,
        MOVE_PSYCH_UP,
        MOVE_MAGIC_COAT,
        MOVE_TRANSFORM),

    egg_moves(CORPHISH,
        MOVE_ENDEAVOR,
        MOVE_BODY_SLAM,
        MOVE_ANCIENT_POWER,
        MOVE_METAL_CLAW,
        MOVE_DRAGON_DANCE,
        MOVE_TRUMP_CARD,
        MOVE_DOUBLE_EDGE,
        MOVE_AQUA_JET,
        MOVE_SWITCHEROO),
        
    egg_moves(LILEEP,
        MOVE_BARRIER,
        MOVE_HYDRO_PUMP,
        MOVE_RECOVER,
        MOVE_MIRROR_COAT,
        MOVE_TICKLE,
        MOVE_CURSE,
        MOVE_MEGA_DRAIN,
        MOVE_ENDURE,
        MOVE_METEOR_BEAM),

    egg_moves(ANORITH,
        MOVE_RAPID_SPIN,
        MOVE_SCREECH,
        MOVE_CROSS_POISON,
        MOVE_LEECH_LIFE,
        MOVE_CURSE,
        MOVE_WATER_PULSE,
        MOVE_AQUA_JET),

    egg_moves(FEEBAS,
        MOVE_MIRROR_COAT,
        MOVE_SCALE_SHOT,
        MOVE_HYPNOSIS,
        MOVE_CONFUSE_RAY,
        MOVE_DRAGON_DANCE,
        MOVE_HAZE,
        MOVE_TICKLE,
        MOVE_BREAKING_SWIPE),

    egg_moves(KECLEON,
        MOVE_DISABLE,
        MOVE_MAGIC_COAT,
        MOVE_TRICK,
        MOVE_FAKE_OUT,
        MOVE_DIZZY_PUNCH,
        MOVE_RECOVER,
        MOVE_SNATCH,
        MOVE_POWER_UP_PUNCH),

    egg_moves(SHUPPET,
        MOVE_DISABLE,
        MOVE_DESTINY_BOND,
        MOVE_IMPRISON,
        MOVE_PAIN_SPLIT,
        MOVE_PURSUIT,
        MOVE_SHADOW_SNEAK,
        MOVE_LEECH_LIFE,
        MOVE_CONFUSE_RAY,
        MOVE_OMINOUS_WIND),

    egg_moves(DUSKULL,
        MOVE_IMPRISON,
        MOVE_ICY_WIND,
        MOVE_COLD_SNAP,
        MOVE_DESTINY_BOND,
        MOVE_PAIN_SPLIT,
        MOVE_GRUDGE,
        MOVE_MEMENTO,
        MOVE_OMINOUS_WIND,
        MOVE_LEECH_LIFE,
        MOVE_HAZE),

    egg_moves(ABSOL,
        MOVE_DOUBLE_EDGE,
        MOVE_MAGIC_COAT,
        MOVE_CURSE,
        MOVE_MEAN_LOOK,
        MOVE_PUNISHMENT,
        MOVE_SUCKER_PUNCH,
        MOVE_ME_FIRST,
        MOVE_MEGAHORN,
        MOVE_PERISH_SONG),

    egg_moves(SNORUNT,
        MOVE_ROLLOUT,
        MOVE_ICE_BALL,
        MOVE_DISABLE,
        MOVE_AVALANCHE,
        MOVE_WEATHER_BALL,
        MOVE_FAKE_TEARS,
        MOVE_SWITCHEROO),

    egg_moves(SPHEAL,
        MOVE_YAWN,
        MOVE_CURSE,
        MOVE_AVALANCHE,
        MOVE_FROST_BREATH,
        MOVE_SNORE,
        MOVE_ROLLOUT,
        MOVE_WATER_PULSE,
        MOVE_BELLY_DRUM),

    egg_moves(CLAMPERL,
        MOVE_REFRESH,
        MOVE_BODY_SLAM,
        MOVE_SUPERSONIC,
        MOVE_BARRIER,
        MOVE_CONFUSE_RAY,
        MOVE_MUDDY_WATER,
        MOVE_WATER_PULSE,
        MOVE_ENDURE),

    egg_moves(RELICANTH,
        MOVE_MAGNITUDE,
        MOVE_SKULL_BASH,
        MOVE_SCALE_SHOT,
        MOVE_AQUA_TAIL,
        MOVE_SNORE,
        MOVE_MUDDY_WATER,
        MOVE_MUD_SHOT),

    egg_moves(BAGON,
        MOVE_HYDRO_PUMP,
        MOVE_THRASH,
        MOVE_DRAGON_RAGE,
        MOVE_TWISTER,
        MOVE_DRAGON_DANCE,
        MOVE_DRAGON_RUSH,
        MOVE_ENDURE,
        MOVE_DRAGON_PULSE),

    egg_moves(LATIAS,
        MOVE_CHARGE_BEAM,
        MOVE_MAGIC_COAT,
        MOVE_TRICK,
        MOVE_SCALE_SHOT),

    egg_moves(LATIOS,
        MOVE_CHARGE_BEAM,
        MOVE_MAGIC_COAT,
        MOVE_TRICK,
        MOVE_SCALE_SHOT),

    egg_moves(RAYQUAZA,
        MOVE_SCALE_SHOT),
        
    egg_moves(TURTWIG,
        MOVE_GROWTH,
        MOVE_TICKLE,
        MOVE_HIGH_HORSEPOWER,
        MOVE_BODY_SLAM,
        MOVE_DOUBLE_EDGE,
        MOVE_SAND_TOMB,
        MOVE_THRASH,
        MOVE_HEAVY_SLAM),

    egg_moves(PIPLUP,
        MOVE_SUPERSONIC,
        MOVE_YAWN,
        MOVE_SNORE,
        MOVE_FLAIL,
        MOVE_AGILITY,
        MOVE_WHIRLPOOL,
        MOVE_HYDRO_PUMP,
        MOVE_BRAVE_BIRD,
        MOVE_FEATHER_DANCE,
        MOVE_ICY_WIND,
        MOVE_POWER_TRIP),

    egg_moves(STARLY,
        MOVE_HEAT_WAVE,
        MOVE_FEATHER_DANCE,
        MOVE_PURSUIT,
        MOVE_DOUBLE_EDGE,
        MOVE_UPROAR,
        MOVE_DETECT,
        MOVE_REVENGE,
        MOVE_MIRROR_MOVE),

    egg_moves(DRIFLOON,
        MOVE_MEMENTO,
        MOVE_BODY_SLAM,
        MOVE_DESTINY_BOND,
        MOVE_DISABLE,
        MOVE_HAZE,
        MOVE_HYPNOSIS,
        MOVE_WEATHER_BALL,
        MOVE_CLEAR_SMOG),

    egg_moves(STUNKY,
        MOVE_PURSUIT,
        MOVE_LEER,
        MOVE_SMOG,
        MOVE_DOUBLE_EDGE,
        MOVE_SCARY_FACE,
        MOVE_PUNISHMENT,
        MOVE_HAZE,
        MOVE_FLAME_BURST),

    egg_moves(HAPPINY,
        MOVE_AROMATHERAPY,
        MOVE_TELEPORT,
        MOVE_MUD_BOMB,
        MOVE_ENDURE),

    egg_moves(GIBLE,
        MOVE_TWISTER,
        MOVE_SCARY_FACE,
        MOVE_DOUBLE_EDGE,
        MOVE_THRASH,
        MOVE_METAL_CLAW,
        MOVE_SAND_TOMB,
        MOVE_BODY_SLAM,
        MOVE_SCALE_SHOT,
        MOVE_DRAGON_RAGE,
        MOVE_DRAGON_PULSE,
        MOVE_MUD_SHOT),

    egg_moves(RIOLU,
        MOVE_CROSS_CHOP,
        MOVE_DETECT,
        MOVE_BITE,
        MOVE_FINAL_GAMBIT,
        MOVE_POWER_UP_PUNCH,
        MOVE_SKY_UPPERCUT,
        MOVE_HIGH_JUMP_KICK,
        MOVE_AGILITY,
        MOVE_VACUUM_WAVE,
        MOVE_LOW_KICK,
        MOVE_BLAZE_KICK,
        MOVE_CIRCLE_THROW,
        MOVE_METEOR_MASH),

    egg_moves(HIPPOPOTAS,
        MOVE_CURSE,
        MOVE_SLACK_OFF,
        MOVE_HIGH_HORSEPOWER,
        MOVE_BODY_SLAM,
        MOVE_SAND_TOMB,
        MOVE_REVENGE,
        MOVE_WHIRLWIND),

    egg_moves(CROAGUNK,
        MOVE_ME_FIRST,
        MOVE_DYNAMIC_PUNCH,
        MOVE_HEADBUTT,
        MOVE_VACUUM_WAVE,
        MOVE_MEDITATE,
        MOVE_FAKE_OUT,
        MOVE_WAKE_UP_SLAP,
        MOVE_SMELLING_SALTS,
        MOVE_CROSS_CHOP,
        MOVE_BULLET_PUNCH),

    egg_moves(SNOVER,
        MOVE_LEECH_SEED,
        MOVE_AVALANCHE,
        MOVE_SWAGGER,
        MOVE_FROST_BREATH,
        MOVE_GROWTH,
        MOVE_DOUBLE_EDGE,
        MOVE_ICE_HAMMER,
        MOVE_STOMP,
        MOVE_SKULL_BASH,
        MOVE_BULLET_SEED),

    egg_moves(TEPIG,
        MOVE_COVET,
        MOVE_BODY_SLAM,
        MOVE_THRASH,
        MOVE_MAGNITUDE,
        MOVE_CURSE,
        MOVE_ENDEAVOR,
        MOVE_YAWN,
        MOVE_HEAVY_SLAM,
        MOVE_SUCKER_PUNCH,
        MOVE_DOUBLE_EDGE,
        MOVE_BURN_UP),

    egg_moves(BRONZOR,
        MOVE_ANCIENT_POWER,
        MOVE_STEEL_BEAM,
        MOVE_METEOR_BEAM),

    egg_moves(ROGGENROLA,
        MOVE_MAGNITUDE,
        MOVE_METEOR_BEAM,
        MOVE_CURSE,
        MOVE_AUTOTOMIZE,
        MOVE_ROCK_TOMB,
        MOVE_HEAVY_SLAM),

    egg_moves(DRILBUR,
        MOVE_RAPID_SPIN,
        MOVE_CRUSH_CLAW,
        MOVE_METAL_SOUND,
        MOVE_SUBMISSION,
        MOVE_SKULL_BASH),

    egg_moves(VENIPEDE,
        MOVE_TWINEEDLE,
        MOVE_PIN_MISSILE,
        MOVE_AQUA_TAIL,
        MOVE_TAKE_DOWN),

    egg_moves(COTTONEE,
        MOVE_TICKLE,
        MOVE_FAKE_TEARS,
        MOVE_GRASS_WHISTLE,
        MOVE_MEMENTO,
        MOVE_SWITCHEROO),

    egg_moves(ROTOM,
        MOVE_COLD_SNAP),

    egg_moves(SANDILE,
        MOVE_DOUBLE_EDGE,
        MOVE_SCALE_SHOT,
        MOVE_PURSUIT,
        MOVE_UPROAR,
		MOVE_AQUA_TAIL,
        MOVE_FOCUS_ENERGY,
        MOVE_MEAN_LOOK,
        MOVE_ME_FIRST,
        MOVE_POWER_TRIP),

    egg_moves(FRILLISH,
        MOVE_ACID_ARMOR,
        MOVE_CONFUSE_RAY,
        MOVE_PAIN_SPLIT,
        MOVE_RECOVER,
        MOVE_STRENGTH_SAP),

    egg_moves(JOLTIK,
        MOVE_PIN_MISSILE,
        MOVE_POISON_STING,
        MOVE_CROSS_POISON,
        MOVE_PURSUIT,
        MOVE_DISABLE,
        MOVE_CAMOUFLAGE,
        MOVE_LUNGE),

    egg_moves(FERROSEED,
        MOVE_BULLET_SEED,
        MOVE_LEECH_SEED,
        MOVE_STEEL_BEAM,
        MOVE_ACID_SPRAY),

    egg_moves(LITWICK,
        MOVE_ACID_ARMOR,
        MOVE_HEAT_WAVE,
        MOVE_HAZE,
        MOVE_ENDURE,
        MOVE_ACID,
        MOVE_ACID_RAIN,
        MOVE_CLEAR_SMOG,
        MOVE_POWER_SPLIT),

    egg_moves(GOLETT,
        MOVE_HIGH_HORSEPOWER,
        MOVE_BULLDOZE,
        MOVE_LOW_SWEEP,
        MOVE_HEAT_CRASH),

    egg_moves(DEINO,
        MOVE_SCALE_SHOT,
        MOVE_SCREECH,
        MOVE_HEAD_SMASH,
        MOVE_DRAGON_DANCE),

    egg_moves(LARVESTA,
        MOVE_STRING_SHOT,
        MOVE_ENDURE,
        MOVE_MORNING_SUN,
        MOVE_MAGNET_RISE),

    egg_moves(FLETCHLING,
        MOVE_HEAT_WAVE,
        MOVE_SNATCH),

    egg_moves(HONEDGE,
        MOVE_METAL_SOUND,
        MOVE_SHADOW_SNEAK,
        MOVE_STEEL_BEAM,
        MOVE_DESTINY_BOND),

    egg_moves(INKAY,
        MOVE_SIMPLE_BEAM,
        MOVE_POWER_SPLIT,
        MOVE_CAMOUFLAGE,
		MOVE_DISABLE,
        MOVE_FLATTER,
        MOVE_REVERSAL,
        MOVE_DESTINY_BOND),

    egg_moves(TYRUNT,
        MOVE_DRAGON_DANCE,
        MOVE_POISON_FANG,
        MOVE_OUTRAGE,
        MOVE_SCALE_SHOT,
        MOVE_CURSE),

    egg_moves(AMAURA,
        MOVE_HAZE,
        MOVE_BARRIER,
        MOVE_DRAGON_TAIL,
        MOVE_MIRROR_COAT,
        MOVE_MAGNET_RISE,
        MOVE_SCALE_SHOT,
        MOVE_OUTRAGE,
        MOVE_DISCHARGE),

    egg_moves(GOOMY,
        MOVE_ACID_ARMOR,
        MOVE_ACID_RAIN,
        MOVE_CURSE,
        MOVE_SNORE,
        MOVE_WATER_PULSE,
        MOVE_POISON_TAIL,
        MOVE_ENDURE),

    egg_moves(PHANTUMP,
        MOVE_GRUDGE,
        MOVE_IMPRISON,
        MOVE_DISABLE,
        MOVE_POWER_UP_PUNCH),

    egg_moves(TINKATINK,
        MOVE_STEEL_BEAM,
        MOVE_ENDEAVOR,
        MOVE_ICE_HAMMER),

    EGG_MOVES_TERMINATOR
};
