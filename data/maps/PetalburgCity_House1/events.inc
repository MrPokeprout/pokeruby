PetalburgCity_House1_EventObjects:: @ 8387444
	object_event 1, EVENT_OBJ_GFX_GIRL_1, 0, 7, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, 0, 0, PetalburgCity_House1_EventScript_1551E8, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN_1, 0, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgCity_House1_EventScript_1551DF, 0

PetalburgCity_House1_MapWarps:: @ 8387474
	warp_def 3, 8, 0, 0, MAP_PETALBURG_CITY
	warp_def 4, 8, 0, 0, MAP_PETALBURG_CITY

PetalburgCity_House1_MapEvents:: @ 8387484
	map_events PetalburgCity_House1_EventObjects, PetalburgCity_House1_MapWarps, 0x0, 0x0
