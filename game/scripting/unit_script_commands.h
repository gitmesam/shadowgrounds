// Copyright 2002-2004 Frozenbyte Ltd.

// from 0
// NOTE, 0 reserved for invalidGSCommand, but base set to 0 instead of 1 to get last digit match with id numbering...

#define GS_CMD_BASE 0

// (0 invalidGSCommand)
GS_CMD(1,
       GS_CMD_SETMODE,
       "setMode",
       STRING)
GS_CMD(2,
       GS_CMD_FINDGROUP,
       "findGroup",
       NONE)
GS_CMD(3,
       GS_CMD_HASTARGET,
       "hasTarget",
       NONE)
GS_CMD(4,
       GS_CMD_SETTARGET,
       "setTarget",
       STRING)
GS_CMD(5,
       GS_CMD_REPATH,
       "repath",
       NONE)
GS_CMD(6,
       GS_CMD_PATHTO,
       "pathTo",
       STRING)
GS_CMD(7,
       GS_CMD_STOREPATH,
       "storePath",
       INT)
GS_CMD(8,
       GS_CMD_GROUPCENTERPOSITION,
       "groupCenterPosition",
       NONE)
GS_CMD(9,
       GS_CMD_MOVETOPOSITION,
       "moveToPosition",
       NONE)
GS_CMD(10,
       GS_CMD_NEXTPATH,
       "nextPath",
       NONE)
GS_CMD(11,
       GS_CMD_SETSPEED,
       "setSpeed",
       STRING)
GS_CMD(12,
       GS_CMD_TARGETCLOSERTO,
       "targetCloserTo",
       STRING)
GS_CMD(13,
       GS_CMD_UNITPOSITION,
       "unitPosition",
       NONE)
GS_CMD(14,
       GS_CMD_TURNTOWARD,
       "turnToward",
       NONE)
GS_CMD(15,
       GS_CMD_TARGETPOSITION,
       "targetPosition",
       NONE)
GS_CMD(16,
       GS_CMD_TURNBYANGLE,
       "turnByAngle",
       INT)
GS_CMD(17,
       GS_CMD_CHOOSEPATH,
       "choosePath",
       INT)
GS_CMD(18,
       GS_CMD_PATHSTART,
       "pathStart",
       STRING)
GS_CMD(19,
       GS_CMD_PATHEND,
       "pathEnd",
       STRING)
GS_CMD(20,
       GS_CMD_ATPATHEND,
       "atPathEnd",
       NONE)
GS_CMD(21,
       GS_CMD_MOVETOPATH,
       "moveToPath",
       NONE)
GS_CMD(22,
       GS_CMD_ALERT,
       "alert",
       INT)
GS_CMD(23,
       GS_CMD_HASGROUP,
       "hasGroup",
       NONE)
GS_CMD(24,
       GS_CMD_ADAPTGROUPSCRIPT,
       "adaptGroupScript",
       NONE)
GS_CMD(25,
       GS_CMD_CHOOSEGROUPPATH,
       "chooseGroupPath",
       NONE)
GS_CMD(26,
       GS_CMD_POSITIONCLOSERTHAN,
       "positionCloserThan",
       INT)
GS_CMD(27,
       GS_CMD_POSITIONCLOSER,
       "positionCloser",
       NONE)
GS_CMD(28,
       GS_CMD_DISTANCETOPOSITION,
       "distanceToPosition",
       NONE)
GS_CMD(29,
       GS_CMD_INTERPOLATEPOSITION,
       "interpolatePosition",
       INT)
GS_CMD(30,
       GS_CMD_SOLVEPATHNUMBERBYORDER,
       "solvePathNumberByOrder",
       INT)
GS_CMD(31,
       GS_CMD_MOVETOPOSITIONCUT,
       "moveToPositionCut",
       INT)
GS_CMD(32,
       GS_CMD_HEALTHPERCENTAGE,
       "healthPercentage",
       NONE)
GS_CMD(33,
       GS_CMD_HEATPERCENTAGE,
       "heatPercentage",
       NONE)
GS_CMD(34,
       GS_CMD_AMMOPERCENTAGE,
       "ammoPercentage",
       NONE)
GS_CMD(35,
       GS_CMD_ISHOSTILE,
       "isHostile",
       STRING)
GS_CMD(36,
       GS_CMD_OTHERUNITPOSITION,
       "otherUnitPosition",
       STRING)
GS_CMD(37,
       GS_CMD_DESTINATIONPOSITION,
       "destinationPosition",
       NONE)
GS_CMD(38,
       GS_CMD_FINDCLOSESTPATH,
       "findClosestPath",
       NONE)
GS_CMD(39,
       GS_CMD_ISUNITDESTROYED,
       "isUnitDestroyed",
       NONE)
GS_CMD(40,
       GS_CMD_ALERTATPOSITION,
       "alertAtPosition",
       INT)
GS_CMD(41,
       GS_CMD_ISMODE,
       "isMode",
       STRING)
GS_CMD(42,
       GS_CMD_STOPMOVEMENT,
       "stopMovement",
       NONE)
GS_CMD(43,
       GS_CMD_SETUNITVARIABLE,
       "setUnitVariable",
       STRING)
GS_CMD(44,
       GS_CMD_GETUNITVARIABLE,
       "getUnitVariable",
       STRING)
GS_CMD(45,
       GS_CMD_FINDCOVER,
       "findCover",
       NONE)
GS_CMD(46,
       GS_CMD_LASTTARGETPOSITION,
       "lastTargetPosition",
       NONE)
GS_CMD(47,
       GS_CMD_SETUNIT,
       "setUnit",
       STRING)
GS_CMD(48,
       GS_CMD_RESTOREUNIT,
       "restoreUnit",
       NONE)
GS_CMD(49,
       GS_CMD_SETCLOSESTFRIENDLYUNIT,
       "setClosestFriendlyUnit",
       NONE)
GS_CMD(50,
       GS_CMD_SETCLOSESTHOSTILEUNIT,
       "setClosestHostileUnit",
       NONE)
GS_CMD(51,
       GS_CMD_UNITOWNERPLAYER,
       "unitOwnerPlayer",
       NONE)
GS_CMD(52,
       GS_CMD_ISUNITCHARACTERNAME,
       "isUnitCharacterName",
       STRING)
GS_CMD(53,
       GS_CMD_SETNEXTOWNEDUNIT,
       "setNextOwnedUnit",
       NONE)
GS_CMD(54,
       GS_CMD_SETRANDOMOWNEDUNIT,
       "setRandomOwnedUnit",
       NONE)
GS_CMD(55,
       GS_CMD_ISUNITAVAILABLE,
       "isUnitAvailable",
       STRING)
GS_CMD(56,
       GS_CMD_SETUNITBYCHARACTERNAME,
       "setUnitByCharacterName",
       STRING)
GS_CMD(57,
       GS_CMD_ADDCHARACTER,
       "addCharacter",
       STRING)
GS_CMD(58,
       GS_CMD_ADDUNIT,
       "addUnit",
       STRING)
GS_CMD(59,
       GS_CMD_ADDUNITROOTPART,
       "addUnitRootPart",
       STRING)
GS_CMD(60,
       GS_CMD_ADDSUBPART,
       "addSubPart",
       STRING)
GS_CMD(61,
       GS_CMD_TOPARENTPART,
       "toParentPart",
       NONE)
GS_CMD(62,
       GS_CMD_TOROOTPART,
       "toRootPart",
       NONE)
GS_CMD(63,
       GS_CMD_SETUNITANGLE,
       "setUnitAngle",
       INT)
GS_CMD(64,
       GS_CMD_SPAWNUNIT,
       "spawnUnit",
       NONE)
GS_CMD(65,
       GS_CMD_SETUNITSCRIPT,
       "setUnitScript",
       STRING)
GS_CMD(66,
       GS_CMD_SETUNITSPAWNCOORDINATES,
       "setUnitSpawnCoordinates",
       STRING)
GS_CMD(67,
       GS_CMD_ISSPEED,
       "isSpeed",
       STRING)
GS_CMD(68,
       GS_CMD_ISUNITINSIDEBUILDING,
       "isUnitInsideBuilding",
       NONE)
GS_CMD(69,
       GS_CMD_ISUNITHIDDEN,
       "isUnitHidden",
       NONE)
GS_CMD(70,
       GS_CMD_ISUNITVERYHIDDEN,
       "isUnitVeryHidden",
       NONE)
GS_CMD(71,
       GS_CMD_ISUNITCOVERED,
       "isUnitCovered",
       NONE)
GS_CMD(72,
       GS_CMD_ISUNITINVEGETATION,
       "isUnitInVegetation",
       NONE)
GS_CMD(73,
       GS_CMD_UNITSPAWNPOSITION,
       "unitSpawnPosition",
       NONE)
GS_CMD(74,
       GS_CMD_GIVEUNITSIGHTBONUS,
       "giveUnitSightBonus",
       NONE)
GS_CMD(75,
       GS_CMD_ISTARGETUNCONSCIOUS,
       "isTargetUnconscious",
       NONE)
GS_CMD(76,
       GS_CMD_ISUNITTYPE,
       "isUnitType",
       STRING)
GS_CMD(77,
       GS_CMD_POSITIONDISTANCETONEARESTCOVER,
       "positionDistanceToNearestCover",
       NONE)
GS_CMD(78,
       GS_CMD_ISUNITUNCONSCIOUS,
       "isUnitUnconscious",
       NONE)
GS_CMD(79,
       GS_CMD_MOVETOPOSITIONNOWAIT,
       "moveToPositionNoWait",
       NONE)
GS_CMD(80,
       GS_CMD_WARPUNITTOPOSITION,
       "warpUnitToPosition",
       NONE)
GS_CMD(81,
       GS_CMD_SETUNITROTATIONYTOVALUE,
       "setUnitRotationYToValue",
       NONE)
GS_CMD(82,
       GS_CMD_SETUNITROTATIONXTOVALUE,
       "setUnitRotationXToValue",
       NONE)
GS_CMD(83,
       GS_CMD_SETUNITROTATIONZTOVALUE,
       "setUnitRotationZToValue",
       NONE)
GS_CMD(84,
       GS_CMD_SLIDEUNITROTATIONYTOWARDVALUE,
       "slideUnitRotationYTowardValue",
       NONE)
GS_CMD(85,
       GS_CMD_SLIDEUNITROTATIONXTOWARDVALUE,
       "slideUnitRotationXTowardValue",
       NONE)
GS_CMD(86,
       GS_CMD_SLIDEUNITROTATIONZTOWARDVALUE,
       "slideUnitRotationZTowardValue",
       NONE)
GS_CMD(87,
       GS_CMD_SETFIRSTOWNEDUNIT,
       "setFirstOwnedUnit",
       NONE)
GS_CMD(88,
       GS_CMD_WARPUNITTOHEIGHT,
       "warpUnitToHeight",
       INT)
GS_CMD(89,
       GS_CMD_STOPUNITVELOCITY,
       "stopUnitVelocity",
       NONE)
GS_CMD(90,
       GS_CMD_MAKEUNITVISIBLE,
       "makeUnitVisible",
       NONE)
GS_CMD(91,
       GS_CMD_ABSOLUTEINTERPOLATEPOSITION,
       "absoluteInterpolatePosition",
       INT)
GS_CMD(92,
       GS_CMD_STORENEXTPATH,
       "storeNextPath",
       NONE)
GS_CMD(93,
       GS_CMD_PATHNAME,
       "pathName",
       STRING)
GS_CMD(94,
       GS_CMD_SOLVEPATHNUMBERBYNAME,
       "solvePathNumberByName",
       STRING)
GS_CMD(95,
       GS_CMD_SETFIRSTOWNEDUNITOFTYPE,
       "setFirstOwnedUnitOfType",
       STRING)
GS_CMD(96,
       GS_CMD_SEEKSUBPART,
       "seekSubPart",
       STRING)
GS_CMD(97,
       GS_CMD_ISPARTAVAILABLE,
       "isPartAvailable",
       NONE)
GS_CMD(98,
       GS_CMD_ADDHEALTH,
       "addHealth",
       INT)
GS_CMD(99,
       GS_CMD_ADDARMOR,
       "addArmor",
       INT)
GS_CMD(100,
       GS_CMD_GETARMOR,
       "getArmor",
       NONE)
GS_CMD(101,
       GS_CMD_SETARMORCLASS,
       "setArmorClass",
       INT)
GS_CMD(102,
       GS_CMD_GETARMORCLASS,
       "getArmorClass",
       NONE)
GS_CMD(103,
       GS_CMD_SETARMORATLEASTTO,
       "setArmorAtLeastTo",
       INT)
GS_CMD(104,
       GS_CMD_SETARMORCLASSATLEASTTO,
       "setArmorClassAtLeastTo",
       INT)
GS_CMD(105,
       GS_CMD_SETHEALTH,
       "setHealth",
       INT)
GS_CMD(106,
       GS_CMD_ADDAMMOTOPART,
       "addAmmoToPart",
       INT)
GS_CMD(107,
       GS_CMD_SETUNITSPAWNCOORDINATESTOPOSITION,
       "setUnitSpawnCoordinatesToPosition",
       NONE)
GS_CMD(108,
       GS_CMD_PATHTOPOSITION,
       "pathToPosition",
       INT)
GS_CMD(109,
       GS_CMD_GETUNITANGLE,
       "getUnitAngle",
       NONE)
GS_CMD(110,
       GS_CMD_ISPARTTYPE,
       "isPartType",
       STRING)
GS_CMD(111,
       GS_CMD_MOVEUNITLEFT,
       "moveUnitLeft",
       INT)
GS_CMD(112,
       GS_CMD_MOVEUNITRIGHT,
       "moveUnitRight",
       INT)
GS_CMD(113,
       GS_CMD_FORCEUNITANIMATION,
       "forceUnitAnimation",
       STRING)
GS_CMD(114,
       GS_CMD_ENDFORCEDUNITANIMATION,
       "endForcedUnitAnimation",
       NONE)
GS_CMD(115,
       GS_CMD_DISABLEUNITAI,
       "disableUnitAI",
       NONE)
GS_CMD(116,
       GS_CMD_ENABLEUNITAI,
       "enableUnitAI",
       NONE)
GS_CMD(117,
       GS_CMD_CLEARTARGET,
       "clearTarget",
       NONE)
GS_CMD(118,
       GS_CMD_MOVEUNITFORWARD,
       "moveUnitForward",
       INT)
GS_CMD(119,
       GS_CMD_MOVEUNITBACKWARD,
       "moveUnitBackward",
       INT)
GS_CMD(120,
       GS_CMD_GIVEUNITITEM,
       "giveUnitItem",
       STRING)
GS_CMD(121,
       GS_CMD_SETSELECTEDWEAPON,
       "setSelectedWeapon",
       STRING)
GS_CMD(122,
       GS_CMD_SETSELECTEDSECONDARYWEAPON,
       "setSelectedSecondaryWeapon",
       STRING)
GS_CMD(123,
       GS_CMD_DESTROYUNIT,
       "destroyUnit",
       NONE)
GS_CMD(124,
       GS_CMD_FINDCLOSESTUNITOFTYPE,
       "findClosestUnitOfType",
       STRING)
GS_CMD(125,
       GS_CMD_GETUNITID,
       "getUnitId",
       NONE)
GS_CMD(126,
       GS_CMD_SETUNITBYID,
       "setUnitById",
       NONE)
GS_CMD(127,
       GS_CMD_MAKEUNITEXECUTE,
       "makeUnitExecute",
       NONE)
GS_CMD(128,
       GS_CMD_GETPATHPOSITION,
       "getPathPosition",
       NONE)
GS_CMD(129,
       GS_CMD_MOVETOPOSITIONCUTNOWAIT,
       "moveToPositionCutNoWait",
       INT)
GS_CMD(130,
       GS_CMD_WASLASTPATHFINDSUCCESS,
       "wasLastPathfindSuccess",
       NONE)
GS_CMD(131,
       GS_CMD_SETFLASHLIGHTENERGY,
       "setFlashlightEnergy",
       NONE)
GS_CMD(132,
       GS_CMD_GETFLASHLIGHTENERGY,
       "getFlashlightEnergy",
       NONE)
GS_CMD(133,
       GS_CMD_CHOOSEPATHBYVALUE,
       "choosePathByValue",
       NONE)
GS_CMD(134,
       GS_CMD_ABSOLUTEINTERPOLATEPOSITIONCLOCKWISE,
       "absoluteInterpolatePositionClockwise",
       INT)
GS_CMD(135,
       GS_CMD_ABSOLUTEINTERPOLATEPOSITIONANTICLOCKWISE,
       "absoluteInterpolatePositionAnticlockwise",
       INT)
GS_CMD(136,
       GS_CMD_INTERPOLATEPOSITIONCLOCKWISE,
       "interpolatePositionClockwise",
       INT)
GS_CMD(137,
       GS_CMD_INTERPOLATEPOSITIONANTICLOCKWISE,
       "interpolatePositionAnticlockwise",
       INT)
GS_CMD(138,
       GS_CMD_DEFORMPATHFORDARKNESS,
       "deformPathForDarkness",
       NONE)
GS_CMD(139,
       GS_CMD_WAITFORPATHCOMPLETE,
       "waitForPathComplete",
       NONE)
GS_CMD(140,
       GS_CMD_ISUNITIMMORTAL,
       "isUnitImmortal",
       NONE)
GS_CMD(141,
       GS_CMD_MAKEUNITMORTAL,
       "makeUnitMortal",
       NONE)
GS_CMD(142,
       GS_CMD_MAKEUNITIMMORTAL,
       "makeUnitImmortal",
       NONE)
GS_CMD(143,
       GS_CMD_MAKEJUMP,
       "makeJump",
       INT)
GS_CMD(144,
       GS_CMD_ISLINEOFJUMPFORWARD,
       "isLineOfJumpForward",
       INT)
GS_CMD(145,
       GS_CMD_ISLINEOFJUMPFORWARDATTARGET,
       "isLineOfJumpForwardAtTarget",
       NONE)
GS_CMD(146,
       GS_CMD_SKIPMAINSCRIPTWAIT,
       "skipMainScriptWait",
       NONE)
GS_CMD(147,
       GS_CMD_DOESUNITOBSTACLEOVERLAP,
       "doesUnitObstacleOverlap",
       NONE)
GS_CMD(148,
       GS_CMD_FINDDOORCOUNTERPART,
       "findDoorCounterpart",
       NONE)
GS_CMD(149,
       GS_CMD_CLEARUNITOBSTACLEOVERLAPFLAG,
       "clearUnitObstacleOverlapFlag",
       NONE)
GS_CMD(150,
       GS_CMD_SETUNITFIRSTPERSONCONTROL,
       "setUnitFirstPersonControl",
       NONE)
GS_CMD(151,
       GS_CMD_FINDCLOSESTUNITWITHVARIABLESET,
       "findClosestUnitWithVariableSet",
       STRING)
GS_CMD(152,
       GS_CMD_SELECTUNITWEAPON,
       "selectUnitWeapon",
       INT)
GS_CMD(153,
       GS_CMD_SETUNITBYIDSTRING,
       "setUnitByIdString",
       STRING)
GS_CMD(154,
       GS_CMD_SETUNITIDSTRING,
       "setUnitIdString",
       STRING)

GS_CMD(155,
       GS_CMD_SETFLASHLIGHTON,
       "setFlashlightOn",
       NONE)
GS_CMD(156,
       GS_CMD_SETFLASHLIGHTOFF,
       "setFlashlightOff",
       NONE)
GS_CMD(157,
       GS_CMD_WARPUNITTOFLOATHEIGHT,
       "warpUnitToFloatHeight",
       FLOAT)

GS_CMD(158,
       GS_CMD_ISUNITDOOREXECUTETYPE,
       "isUnitDoorExecuteType",
       NONE)

GS_CMD(159,
       GS_CMD_SKIPUNITWEAPONRELOADDELAY,
       "skipUnitWeaponReloadDelay",
       INT)
GS_CMD(160,
       GS_CMD_GETUNITWEAPONRELOADDELAY,
       "getUnitWeaponReloadDelay",
       NONE)

GS_CMD(161,
       GS_CMD_GETUNITWEAPONFIRETIME,
       "getUnitWeaponFireTime",
       NONE)
GS_CMD(162,
       GS_CMD_GETUNITWEAPONWAITDELAY,
       "getUnitWeaponWaitDelay",
       NONE)

GS_CMD(163,
       GS_CMD_LISTENTOEVENT,
       "listenToEvent",
       STRING)
GS_CMD(164,
       GS_CMD_MAKEJUMPTOWARDPOSITION,
       "makeJumpTowardPosition",
       INT)
GS_CMD(165,
       GS_CMD_ISLINEOFJUMPTOWARDPOSITION,
       "isLineOfJumpTowardPosition",
       NONE)
GS_CMD(166,
       GS_CMD_ISUNITFACINGTARGET,
       "isUnitFacingTarget",
       INT)

GS_CMD(167,
       GS_CMD_GHOSTPREDICTFUTURE,
       "ghostPredictFuture",
       NONE)
GS_CMD(168,
       GS_CMD_ISTARGETFACINGUNIT,
       "isTargetFacingUnit",
       INT)
GS_CMD(169,
       GS_CMD_SELECTUNITWEAPONBYVALUE,
       "selectUnitWeaponByValue",
       NONE)

GS_CMD(170,
       GS_CMD_RESCRIPTMAIN,
       "reScriptMain",
       NONE)
GS_CMD(171,
       GS_CMD_CHANGEMAINSCRIPT,
       "changeMainScript",
       STRING)
GS_CMD(172,
       GS_CMD_TERMINATEMAINSCRIPT,
       "terminateMainScript",
       NONE)

GS_CMD(173,
       GS_CMD_ISFLASHLIGHTON,
       "isFlashlightOn",
       NONE)
GS_CMD(174,
       GS_CMD_HASFLASHLIGHT,
       "hasFlashlight",
       NONE)

GS_CMD(175,
       GS_CMD_ACCURATEDISTANCETOPOSITION,
       "accurateDistanceToPosition",
       NONE)

GS_CMD(176,
       GS_CMD_ISUNITFACINGPOSITION,
       "isUnitFacingPosition",
       INT)

GS_CMD(177,
       GS_CMD_SETCLOSESTOWNEDUNIT,
       "setClosestOwnedUnit",
       NONE)
GS_CMD(178,
       GS_CMD_GETUNITIDSTRING,
       "getUnitIdString",
       NONE)
GS_CMD(179,
       GS_CMD_WARPUNITTOPOSITIONFROMSECONDARYUSINGOFFSET,
       "warpUnitToPositionFromSecondaryUsingOffset",
       NONE)

GS_CMD(180,
       GS_CMD_SETUNITBYIDSTRINGVALUE,
       "setUnitByIdStringValue",
       NONE)

GS_CMD(181,
       GS_CMD_SETPARTTYPEDATA,
       "setPartTypeData",
       STRING)

GS_CMD(182,
       GS_CMD_DOIDLE,
       "doIdle",
       INT)

GS_CMD(183,
       GS_CMD_NOUNITAIDISABLERANGE,
       "noUnitAIDisableRange",
       NONE)

GS_CMD(184,
       GS_CMD_SETSELECTEDUNITITEM,
       "setSelectedUnitItem",
       STRING)
GS_CMD(185,
       GS_CMD_GETUNITITEMCOUNT,
       "getUnitItemCount",
       STRING)
GS_CMD(186,
       GS_CMD_REMOVEUNITITEM,
       "removeUnitItem",
       STRING)
GS_CMD(187,
       GS_CMD_CLEARSELECTEDUNITITEM,
       "clearSelectedUnitItem",
       NONE)
GS_CMD(188,
       GS_CMD_ISSELECTEDUNITITEM,
       "isSelectedUnitItem",
       STRING)

GS_CMD(189,
       GS_CMD_FADEUNITVISIBILITYUSINGTIMEVALUE,
       "fadeUnitVisibilityUsingTimeValue",
       FLOAT)
GS_CMD(190,
       GS_CMD_FADEUNITLIGHTINGUSINGTIMEVALUE,
       "fadeUnitLightingUsingTimeValue",
       FLOAT)

GS_CMD(191,
       GS_CMD_ENABLEUNITCOLLISIONCHECK,
       "enableUnitCollisionCheck",
       NONE)
GS_CMD(192,
       GS_CMD_DISABLEUNITCOLLISIONCHECK,
       "disableUnitCollisionCheck",
       NONE)

GS_CMD(193,
       GS_CMD_WARPUNITTOUNIT,
       "warpUnitToUnit",
       STRING)

GS_CMD(194,
       GS_CMD_MOVEUNITLEFTFLOAT,
       "moveUnitLeftFloat",
       FLOAT)
GS_CMD(195,
       GS_CMD_MOVEUNITRIGHTFLOAT,
       "moveUnitRightFloat",
       FLOAT)
GS_CMD(196,
       GS_CMD_MOVEUNITFORWARDFLOAT,
       "moveUnitForwardFloat",
       FLOAT)
GS_CMD(197,
       GS_CMD_MOVEUNITBACKWARDFLOAT,
       "moveUnitBackwardFloat",
       FLOAT)

GS_CMD(198,
       GS_CMD_SETAREACENTERTOPOSITION,
       "setAreaCenterToPosition",
       NONE)
GS_CMD(199,
       GS_CMD_SETAREACLIPTOVALUE,
       "setAreaClipToValue",
       NONE)
GS_CMD(200,
       GS_CMD_SETAREARANGETOVALUE,
       "setAreaRangeToValue",
       NONE)
GS_CMD(201,
       GS_CMD_HASAREATRIGGERED,
       "hasAreaTriggered",
       NONE)
GS_CMD(202,
       GS_CMD_AREALISTENTOPLAYERUNITS,
       "areaListenToPlayerUnits",
       NONE)

GS_CMD(203,
       GS_CMD_STARTFOLLOWPLAYER,
       "startFollowPlayer",
       NONE)
GS_CMD(204,
       GS_CMD_STOPFOLLOWPLAYER,
       "stopFollowPlayer",
       NONE)

GS_CMD(205,
       GS_CMD_SETTARGETBYIDSTRING,
       "setTargetByIdString",
       STRING)

GS_CMD(206,
       GS_CMD_ISUNITONFIRE,
       "isUnitOnFire",
       NONE)
GS_CMD(207,
       GS_CMD_SETUNITONFIRE,
       "setUnitOnFire",
       INT)

GS_CMD(208,
       GS_CMD_CANUNITWARPTOPOSITION,
       "canUnitWarpToPosition",
       NONE)

GS_CMD(209,
       GS_CMD_MARKALIVEHOSTILEUNITS,
       "markAliveHostileUnits",
       NONE)
GS_CMD(210,
       GS_CMD_RESPAWNMARKEDHOSTILEUNITSALIVE,
       "respawnMarkedHostileUnitsAlive",
       NONE)

GS_CMD(211,
       GS_CMD_DELETEALLUNITPARTS,
       "deleteAllUnitParts",
       NONE)
GS_CMD(212,
       GS_CMD_RECREATEVISUALFORUNIT,
       "recreateVisualForUnit",
       NONE)
GS_CMD(213,
       GS_CMD_GETAMMOFORUNITWEAPON,
       "getAmmoForUnitWeapon",
       STRING)
GS_CMD(214,
       GS_CMD_SETAMMOTOPARTBYVALUE,
       "setAmmoToPartByValue",
       NONE)

GS_CMD(215,
       GS_CMD_SETUNITITEMCOUNTTOVALUE,
       "setUnitItemCountToValue",
       STRING)

GS_CMD(216,
       GS_CMD_SETUNITHPTOVALUE,
       "setUnitHPToValue",
       NONE)
GS_CMD(217,
       GS_CMD_GETUNITHP,
       "getUnitHP",
       NONE)

GS_CMD(218,
       GS_CMD_STOPALLHOSTILES,
       "stopAllHostiles",
       NONE)
GS_CMD(219,
       GS_CMD_CLEARTARGETFORALLHOSTILES,
       "clearTargetForAllHostiles",
       NONE)
GS_CMD(220,
       GS_CMD_HIDEALLHOSTILES,
       "hideAllHostiles",
       NONE)
GS_CMD(221,
       GS_CMD_HIDEALLUNITS,
       "hideAllUnits",
       NONE)
GS_CMD(222,
       GS_CMD_SHOWUNIT,
       "showUnit",
       NONE)
GS_CMD(223,
       GS_CMD_HIDEUNIT,
       "hideUnit",
       NONE)
GS_CMD(224,
       GS_CMD_DISABLEUNITAITEMPORARILYFORALLHOSTILES,
       "disableUnitAITemporarilyForAllHostiles",
       NONE)
GS_CMD(225,
       GS_CMD_ENABLEUNITAITEMPORARILYFORALLHOSTILES,
       "enableUnitAITemporarilyForAllHostiles",
       NONE)
GS_CMD(226,
       GS_CMD_SHOWALLHOSTILES,
       "showAllHostiles",
       NONE)
GS_CMD(227,
       GS_CMD_SHOWALLUNITS,
       "showAllUnits",
       NONE)

GS_CMD(228,
       GS_CMD_GETUNITEXECUTETIP,
       "getUnitExecuteTip",
       NONE)
GS_CMD(229,
       GS_CMD_SETUNITEXECUTETIPTOSTRINGVALUE,
       "setUnitExecuteTipToStringValue",
       NONE)
GS_CMD(230,
       GS_CMD_CLEARUNITEXECUTETIP,
       "clearUnitExecuteTip",
       NONE)

GS_CMD(231,
       GS_CMD_FINDCLOSESTUNITWITHVARIABLENOTSET,
       "findClosestUnitWithVariableNotSet",
       STRING)
GS_CMD(232,
       GS_CMD_FINDCLOSESTUNITOFTYPEWITHSTRINGVALUEVARIABLESET,
       "findClosestUnitOfTypeWithStringValueVariableSet",
       STRING)
GS_CMD(233,
       GS_CMD_FINDCLOSESTUNITOFTYPEWITHSTRINGVALUEVARIABLENOTSET,
       "findClosestUnitOfTypeWithStringValueVariableNotSet",
       STRING)

GS_CMD(234,
       GS_CMD_ISUNITEXECUTABLEBYPLAYER,
       "isUnitExecutableByPlayer",
       NONE)
GS_CMD(235,
       GS_CMD_HASUNITDIEDBYPOISON,
       "hasUnitDiedByPoison",
       NONE)

GS_CMD(236,
       GS_CMD_ISUNITTARGETINSIDEBUILDING,
       "isUnitTargetInsideBuilding",
       NONE)

GS_CMD(237,
       GS_CMD_COPYEXTPATHFROMORIGINALUNIT,
       "copyExtPathFromOriginalUnit",
       STRING)

GS_CMD(238,
       GS_CMD_SETTARGETBYIDVALUE,
       "setTargetByIdValue",
       NONE)
GS_CMD(239,
       GS_CMD_SETUNITWEAPONRELOADDELAYTOVALUE,
       "setUnitWeaponReloadDelayToValue",
       NONE)
GS_CMD(240,
       GS_CMD_SETUNITWALKSTOPTIMETOVALUE,
       "setUnitWalkStopTimeToValue",
       NONE)

GS_CMD(241,
       GS_CMD_GETUNITWALKSTOPTIME,
       "getUnitWalkStopTime",
       NONE)

GS_CMD(242,
       GS_CMD_SETUNITVISIBILITY,
       "setUnitVisibility",
       FLOAT)

GS_CMD(243,
       GS_CMD_CREATEUNITEFFECTLAYERUSINGTIMEVALUE,
       "createUnitEffectLayerUsingTimeValue",
       STRING)
GS_CMD(244,
       GS_CMD_SETUNITFORCEDLIGHTRENDERVISIBILITY,
       "setUnitForcedLightRenderVisibility",
       FLOAT)
GS_CMD(245,
       GS_CMD_ENDUNITFORCEDLIGHTRENDERVISIBILITY,
       "endUnitForcedLightRenderVisibility",
       NONE)

GS_CMD(246,
       GS_CMD_DELETEUNITEFFECTLAYER,
       "deleteUnitEffectLayer",
       NONE)
GS_CMD(247,
       GS_CMD_CLEARUNITHITSCRIPTDELAY,
       "clearUnitHitScriptDelay",
       NONE)

GS_CMD(248,
       GS_CMD_SETUNITRUSHINGON,
       "setUnitRushingOn",
       NONE)
GS_CMD(249,
       GS_CMD_SETUNITRUSHINGOFF,
       "setUnitRushingOff",
       NONE)
GS_CMD(250,
       GS_CMD_RESTOREUNITRUSHING,
       "restoreUnitRushing",
       NONE)

GS_CMD(251,
       GS_CMD_GETSELECTEDUNITWEAPON,
       "getSelectedUnitWeapon",
       NONE)

GS_CMD(252,
       GS_CMD_setUnitHighlightStyle,
       "setUnitHighlightStyle",
       INT)
GS_CMD(253,
       GS_CMD_setUnitHighlightText,
       "setUnitHighlightText",
       STRING)

GS_CMD_SIMPLE(254, moveOriginalUnitToUnitHelper,                  STRING)
GS_CMD_SIMPLE(255, resetUnitMaterialEffects,                      NONE)

GS_CMD_SIMPLE(256, setUnitHaloBrightnessToValue,                  NONE)

GS_CMD_SIMPLE(257, setFlashlightOperable,                         NONE)
GS_CMD_SIMPLE(258, setFlashlightInoperable,                       NONE)

GS_CMD_SIMPLE(259, setUnitObjectSelfIllumination,                 FLOAT)

GS_CMD_SIMPLE(260, setHealthPercentageToValue,                    FLOAT)

GS_CMD_SIMPLE(261, enableTouchBullet,                             FLOAT)
GS_CMD_SIMPLE(262, disableTouchBullet,                            FLOAT)

GS_CMD_SIMPLE(263, setUnitWeaponInoperable,                       STRING)
GS_CMD_SIMPLE(264, setUnitWeaponOperable,                         STRING)

GS_CMD_SIMPLE(265, makeUnitUnspottable,                           NONE)
GS_CMD_SIMPLE(266, makeUnitSpottable,                             NONE)

GS_CMD_SIMPLE(267, setGlowFactor,                                 FLOAT)

GS_CMD_SIMPLE(268, isUnitHitByBullet,                             STRING)

GS_CMD_SIMPLE(269, doesUnitExistWithIdString,                     STRING)

GS_CMD_SIMPLE(270, interpolatePositionByValue,                    NONE)
GS_CMD_SIMPLE(271, setUnitRotationToFaceUnit,                     STRING)

GS_CMD_SIMPLE(272, resetUnitNormalState,                          NONE)

GS_CMD_SIMPLE(273, rotateUnitAroundUnitByValue,                   STRING)

GS_CMD_SIMPLE(274, isUnitElectrified,                             NONE)
GS_CMD_SIMPLE(275, isUnitHitByElectricBullet,                     NONE)

GS_CMD_SIMPLE(276, setUnitTypeData,                               STRING)

GS_CMD_SIMPLE(277, getRelativeAngleToPosition,                    NONE)

GS_CMD_SIMPLE(278, openUnitHealthBar,                             NONE)
GS_CMD_SIMPLE(279, closeUnitHealthBar,                            NONE)

GS_CMD_SIMPLE(280, updateUnitSidewaysFlag,                        NONE)
GS_CMD_SIMPLE(281, setUnitSidewaysFlagToValue,                    NONE)

GS_CMD_SIMPLE(282, updateUnitSideGravity,                         NONE)
GS_CMD_SIMPLE(283, setUnitSideGravityXToValue,                    NONE)
GS_CMD_SIMPLE(284, setUnitSideGravityZToValue,                    NONE)

GS_CMD_SIMPLE(285, disableUnitPhysicsObjectFeedback,              NONE)
GS_CMD_SIMPLE(286, enableUnitPhysicsObjectFeedback,               NONE)

GS_CMD_SIMPLE(287, isUnitPhysicsObjectDifference,                 FLOAT)

GS_CMD_SIMPLE(288, lockUnitToPhysicsObject,                       NONE)
GS_CMD_SIMPLE(289, unlockUnitFromPhysicsObject,                   NONE)

GS_CMD_SIMPLE(290, isUnitLockedToPhysicsObject,                   NONE)

GS_CMD_SIMPLE(291, setUnitVisualizationOffset,                    FLOAT)

GS_CMD_SIMPLE(292, copyExtPathToOriginalUnit,                     STRING)

GS_CMD_SIMPLE(293, risingMessage,                                 STRING)

GS_CMD_SIMPLE(294, deactivateUnit,                                NONE)
GS_CMD_SIMPLE(295, activateUnitByIdString,                        STRING)

GS_CMD_SIMPLE(296, setFirstPersonControlledUnit,                  NONE)

GS_CMD_SIMPLE(297, setUnitSideVelocityMaxToValue,                 NONE)

GS_CMD_SIMPLE(298, setUnitJumpNotAllowedTime,                     INT)
GS_CMD_SIMPLE(299, setUnitJumpNotAllowedTimeToValue,              NONE)
GS_CMD_SIMPLE(300, getUnitJumpNotAllowedTime,                     NONE)

GS_CMD_SIMPLE(301, activateUnit,                                  NONE)
GS_CMD_SIMPLE(302, setFirstOwnedUnitOfTypeIncludingInActiveUnits, STRING)

GS_CMD_SIMPLE(303, setUnitJumpCounterTime,                        INT)

GS_CMD_SIMPLE(304, setPlayerWeaponry,                             STRING)

GS_CMD_SIMPLE(305, isSelectedUnitWeaponOfType,                    STRING)

GS_CMD_SIMPLE(306, deleteUnitPhysicsObject,                       NONE)
GS_CMD_SIMPLE(307, setUnitSide,                                   INT)
GS_CMD_SIMPLE(308, setOwnedUnitOfType,                            STRING)
GS_CMD_SIMPLE(309, setOwnedUnitOfTypeIncludingInActiveUnits,      STRING)
GS_CMD_SIMPLE(310, getUnitType,                                   NONE)
GS_CMD_SIMPLE(311, doesWeaponExistInPlayerWeaponry,               STRING)
GS_CMD_SIMPLE(312, getUnitMaxHP,                                  NONE)
GS_CMD_SIMPLE(313, setUnitMaxHP,                                  NONE)
GS_CMD_SIMPLE(314, resetUnitMaxHP,                                NONE)
GS_CMD_SIMPLE(315, getHealth,                                     NONE)
GS_CMD_SIMPLE(316, setUnitPoisonResistance,                       FLOAT)
GS_CMD_SIMPLE(317, setUnitHPGainMode,                             STRING)
GS_CMD_SIMPLE(318, setUnitCriticalHitPercent,                     FLOAT)

GS_CMD_SIMPLE(319, makeUnitSkyModel,                              NONE)
GS_CMD_SIMPLE(320, warpUnitToAbsolutePosition,                    NONE)

GS_CMD_SIMPLE(321, setCustomWeaponTypeDataForType,                STRING)
GS_CMD_SIMPLE(322, changeUnitRootPartModel,                       STRING)
GS_CMD_SIMPLE(323, setUnitTimeFactor,                             FLOAT)

GS_CMD_SIMPLE(324, setCustomWeaponTypeData,                       STRING)
GS_CMD_SIMPLE(325, setUnitWeaponVisible,                          STRING)
GS_CMD_SIMPLE(326, setUnitWeaponInvisible,                        STRING)
GS_CMD_SIMPLE(327, unitTimeSinceLastDamaged,                      NONE)

GS_CMD_SIMPLE(328, createUnitPhysicsObject,                       NONE)

GS_CMD_SIMPLE(329, restoreDefaultSpeed,                           NONE)

GS_CMD_SIMPLE(330, setUnitStunned,                                INT)

GS_CMD_SIMPLE(331, getUnitOwner,                                  NONE)
GS_CMD_SIMPLE(332, makeUnitImmortalWithHitScript,                 NONE)
GS_CMD_SIMPLE(333, disableUnitAIWithHitScript,                    NONE)

GS_CMD_SIMPLE(334, setUnitCulling,                                INT)

GS_CMD_SIMPLE(335, setUnitHealthBarFlashingToValue,               NONE)
GS_CMD_SIMPLE(336, getAngleToPosition,                            NONE)

GS_CMD_SIMPLE(337, updateUnitVisualObjectInterpolation,           NONE)
GS_CMD_SIMPLE(338, setUnitNoClip,                                 INT)
GS_CMD_SIMPLE(339, setUnitNoHit,                                  INT)

GS_CMD_SIMPLE(340, isUnitHitByPoison,                             NONE)
GS_CMD_SIMPLE(341, setUnitShielded,                               INT)
GS_CMD_SIMPLE(342, reloadUnitWeapons,                             NONE)

#undef GS_CMD_BASE

// up to 399
